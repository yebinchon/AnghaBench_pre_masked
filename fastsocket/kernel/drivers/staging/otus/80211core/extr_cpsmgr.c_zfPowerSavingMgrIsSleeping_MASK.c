
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_5__ {TYPE_1__ psMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u8_t FUNC_4(zdev_t *VAR_5)
{
    u8_t VAR_6 = VAR_0;
    FUNC_2(VAR_5);
    FUNC_0();

    FUNC_1(VAR_5);
    if ( VAR_4->sta.psMgr.state == VAR_2 ||
         VAR_4->sta.psMgr.state == VAR_3)
    {
        VAR_6 = VAR_1;
    }
    FUNC_3(VAR_5);
    return VAR_6;
}
