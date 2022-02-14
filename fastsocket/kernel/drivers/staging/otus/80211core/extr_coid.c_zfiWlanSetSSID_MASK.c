
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct TYPE_5__ {int ssidLen; TYPE_1__* probingSsidList; scalar_t__* ssid; } ;
struct TYPE_6__ {TYPE_2__ ws; } ;
struct TYPE_4__ {int ssidLen; scalar_t__* ssid; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (scalar_t__*,int*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2, u8_t* VAR_3, u8_t VAR_4)
{
    u16_t VAR_5;
    FUNC_3(VAR_2);

    FUNC_1();

    if ( VAR_4 <= 32 )
    {
        FUNC_2(VAR_2);

        VAR_1->ws.ssidLen = VAR_4;
        FUNC_0(VAR_1->ws.ssid, VAR_3, VAR_4);

        if ( VAR_4 < 32 )
        {
            VAR_1->ws.ssid[VAR_4] = 0;
        }

        VAR_1->ws.probingSsidList[0].ssidLen = VAR_4;
        FUNC_0(VAR_1->ws.probingSsidList[0].ssid, VAR_3, VAR_4);
        for (VAR_5=1; VAR_5<VAR_0; VAR_5++)
        {
            VAR_1->ws.probingSsidList[VAR_5].ssidLen = 0;
        }

        FUNC_4(VAR_2);
    }
}
