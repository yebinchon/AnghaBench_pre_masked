
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int bits ;
struct TYPE_4__ {scalar_t__ trace_enable; int log_ctx; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int,char const*,int *,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(CodedBitstreamContext *VAR_2, GetBitContext *VAR_3,
                                  uint32_t VAR_4, uint32_t VAR_5,
                                  const char *VAR_6, uint32_t *VAR_7)
{
    uint32_t VAR_8;
    int VAR_9, VAR_10;
    char VAR_11[8];

    FUNC_0(VAR_4 <= VAR_5 && VAR_5 - VAR_4 < sizeof(VAR_11) - 1);
    if (VAR_2->trace_enable)
        VAR_9 = FUNC_4(VAR_3);

    for (VAR_10 = 0, VAR_8 = VAR_4; VAR_8 < VAR_5;) {
        if (FUNC_5(VAR_3) < 1) {
            FUNC_1(VAR_2->log_ctx, VAR_1, "Invalid increment value at "
                   "%s: bitstream ended.\n", VAR_6);
            return VAR_0;
        }
        if (FUNC_3(VAR_3)) {
            VAR_11[VAR_10++] = '1';
            ++VAR_8;
        } else {
            VAR_11[VAR_10++] = '0';
            break;
        }
    }

    if (VAR_2->trace_enable) {
        VAR_11[VAR_10] = 0;
        FUNC_2(VAR_2, VAR_9, VAR_6, ((void*)0), VAR_11, VAR_8);
    }

    *VAR_7 = VAR_8;
    return 0;
}
