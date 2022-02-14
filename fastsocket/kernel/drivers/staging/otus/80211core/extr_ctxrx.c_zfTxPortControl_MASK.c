
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_3__ {scalar_t__ adapterState; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

u16_t FUNC_2(zdev_t* VAR_6, zbuf_t* VAR_7, u16_t VAR_8)
{
    FUNC_1(VAR_6);

    if ( VAR_5->wlanMode == VAR_1 )
    {
        if ( VAR_5->sta.adapterState == VAR_4 )
        {
            FUNC_0(VAR_0, "Packets dropped due to disconnect state");
            return VAR_2;
        }
    }

    return VAR_3;
}
