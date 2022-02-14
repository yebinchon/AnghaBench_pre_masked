
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct zsBssInfo {int signalStrength; int* beaconInterval; int* ssid; int* frameBody; int* rsnIe; int atimWindow; int frequency; int channel; int * capability; scalar_t__ bssid; scalar_t__ macaddr; } ;
struct TYPE_3__ {int ssidLen; scalar_t__ authMode; scalar_t__ wepStatus; int atimWindow; scalar_t__ ssid; int * capability; scalar_t__ bssid; struct zsBssInfo ibssBssDesc; } ;
struct TYPE_4__ {int beaconInterval; TYPE_1__ sta; int frequency; scalar_t__ macAddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int) ;
 int* VAR_5 ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t *VAR_6)
{



    struct zsBssInfo *VAR_7;
    u16_t VAR_8 = 0;

    FUNC_3(VAR_6);

    VAR_7 = &VAR_4->sta.ibssBssDesc;
    FUNC_2((u8_t *)VAR_7, sizeof(struct zsBssInfo));

    VAR_7->signalStrength = 100;

    FUNC_1((u8_t *)VAR_7->macaddr, (u8_t *)VAR_4->macAddr,6);
    FUNC_1((u8_t *)VAR_7->bssid, (u8_t *)VAR_4->sta.bssid, 6);

    VAR_7->beaconInterval[0] = (u8_t)(VAR_4->beaconInterval) ;
    VAR_7->beaconInterval[1] = (u8_t)((VAR_4->beaconInterval) >> 8) ;

    VAR_7->capability[0] = VAR_4->sta.capability[0];
    VAR_7->capability[1] = VAR_4->sta.capability[1];

    VAR_7->ssid[0] = VAR_3;
    VAR_7->ssid[1] = VAR_4->sta.ssidLen;
    FUNC_1((u8_t *)&VAR_7->ssid[2], (u8_t *)VAR_4->sta.ssid, VAR_4->sta.ssidLen);
    FUNC_1((u8_t *)&VAR_7->frameBody[VAR_8], (u8_t *)VAR_7->ssid,
                 VAR_4->sta.ssidLen + 2);
    VAR_8 += VAR_4->sta.ssidLen + 2;




    VAR_7->channel = FUNC_0(VAR_4->frequency, ((void*)0));
    VAR_7->frequency = VAR_4->frequency;
    VAR_7->atimWindow = VAR_4->sta.atimWindow;
}
