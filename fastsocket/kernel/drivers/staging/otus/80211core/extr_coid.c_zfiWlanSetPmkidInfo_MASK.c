
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef size_t u32_t ;
typedef void* u16_t ;
struct TYPE_6__ {size_t bssidCount; TYPE_1__* bssidInfo; } ;
struct TYPE_7__ {TYPE_2__ pmkidInfo; } ;
struct TYPE_8__ {TYPE_3__ sta; } ;
struct TYPE_5__ {int pmkid; void** bssid; } ;


 size_t VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;

u8_t FUNC_3(zdev_t* VAR_2, u16_t* VAR_3, u8_t* VAR_4)
{
    u32_t VAR_5;

    FUNC_2(VAR_2);

    for(VAR_5=0; VAR_5<VAR_1->sta.pmkidInfo.bssidCount; VAR_5++)
    {
        if ( FUNC_1((u8_t*) VAR_1->sta.pmkidInfo.bssidInfo[VAR_5].bssid,
                             (u8_t*) VAR_3, 6) )
        {

            break;
        }
    }

    if ( VAR_5 < VAR_1->sta.pmkidInfo.bssidCount )
    {

        FUNC_0(VAR_1->sta.pmkidInfo.bssidInfo[VAR_5].pmkid, VAR_4, 16);
    }
    else
    {
        if ( VAR_5 < VAR_0 )
        {
            VAR_1->sta.pmkidInfo.bssidInfo[VAR_5].bssid[0] = VAR_3[0];
            VAR_1->sta.pmkidInfo.bssidInfo[VAR_5].bssid[1] = VAR_3[1];
            VAR_1->sta.pmkidInfo.bssidInfo[VAR_5].bssid[2] = VAR_3[2];

            FUNC_0(VAR_1->sta.pmkidInfo.bssidInfo[VAR_5].pmkid, VAR_4, 16);
            VAR_1->sta.pmkidInfo.bssidCount++;
        }
    }

    return 0;
}
