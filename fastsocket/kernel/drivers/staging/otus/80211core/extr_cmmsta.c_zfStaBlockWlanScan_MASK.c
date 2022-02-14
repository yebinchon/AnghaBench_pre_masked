
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {scalar_t__ bChannelScan; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_3)
{
    u8_t VAR_4=VAR_0;

    FUNC_0(VAR_3);

    if ( VAR_2->sta.bChannelScan )
    {
        return VAR_1;
    }

    return VAR_4;
}
