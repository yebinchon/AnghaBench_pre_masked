
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ trace_enable; } ;
typedef int PutBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,char const*,int *,char*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int,char*,int*,int,int,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(CodedBitstreamContext *VAR_0, PutBitContext *VAR_1,
                                const char *VAR_2, uint64_t VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    uint8_t VAR_8;

    VAR_6 = (FUNC_0(VAR_3) + 7) / 7;

    if (VAR_0->trace_enable)
        VAR_4 = FUNC_3(VAR_1);

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        int VAR_9[2] = { 1, VAR_7 };

        VAR_8 = VAR_3 >> (7 * VAR_7) & 0x7f;
        if (VAR_7 < VAR_6 - 1)
            VAR_8 |= 0x80;

        VAR_5 = FUNC_2(VAR_0, VAR_1, 8, "leb128_byte[i]", VAR_9,
                                    VAR_8, 0x00, 0xff);
        if (VAR_5 < 0)
            return VAR_5;
    }

    if (VAR_0->trace_enable)
        FUNC_1(VAR_0, VAR_4, VAR_2, ((void*)0), "", VAR_3);

    return 0;
}
