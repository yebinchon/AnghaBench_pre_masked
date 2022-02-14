
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {unsigned int nwrap; unsigned int* coeffs; unsigned int** decoded; int lpcqoffset; int blocksize; int gb; int avctx; } ;
typedef TYPE_1__ ShortenContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,char*,int) ;
 int** VAR_6 ;
 unsigned int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(ShortenContext *VAR_7, int VAR_8, int VAR_9,
                               int VAR_10, int32_t VAR_11)
{
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    const int *VAR_18;

    if (VAR_8 == VAR_3) {

        VAR_12 = FUNC_4(&VAR_7->gb, VAR_4);
        if ((unsigned)VAR_12 > VAR_7->nwrap) {
            FUNC_2(VAR_7->avctx, VAR_1, "invalid pred_order %d\n",
                   VAR_12);
            return FUNC_0(VAR_2);
        }

        for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
            VAR_7->coeffs[VAR_16] = FUNC_3(&VAR_7->gb, VAR_5);
        VAR_18 = VAR_7->coeffs;

        VAR_14 = VAR_5;
    } else {

        VAR_12 = VAR_8;
        if (VAR_12 >= FUNC_1(VAR_6)) {
            FUNC_2(VAR_7->avctx, VAR_1, "invalid pred_order %d\n",
                   VAR_12);
            return VAR_0;
        }
        VAR_18 = VAR_6[VAR_12];
        VAR_14 = 0;
    }


    if (VAR_8 == VAR_3 && VAR_11)
        for (VAR_16 = -VAR_12; VAR_16 < 0; VAR_16++)
            VAR_7->decoded[VAR_9][VAR_16] -= (unsigned)VAR_11;


    VAR_15 = VAR_12 ? (VAR_8 == VAR_3 ? VAR_7->lpcqoffset : 0) : VAR_11;
    for (VAR_16 = 0; VAR_16 < VAR_7->blocksize; VAR_16++) {
        VAR_13 = VAR_15;
        for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++)
            VAR_13 += VAR_18[VAR_17] * (unsigned)VAR_7->decoded[VAR_9][VAR_16 - VAR_17 - 1];
        VAR_7->decoded[VAR_9][VAR_16] = FUNC_3(&VAR_7->gb, VAR_10) +
                                 (unsigned)(VAR_13 >> VAR_14);
    }


    if (VAR_8 == VAR_3 && VAR_11)
        for (VAR_16 = 0; VAR_16 < VAR_7->blocksize; VAR_16++)
            VAR_7->decoded[VAR_9][VAR_16] += (unsigned)VAR_11;

    return 0;
}
