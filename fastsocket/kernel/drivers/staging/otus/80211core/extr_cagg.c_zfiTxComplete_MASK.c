
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ EnableHT; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_4)
{

    FUNC_1(VAR_4);



    if( (VAR_3->wlanMode == VAR_0) ||
        (VAR_3->wlanMode == VAR_1 && VAR_3->sta.EnableHT) ||
        (VAR_3->wlanMode == VAR_2) ) {
        FUNC_0(VAR_4, 0);
    }

    return;
}
