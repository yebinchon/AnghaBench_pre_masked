
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct zsOppositeInfo {int dummy; } ;
struct TYPE_3__ {scalar_t__ currentAuthMode; scalar_t__ rifsState; scalar_t__ SWEncryptEnable; scalar_t__ oppositeInfo; scalar_t__ bSafeMode; scalar_t__ osRxFilter; scalar_t__ rifsCount; scalar_t__ rifsLikeFrameCnt; scalar_t__ leapEnabled; scalar_t__ connectTimeoutCount; scalar_t__ ibssWpa2Psk; scalar_t__ ibssBssIsCreator; scalar_t__ cmMicFailureCount; int wpaState; int wepStatus; int encryMode; scalar_t__ InternalScanReq; scalar_t__ bAutoReconnect; scalar_t__ cmDisallowSsidLength; int connectByReasso; int connectState; int bssid; } ;
struct TYPE_4__ {scalar_t__ wlanMode; TYPE_1__ sta; int (* zfcbConnectNotify ) (int *,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__* VAR_20 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ,int,int ,int ) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (scalar_t__*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

u16_t FUNC_21(zdev_t *VAR_21)
{
 u8_t VAR_22;
 FUNC_19(VAR_21);

 FUNC_17();

 FUNC_16("zfWlanReset");

 VAR_22 = FUNC_12(VAR_21);


 {
  if ((VAR_20->wlanMode == VAR_7) &&
  (VAR_20->sta.currentAuthMode != VAR_1)) {

   if (VAR_22) {

    FUNC_10(VAR_21, VAR_19,
      VAR_20->sta.bssid, 3, 0, 0);

   }
  }
 }

 FUNC_4(VAR_21, VAR_17);
 FUNC_8(VAR_21);

 if (VAR_22) {

  if (VAR_20->zfcbConnectNotify != ((void*)0))
   VAR_20->zfcbConnectNotify(VAR_21,
   VAR_14, VAR_20->sta.bssid);
 } else {
  if (VAR_20->zfcbConnectNotify != ((void*)0))
   VAR_20->zfcbConnectNotify(VAR_21, VAR_15,
        VAR_20->sta.bssid);
 }


 FUNC_6(VAR_21);


 FUNC_3(VAR_21, 1);


 FUNC_5(VAR_21);







 FUNC_13(VAR_21, 1);

 FUNC_18(VAR_21);

 FUNC_14(VAR_21, VAR_5);
 FUNC_14(VAR_21, VAR_3);
 FUNC_14(VAR_21, VAR_4);

 VAR_20->sta.connectState = VAR_16;
 VAR_20->sta.connectByReasso = VAR_0;
 VAR_20->sta.cmDisallowSsidLength = 0;
 VAR_20->sta.bAutoReconnect = 0;
 VAR_20->sta.InternalScanReq = 0;
 VAR_20->sta.encryMode = VAR_9;
 VAR_20->sta.wepStatus = VAR_2;
 VAR_20->sta.wpaState = VAR_18;
 VAR_20->sta.cmMicFailureCount = 0;
 VAR_20->sta.ibssBssIsCreator = 0;




 VAR_20->sta.connectTimeoutCount = 0;


 VAR_20->sta.leapEnabled = 0;


 if (VAR_20->sta.rifsState == VAR_10)
  FUNC_7(VAR_21);
 VAR_20->sta.rifsState = VAR_11;
 VAR_20->sta.rifsLikeFrameCnt = 0;
 VAR_20->sta.rifsCount = 0;

 VAR_20->sta.osRxFilter = 0;
 VAR_20->sta.bSafeMode = 0;




 FUNC_15((u8_t *)VAR_20->sta.oppositeInfo,
   sizeof(struct zsOppositeInfo) * VAR_6);

 FUNC_20(VAR_21);

 FUNC_9(VAR_21, VAR_13);
 FUNC_9(VAR_21, VAR_12);


 if (VAR_20->sta.SWEncryptEnable != 0) {
  FUNC_16("Disable software encryption");
  FUNC_11(VAR_21);
 }







 if (VAR_20->wlanMode != VAR_8)
  VAR_20->wlanMode = VAR_7;

 return 0;
}
