
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int bPassiveScan; int bChannelScan; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_3)
{
    FUNC_3(VAR_3);

    if ( !VAR_2->sta.bChannelScan )
    {
        return;
    }

    if ( !VAR_2->sta.bPassiveScan )
    {
        FUNC_0(VAR_3);





    }
}
