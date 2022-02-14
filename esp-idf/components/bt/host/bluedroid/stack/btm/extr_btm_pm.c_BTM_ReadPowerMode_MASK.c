
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_PM_MODE ;
struct TYPE_4__ {TYPE_1__* pm_mode_db; } ;
struct TYPE_3__ {int state; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;

tBTM_STATUS FUNC_1 (BD_ADDR VAR_4, tBTM_PM_MODE *VAR_5)
{
    int VAR_6;

    if ( (VAR_6 = FUNC_0(VAR_4)) == VAR_2) {
        return (VAR_1);
    }

    *VAR_5 = VAR_3.pm_mode_db[VAR_6].state;
    return VAR_0;
}
