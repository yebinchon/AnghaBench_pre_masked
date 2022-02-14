
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pc; int a1; int a0; } ;
typedef TYPE_1__ XtExcFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(XtExcFrame *VAR_0)
{
    uint32_t VAR_1 = 0, VAR_2 = VAR_0->pc, VAR_3 = VAR_0->a1;
    FUNC_1("\r\nBacktrace:");

    FUNC_2(VAR_2, VAR_3);
    VAR_2 = VAR_0->a0;
    while (VAR_1++ < 100) {
        uint32_t VAR_4 = VAR_3;
        if (!FUNC_0(VAR_3) || VAR_1++ > 100) {
            break;
        }
        VAR_3 = *((uint32_t *) (VAR_3 - 0x10 + 4));
        FUNC_2(VAR_2 - 3, VAR_3);
        VAR_2 = *((uint32_t *) (VAR_4 - 0x10));
        if (VAR_2 < 0x40000000) {
            break;
        }
    }
    FUNC_1("\r\n\r\n");
}
