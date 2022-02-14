
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pm_mode_db; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ,int,int *) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (VAR_3.pm_mode_db[VAR_4].state & VAR_1) {
            VAR_3.pm_mode_db[VAR_4].state &= ~VAR_1;
            FUNC_0( "btm_pm_check_stored :%d", VAR_4);
            FUNC_1(VAR_0, VAR_4, ((void*)0));
            break;
        }
    }
}
