
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ trace_enable; int log_ctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int,char const*,int const*,char*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CodedBitstreamContext *VAR_2, GetBitContext *VAR_3,
                           int VAR_4, const char *VAR_5,
                           const int *VAR_6, uint32_t *VAR_7)
{
    uint32_t VAR_8;
    int VAR_9, VAR_10;

    FUNC_0(VAR_4 % 8 == 0);

    if (VAR_2->trace_enable)
        VAR_9 = FUNC_4(VAR_3);

    if (FUNC_5(VAR_3) < VAR_4) {
        FUNC_1(VAR_2->log_ctx, VAR_1, "Invalid le value at "
               "%s: bitstream ended.\n", VAR_5);
        return VAR_0;
    }

    VAR_8 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += 8)
        VAR_8 |= FUNC_3(VAR_3, 8) << VAR_10;

    if (VAR_2->trace_enable) {
        char VAR_11[33];
        int VAR_12;
        for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += 8)
            for (VAR_12 = 0; VAR_12 < 8; VAR_12++)
                VAR_11[VAR_10 + VAR_12] = VAR_8 >> (VAR_10 + VAR_12) & 1 ? '1' : '0';
        VAR_11[VAR_10] = 0;

        FUNC_2(VAR_2, VAR_9, VAR_5, VAR_6,
                                    VAR_11, VAR_8);
    }

    *VAR_7 = VAR_8;
    return 0;
}
