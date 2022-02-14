
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
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_5__ {scalar_t__ cmDisallowSsidLength; scalar_t__ ssidLen; scalar_t__ wepStatus; scalar_t__ EnableHT; int bssid; int authMode; int cmDisallowSsid; int ssid; scalar_t__ oppositeCount; } ;
struct TYPE_6__ {int apBitmap; int staAgingTimeSec; int staProbingTimeSec; int* ssidLen; char** ssid; scalar_t__* encryMode; int* capab; scalar_t__* wlanType; int vapNumber; int * authAlgo; scalar_t__* bcmcTail; scalar_t__* bcmcHead; scalar_t__* hideSsid; scalar_t__ beaconCounter; } ;
struct TYPE_7__ {int bRateBasic; int gRateBasic; int ssidLen; char* ssid; scalar_t__ encryMode; int authMode; int bgMode; } ;
struct TYPE_8__ {int wlanMode; int bRate; int gRate; int bRateBasic; int gRateBasic; int CurrentTxRateKbps; int CurrentRxRateKbps; int state; TYPE_1__ sta; int (* zfcbConnectNotify ) (int *,int ,int ) ;int frequency; TYPE_2__ ap; TYPE_3__ ws; int bgMode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_4__* VAR_16 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int ,scalar_t__) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

u16_t FUNC_25(zdev_t *VAR_17)
{
 u8_t VAR_18[6] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0};
 u16_t VAR_19;

 FUNC_23(VAR_17);

 FUNC_21();

 if (VAR_16->wlanMode == VAR_9) {
  FUNC_19("Unknown Mode...Skip...");
  return 0;
 }

 if (VAR_16->wlanMode == VAR_8) {
  u16_t VAR_20;

  VAR_20 = FUNC_18(VAR_17);

  if (VAR_20 == 0xffff) {

   FUNC_2(VAR_17);


   VAR_16->bRate = 0xf;
   VAR_16->gRate = 0xff;
   VAR_16->bRateBasic = 0xf;
   VAR_16->gRateBasic = 0x0;

   VAR_16->ap.apBitmap = 1;
   VAR_16->ap.beaconCounter = 0;


   VAR_16->ap.hideSsid[0] = 0;
   VAR_16->ap.staAgingTimeSec = 10*60;
   VAR_16->ap.staProbingTimeSec = 60;

   for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++)
    VAR_16->ap.bcmcHead[VAR_19] = VAR_16->ap.bcmcTail[VAR_19] = 0;




   VAR_16->bRateBasic = VAR_16->ws.bRateBasic;
   VAR_16->gRateBasic = VAR_16->ws.gRateBasic;
   VAR_16->bgMode = VAR_16->ws.bgMode;
   if ((VAR_16->ws.ssidLen <= 32) && (VAR_16->ws.ssidLen != 0)) {
    VAR_16->ap.ssidLen[0] = VAR_16->ws.ssidLen;
    for (VAR_19 = 0; VAR_19 < VAR_16->ws.ssidLen; VAR_19++)
     VAR_16->ap.ssid[0][VAR_19] = VAR_16->ws.ssid[VAR_19];
    VAR_16->ws.ssidLen = 0;
   }

   if (VAR_16->ap.encryMode[0] == 0)
    VAR_16->ap.capab[0] = 0x001;
   else
    VAR_16->ap.capab[0] = 0x011;

   if (VAR_16->ap.wlanType[0] != VAR_15)
    VAR_16->ap.capab[0] |= 0x400;


  } else {
   VAR_16->ap.apBitmap = 0x1 | (0x01 << (VAR_20+1));

   if ((VAR_16->ws.ssidLen <= 32) && (VAR_16->ws.ssidLen != 0)) {
    VAR_16->ap.ssidLen[VAR_20+1] = VAR_16->ws.ssidLen;
    for (VAR_19 = 0; VAR_19 < VAR_16->ws.ssidLen; VAR_19++)
     VAR_16->ap.ssid[VAR_20+1][VAR_19] =
        VAR_16->ws.ssid[VAR_19];
    VAR_16->ws.ssidLen = 0;
   }

   if (VAR_16->ap.encryMode[VAR_20+1] == 0)
    VAR_16->ap.capab[VAR_20+1] = 0x401;
   else
    VAR_16->ap.capab[VAR_20+1] = 0x411;

   VAR_16->ap.authAlgo[VAR_20+1] = VAR_16->ws.authMode;
   VAR_16->ap.encryMode[VAR_20+1] = VAR_16->ws.encryMode;




  }

  VAR_16->ap.vapNumber++;

  FUNC_6(VAR_17, VAR_16->frequency);

  FUNC_11(VAR_17);


  FUNC_4(VAR_17, 0);

  FUNC_3(VAR_17);
 } else {

  FUNC_13(VAR_17, VAR_11);
  FUNC_13(VAR_17, VAR_10);

  FUNC_22(VAR_17);
  VAR_16->sta.oppositeCount = 0;


  FUNC_14(VAR_17);
  FUNC_24(VAR_17);

  FUNC_15(VAR_17, 0);

  if ((VAR_16->sta.cmDisallowSsidLength != 0) &&
  (VAR_16->sta.ssidLen == VAR_16->sta.cmDisallowSsidLength) &&
  (FUNC_12(VAR_16->sta.ssid, VAR_16->sta.cmDisallowSsid,
  VAR_16->sta.ssidLen)) &&
  (VAR_16->sta.wepStatus == VAR_1)) {
   FUNC_19("countermeasures disallow association");
  } else {
   switch (VAR_16->wlanMode) {
   case 130:

    if (VAR_16->sta.authMode == VAR_0)
     FUNC_8(VAR_17,
     VAR_3);
    else
     FUNC_8(VAR_17,
     VAR_2);

    FUNC_20(VAR_6, "ZM_MODE_IBSS");
    FUNC_9(VAR_17);
    break;

   case 129:

    FUNC_8(VAR_17, VAR_4);

    FUNC_10(VAR_17);
    break;

   case 128:

    FUNC_8(VAR_17, VAR_4);

    FUNC_16(VAR_17, VAR_18);
    FUNC_6(VAR_17, VAR_16->frequency);
    break;

   default:
    break;
   }
  }

 }





 if (VAR_16->wlanMode == 128) {

  FUNC_17(VAR_17);

  if (VAR_16->zfcbConnectNotify != ((void*)0))
   VAR_16->zfcbConnectNotify(VAR_17, VAR_12,
        VAR_16->sta.bssid);
  FUNC_5(VAR_17, VAR_13);
 }


 if (VAR_16->wlanMode == VAR_8) {
  if (VAR_16->zfcbConnectNotify != ((void*)0))
   VAR_16->zfcbConnectNotify(VAR_17, VAR_12,
        VAR_16->sta.bssid);

 }


 if (VAR_16->sta.EnableHT) {
  u32_t VAR_21;
  VAR_21 = (FUNC_7(VAR_17) &
      VAR_5);
  if (VAR_21)
   VAR_16->CurrentTxRateKbps = 135000;
  else
   VAR_16->CurrentTxRateKbps = 270000;
  VAR_16->CurrentRxRateKbps = 270000;
 } else {
  VAR_16->CurrentTxRateKbps = 54000;
  VAR_16->CurrentRxRateKbps = 54000;
 }

 VAR_16->state = VAR_14;

 return 0;
}
