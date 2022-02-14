
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_11__ {char* countryIsoName; scalar_t__ wlanMode; int frequency; scalar_t__ adhocMode; int preambleType; scalar_t__ authMode; int beaconInterval; scalar_t__ dtim; int apWmeEnabled; scalar_t__ ssidLen; scalar_t__ staWmeQosInfo; int staWmeEnabled; int ssid; void* bDesiredBssid; int desiredBssid; int ibssJoinOnly; int dropUnencryptedPkts; scalar_t__ atimWindow; int wepStatus; int encryMode; } ;
struct TYPE_8__ {scalar_t__ bssidCount; } ;
struct TYPE_9__ {scalar_t__ authMode; scalar_t__ currentAuthMode; int ssidLen; scalar_t__ wmeQosInfo; int wmeEnabled; scalar_t__* ssid; TYPE_2__ pmkidInfo; scalar_t__ failCntOfReasso; void* connectByReasso; void* bDesiredBssid; scalar_t__* desiredBssid; int ibssJoinOnly; int dropUnencryptedPkts; scalar_t__ atimWindow; int wepStatus; } ;
struct TYPE_7__ {int bIbssGMode; } ;
struct TYPE_10__ {scalar_t__* authAlgo; int qosMode; int uapsdEnabled; int * encryMode; } ;
struct TYPE_12__ {scalar_t__ wlanMode; int frequency; int preambleType; int beaconInterval; int dtim; TYPE_5__ ws; TYPE_3__ sta; TYPE_1__ wfc; TYPE_4__ ap; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;



 TYPE_6__* VAR_13 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(zdev_t *VAR_14)
{
 u8_t VAR_15;
 u16_t VAR_16 = 0;

 FUNC_8(VAR_14);

 FUNC_6();
 FUNC_7(VAR_14);

 VAR_13->wlanMode = VAR_13->ws.wlanMode;


 if (VAR_13->ws.frequency) {
  VAR_13->frequency = VAR_13->ws.frequency;
  VAR_13->ws.frequency = 0;
 } else {
  VAR_13->frequency = FUNC_0(VAR_14, &VAR_15);

  if (VAR_13->wlanMode == VAR_11) {
   if (VAR_13->ws.adhocMode == VAR_2)
    VAR_13->frequency = VAR_8;
   else
    VAR_13->frequency = VAR_9;
  }
 }







 switch (VAR_13->ws.preambleType) {
 case 130:
 case 128:
 case 129:
  VAR_13->preambleType = VAR_13->ws.preambleType;
  break;
 default:
  VAR_13->preambleType = 128;
  break;
 }
 VAR_13->ws.preambleType = 0;

 if (VAR_13->wlanMode == VAR_10) {
  VAR_16 = FUNC_5(VAR_14);

  if (VAR_16 == 0xffff) {
   VAR_13->ap.authAlgo[0] = VAR_13->ws.authMode;
   VAR_13->ap.encryMode[0] = VAR_13->ws.encryMode;
  } else {
   VAR_13->ap.authAlgo[VAR_16 + 1] = VAR_13->ws.authMode;
   VAR_13->ap.encryMode[VAR_16 + 1] = VAR_13->ws.encryMode;
  }
  VAR_13->ws.authMode = 0;
  VAR_13->ws.encryMode = VAR_12;


  if ((VAR_13->ws.beaconInterval >= 20) &&
     (VAR_13->ws.beaconInterval <= 1000))
   VAR_13->beaconInterval = VAR_13->ws.beaconInterval;
  else
   VAR_13->beaconInterval = 100;

  if (VAR_13->ws.dtim > 0)
   VAR_13->dtim = VAR_13->ws.dtim;
  else
   VAR_13->dtim = 1;


  VAR_13->ap.qosMode = VAR_13->ws.apWmeEnabled & 0x1;
  VAR_13->ap.uapsdEnabled = (VAR_13->ws.apWmeEnabled & 0x2) >> 1;
 } else {
  VAR_13->sta.authMode = VAR_13->ws.authMode;
  VAR_13->sta.currentAuthMode = VAR_13->ws.authMode;
  VAR_13->sta.wepStatus = VAR_13->ws.wepStatus;

  if (VAR_13->ws.beaconInterval)
   VAR_13->beaconInterval = VAR_13->ws.beaconInterval;
  else
   VAR_13->beaconInterval = 0x64;

  if (VAR_13->wlanMode == VAR_11) {




   if ((VAR_13->ws.adhocMode == VAR_5) ||
    (VAR_13->ws.adhocMode == VAR_4) ||
    (VAR_13->ws.adhocMode == VAR_3))
    VAR_13->wfc.bIbssGMode = 1;
   else
    VAR_13->wfc.bIbssGMode = 0;



  }


  if (VAR_13->ws.atimWindow)
   VAR_13->sta.atimWindow = VAR_13->ws.atimWindow;
  else {

   VAR_13->sta.atimWindow = 0;
  }




  VAR_13->sta.dropUnencryptedPkts = VAR_13->ws.dropUnencryptedPkts;
  VAR_13->sta.ibssJoinOnly = VAR_13->ws.ibssJoinOnly;

  if (VAR_13->ws.bDesiredBssid) {
   FUNC_3(VAR_13->sta.desiredBssid,
      VAR_13->ws.desiredBssid, 6);
   VAR_13->sta.bDesiredBssid = VAR_1;
   VAR_13->ws.bDesiredBssid = VAR_0;
  } else
   VAR_13->sta.bDesiredBssid = VAR_0;


  if (VAR_13->ws.ssidLen != 0) {
   if ((!FUNC_4(VAR_13->ws.ssid, VAR_13->sta.ssid,
    VAR_13->sta.ssidLen)) ||
    (VAR_13->ws.ssidLen != VAR_13->sta.ssidLen) ||
    (VAR_13->sta.authMode == VAR_6) ||
    (VAR_13->sta.authMode == VAR_7) ||
    (VAR_13->ws.staWmeQosInfo != 0)) {




    VAR_13->sta.connectByReasso = VAR_0;
    VAR_13->sta.failCntOfReasso = 0;
    VAR_13->sta.pmkidInfo.bssidCount = 0;

    VAR_13->sta.ssidLen = VAR_13->ws.ssidLen;
    FUNC_3(VAR_13->sta.ssid, VAR_13->ws.ssid,
       VAR_13->sta.ssidLen);

    if (VAR_13->sta.ssidLen < 32)
     VAR_13->sta.ssid[VAR_13->sta.ssidLen] = 0;
   }
  } else {

   VAR_13->sta.ssid[0] = 0;
   VAR_13->sta.ssidLen = 0;
  }

  VAR_13->sta.wmeEnabled = VAR_13->ws.staWmeEnabled;
  VAR_13->sta.wmeQosInfo = VAR_13->ws.staWmeQosInfo;

 }

 FUNC_9(VAR_14);
}
