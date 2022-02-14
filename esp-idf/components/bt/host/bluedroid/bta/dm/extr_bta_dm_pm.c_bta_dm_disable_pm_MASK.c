
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_SYS_CONN_CBACK ;
struct TYPE_4__ {TYPE_1__* pm_timer; int pm_id; } ;
struct TYPE_3__ {int * pm_action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
    FUNC_0( VAR_3, &VAR_4.pm_id, ((void*)0));





    FUNC_2((tBTA_SYS_CONN_CBACK *)((void*)0));


    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        for (int VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
            FUNC_1(&VAR_4.pm_timer[VAR_5], VAR_6);
            VAR_4.pm_timer[VAR_5].pm_action[VAR_6] = VAR_2;
        }
    }
}
