
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
typedef TYPE_1__ tBTM_PM_PWR_MD ;
typedef int pm ;
struct TYPE_5__ {int pm_id; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (void*,int ,int) ;

void FUNC_2(BD_ADDR VAR_2)
{
    tBTM_PM_PWR_MD VAR_3;

    FUNC_1( (void *)&VAR_3, 0, sizeof(VAR_3));


    VAR_3.mode = VAR_0;
    FUNC_0 (VAR_1.pm_id, VAR_2, &VAR_3);
}
