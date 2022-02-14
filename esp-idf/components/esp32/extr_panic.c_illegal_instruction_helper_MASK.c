
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pc; } ;
typedef TYPE_1__ XtExcFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int volatile) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(XtExcFrame *VAR_2)
{

    uint32_t VAR_3 = VAR_2->pc;
    VAR_3 = (VAR_3 & ~0x3) - 4;


    if (VAR_3 < VAR_1 || VAR_3 >= VAR_0) {
        return;
    }
    volatile uint32_t* VAR_4 = (uint32_t*)VAR_3;

    FUNC_1("Memory dump at 0x");
    FUNC_0(VAR_3);
    FUNC_1(": ");

    FUNC_0(*VAR_4);
    FUNC_1(" ");
    FUNC_0(*(VAR_4 + 1));
    FUNC_1(" ");
    FUNC_0(*(VAR_4 + 2));
    FUNC_1("\r\n");
}
