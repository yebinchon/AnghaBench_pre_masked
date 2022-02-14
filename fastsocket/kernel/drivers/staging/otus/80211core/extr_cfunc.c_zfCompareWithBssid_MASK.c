
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ bssid; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_1, u16_t* VAR_2)
{
    FUNC_1(VAR_1);

    if ( FUNC_0((u8_t*)VAR_2, (u8_t*)VAR_0->sta.bssid, 6) )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
