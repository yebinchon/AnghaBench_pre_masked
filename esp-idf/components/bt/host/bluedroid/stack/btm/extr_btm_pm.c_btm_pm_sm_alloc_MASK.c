
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
typedef TYPE_1__ tBTM_PM_MCB ;
typedef size_t UINT8 ;
struct TYPE_5__ {TYPE_1__* pm_mode_db; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(UINT8 VAR_2)
{
    tBTM_PM_MCB *VAR_3 = &VAR_1.pm_mode_db[VAR_2];
    FUNC_1 (VAR_3, 0, sizeof(tBTM_PM_MCB));
    VAR_3->state = VAR_0;

    FUNC_0( "btm_pm_sm_alloc ind:%d st:%d", VAR_2, VAR_3->state);

}
