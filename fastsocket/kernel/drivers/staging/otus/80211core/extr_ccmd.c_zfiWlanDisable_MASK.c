
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef size_t u16_t ;
struct zsOppositeInfo {int dummy; } ;
struct TYPE_7__ {scalar_t__ currentAuthMode; scalar_t__ rifsState; scalar_t__ SWEncryptEnable; scalar_t__ oppositeInfo; int bssid; scalar_t__ bSafeMode; scalar_t__ osRxFilter; scalar_t__ rifsCount; scalar_t__ rifsLikeFrameCnt; scalar_t__ leapEnabled; int connectState; scalar_t__ connectTimeoutCount; int wpaState; scalar_t__ ibssWpa2Psk; scalar_t__ ibssBssIsCreator; } ;
struct TYPE_6__ {int vapNumber; TYPE_1__* staTable; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_3__ sta; TYPE_2__ ap; int (* zfcbConnectNotify ) (int *,int ,int ) ;int state; } ;
struct TYPE_5__ {int valid; int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_4__* VAR_17 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,int,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (scalar_t__*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

u16_t FUNC_22(zdev_t *VAR_18, u8_t VAR_19)
{
 u16_t VAR_20;
 u8_t VAR_21;

 FUNC_20(VAR_18);




 VAR_17->state = VAR_16;

 FUNC_17(VAR_2, "Disable Wlan");

 if (VAR_17->wlanMode != VAR_5) {
  VAR_21 = FUNC_13(VAR_18);

  if ((VAR_17->wlanMode == VAR_7) &&
   (VAR_17->sta.currentAuthMode != VAR_0)) {

   if (VAR_21) {

    FUNC_10(VAR_18, VAR_15,
      VAR_17->sta.bssid, 3, 0, 0);

   }
  }


  if (VAR_17->wlanMode == VAR_6) {
   VAR_17->sta.ibssBssIsCreator = 0;
   FUNC_14(VAR_18, VAR_1);
   FUNC_12(VAR_18, 1);
  }







  VAR_17->sta.wpaState = VAR_14;


  VAR_17->sta.connectTimeoutCount = 0;


  VAR_17->sta.connectState = VAR_12;


  VAR_17->sta.leapEnabled = 0;


  if (VAR_17->sta.rifsState == VAR_8)
   FUNC_8(VAR_18);
  VAR_17->sta.rifsState = VAR_9;
  VAR_17->sta.rifsLikeFrameCnt = 0;
  VAR_17->sta.rifsCount = 0;

  VAR_17->sta.osRxFilter = 0;
  VAR_17->sta.bSafeMode = 0;

  FUNC_5(VAR_18, VAR_13);
  if (VAR_19)
   FUNC_9(VAR_18);

  if (VAR_21) {
   if (VAR_17->zfcbConnectNotify != ((void*)0))
    VAR_17->zfcbConnectNotify(VAR_18,
    VAR_10,
    VAR_17->sta.bssid);
  } else {
   if (VAR_17->zfcbConnectNotify != ((void*)0))
    VAR_17->zfcbConnectNotify(VAR_18,
    VAR_11, VAR_17->sta.bssid);
  }
 } else {
  for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {

   if (VAR_17->ap.staTable[VAR_20].valid == 1) {

    FUNC_10(VAR_18, VAR_15,
    VAR_17->ap.staTable[VAR_20].addr, 3, 0, 0);
   }
  }

  if (VAR_19)
   FUNC_9(VAR_18);

  VAR_17->ap.vapNumber--;
 }


 FUNC_7(VAR_18);


 FUNC_6(VAR_18);

 FUNC_4(VAR_18);

 FUNC_3(VAR_18, 1);
 FUNC_15((u8_t *)VAR_17->sta.oppositeInfo,
   sizeof(struct zsOppositeInfo) * VAR_3);


 if (VAR_17->sta.SWEncryptEnable != 0) {
  FUNC_16("Disable software encryption");
  FUNC_11(VAR_18);
 }





 return 0;
}
