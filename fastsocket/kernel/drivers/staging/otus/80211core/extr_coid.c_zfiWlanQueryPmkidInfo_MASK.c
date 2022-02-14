
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsPmkidBssidInfo {int dummy; } ;
struct TYPE_4__ {int bssidCount; } ;
struct TYPE_5__ {TYPE_1__ pmkidInfo; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;

u32_t FUNC_2(zdev_t* VAR_1, u8_t* VAR_2, u32_t VAR_3)
{

    u32_t VAR_4;

    FUNC_1(VAR_1);

    VAR_4 = sizeof(u32_t) +
           VAR_0->sta.pmkidInfo.bssidCount * sizeof(struct zsPmkidBssidInfo);

    if ( VAR_3 < VAR_4 )
    {
        return VAR_0->sta.pmkidInfo.bssidCount;
    }

    FUNC_0(VAR_2, (u8_t*) &VAR_0->sta.pmkidInfo, (u16_t) VAR_4);

    return 0;
}
