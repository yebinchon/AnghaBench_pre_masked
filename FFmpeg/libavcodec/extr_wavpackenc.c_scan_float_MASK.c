
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_4__ {int shifted_ones; int shifted_zeros; int shifted_both; int ordata; int float_shift; int float_flags; int max_exp; int flags; int crc_x; int float_max_exp; scalar_t__ neg_zeros; scalar_t__ false_zeros; } ;
typedef TYPE_1__ WavPackEncodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *,int,int) ;

__attribute__((used)) static int FUNC_6(WavPackEncodeContext *VAR_9,
                      int32_t *VAR_10, int32_t *VAR_11,
                      int VAR_12)
{
    uint32_t VAR_13 = 0xffffffffu;
    int VAR_14;

    VAR_9->shifted_ones = VAR_9->shifted_zeros = VAR_9->shifted_both = VAR_9->ordata = 0;
    VAR_9->float_shift = VAR_9->float_flags = 0;
    VAR_9->false_zeros = VAR_9->neg_zeros = 0;
    VAR_9->max_exp = 0;

    if (VAR_9->flags & VAR_8) {
        for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
            int32_t VAR_15 = VAR_10[VAR_14];
            VAR_13 = VAR_13 * 27 + FUNC_1(VAR_15) * 9 + FUNC_0(VAR_15) * 3 + FUNC_2(VAR_15);

            if (FUNC_0(VAR_15) > VAR_9->max_exp && FUNC_0(VAR_15) < 255)
                VAR_9->max_exp = FUNC_0(VAR_15);
        }
    } else {
        for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
            int32_t VAR_16;

            VAR_16 = VAR_10[VAR_14];
            VAR_13 = VAR_13 * 27 + FUNC_1(VAR_16) * 9 + FUNC_0(VAR_16) * 3 + FUNC_2(VAR_16);
            if (FUNC_0(VAR_16) > VAR_9->max_exp && FUNC_0(VAR_16) < 255)
                VAR_9->max_exp = FUNC_0(VAR_16);

            VAR_16 = VAR_11[VAR_14];
            VAR_13 = VAR_13 * 27 + FUNC_1(VAR_16) * 9 + FUNC_0(VAR_16) * 3 + FUNC_2(VAR_16);

            if (FUNC_0(VAR_16) > VAR_9->max_exp && FUNC_0(VAR_16) < 255)
                VAR_9->max_exp = FUNC_0(VAR_16);
        }
    }

    VAR_9->crc_x = VAR_13;

    if (VAR_9->flags & VAR_8) {
        for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
            FUNC_3(VAR_9, &VAR_10[VAR_14]);
    } else {
        for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
            FUNC_3(VAR_9, &VAR_10[VAR_14]);
            FUNC_3(VAR_9, &VAR_11[VAR_14]);
        }
    }

    VAR_9->float_max_exp = VAR_9->max_exp;

    if (VAR_9->shifted_both)
        VAR_9->float_flags |= VAR_4;
    else if (VAR_9->shifted_ones && !VAR_9->shifted_zeros)
        VAR_9->float_flags |= VAR_2;
    else if (VAR_9->shifted_ones && VAR_9->shifted_zeros)
        VAR_9->float_flags |= VAR_3;
    else if (VAR_9->ordata && !(VAR_9->ordata & 1)) {
        do {
            VAR_9->float_shift++;
            VAR_9->ordata >>= 1;
        } while (!(VAR_9->ordata & 1));

        if (VAR_9->flags & VAR_8)
            FUNC_4(VAR_10, VAR_12, VAR_9->float_shift);
        else
            FUNC_5(VAR_10, VAR_11, VAR_12, VAR_9->float_shift);
    }

    VAR_9->flags &= ~VAR_7;

    while (VAR_9->ordata) {
        VAR_9->flags += 1 << VAR_6;
        VAR_9->ordata >>= 1;
    }

    if (VAR_9->false_zeros || VAR_9->neg_zeros)
        VAR_9->float_flags |= VAR_5;

    if (VAR_9->neg_zeros)
        VAR_9->float_flags |= VAR_1;

    return VAR_9->float_flags & (VAR_0 | VAR_5 |
                             VAR_4 | VAR_3);
}
