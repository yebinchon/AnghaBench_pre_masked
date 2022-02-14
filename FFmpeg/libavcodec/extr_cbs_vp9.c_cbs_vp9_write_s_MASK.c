
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ trace_enable; } ;
typedef int PutBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ,char const*,int const*,char*,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(CodedBitstreamContext *VAR_1, PutBitContext *VAR_2,
                           int VAR_3, const char *VAR_4,
                           const int *VAR_5, int32_t VAR_6)
{
    uint32_t VAR_7;
    int VAR_8;

    if (FUNC_4(VAR_2) < VAR_3 + 1)
        return FUNC_0(VAR_0);

    VAR_8 = VAR_6 < 0;
    VAR_7 = VAR_8 ? -VAR_6 : VAR_6;

    if (VAR_1->trace_enable) {
        char VAR_9[33];
        int VAR_10;
        for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
            VAR_9[VAR_10] = VAR_7 >> (VAR_3 - VAR_10 - 1) & 1 ? '1' : '0';
        VAR_9[VAR_10] = VAR_8 ? '1' : '0';
        VAR_9[VAR_10 + 1] = 0;

        FUNC_1(VAR_1, FUNC_3(VAR_2),
                                    VAR_4, VAR_5, VAR_9, VAR_6);
    }

    FUNC_2(VAR_2, VAR_3, VAR_7);
    FUNC_2(VAR_2, 1, VAR_8);

    return 0;
}
