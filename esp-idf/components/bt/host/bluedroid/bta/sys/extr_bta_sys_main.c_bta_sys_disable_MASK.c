
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_SYS_HW_MODULE ;
struct TYPE_4__ {scalar_t__* is_reg; TYPE_1__** reg; } ;
struct TYPE_3__ {int (* disable ) () ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 () ;

void FUNC_3(tBTA_SYS_HW_MODULE VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = 0;

    FUNC_0("bta_sys_disable: module %i", VAR_4);

    switch ( VAR_4 ) {
    case 128:
        VAR_5 = VAR_1;
        VAR_6 = VAR_0;
        break;
    default:
        FUNC_1("bta_sys_disable: unkown module");
        return;
    }

    for ( ; VAR_5 <= VAR_6; VAR_5++) {
        if (VAR_3.reg[VAR_5] != ((void*)0)) {
            if (VAR_3.is_reg[VAR_5] == VAR_2 && VAR_3.reg[VAR_5]->disable != ((void*)0)) {
                (*VAR_3.reg[VAR_5]->disable)();
            }
        }
    }
}
