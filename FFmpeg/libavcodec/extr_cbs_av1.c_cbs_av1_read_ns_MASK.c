
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ trace_enable; int log_ctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int,char const*,int const*,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(CodedBitstreamContext *VAR_2, GetBitContext *VAR_3,
                           uint32_t VAR_4, const char *VAR_5,
                           const int *VAR_6, uint32_t *VAR_7)
{
    uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;

    FUNC_0(VAR_4 > 0);

    if (VAR_2->trace_enable)
        VAR_12 = FUNC_6(VAR_3);

    VAR_13 = FUNC_2(VAR_4) + 1;
    VAR_8 = (1 << VAR_13) - VAR_4;

    if (FUNC_7(VAR_3) < VAR_13) {
        FUNC_1(VAR_2->log_ctx, VAR_1, "Invalid non-symmetric value at "
               "%s: bitstream ended.\n", VAR_5);
        return VAR_0;
    }

    if (VAR_13 - 1 > 0)
        VAR_9 = FUNC_4(VAR_3, VAR_13 - 1);
    else
        VAR_9 = 0;

    if (VAR_9 < VAR_8) {
        VAR_11 = VAR_9;
    } else {
        VAR_10 = FUNC_5(VAR_3);
        VAR_11 = (VAR_9 << 1) - VAR_8 + VAR_10;
    }

    if (VAR_2->trace_enable) {
        char VAR_14[33];
        int VAR_15;
        for (VAR_15 = 0; VAR_15 < VAR_13 - 1; VAR_15++)
            VAR_14[VAR_15] = (VAR_9 >> VAR_15 & 1) ? '1' : '0';
        if (VAR_9 >= VAR_8)
            VAR_14[VAR_15++] = VAR_10 ? '1' : '0';
        VAR_14[VAR_15] = 0;

        FUNC_3(VAR_2, VAR_12,
                                    VAR_5, VAR_6, VAR_14, VAR_11);
    }

    *VAR_7 = VAR_11;
    return 0;
}
