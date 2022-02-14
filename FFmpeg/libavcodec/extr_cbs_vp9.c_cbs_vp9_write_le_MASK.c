
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ trace_enable; } ;
typedef int PutBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,char const*,int const*,char*,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CodedBitstreamContext *VAR_1, PutBitContext *VAR_2,
                            int VAR_3, const char *VAR_4,
                            const int *VAR_5, uint32_t VAR_6)
{
    int VAR_7;

    FUNC_1(VAR_3 % 8 == 0);

    if (FUNC_5(VAR_2) < VAR_3)
        return FUNC_0(VAR_0);

    if (VAR_1->trace_enable) {
        char VAR_8[33];
        int VAR_9;
        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 8)
            for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
                VAR_8[VAR_7 + VAR_9] = VAR_6 >> (VAR_7 + VAR_9) & 1 ? '1' : '0';
        VAR_8[VAR_7] = 0;

        FUNC_2(VAR_1, FUNC_4(VAR_2),
                                    VAR_4, VAR_5, VAR_8, VAR_6);
    }

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7 += 8)
        FUNC_3(VAR_2, 8, VAR_6 >> VAR_7 & 0xff);

    return 0;
}
