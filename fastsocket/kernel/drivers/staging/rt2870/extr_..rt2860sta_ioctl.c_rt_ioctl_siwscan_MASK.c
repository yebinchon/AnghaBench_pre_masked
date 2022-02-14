
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct net_device {TYPE_5__* ml_priv; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
typedef int ULONG ;
struct TYPE_17__ {scalar_t__ bRadio; scalar_t__ WpaSupplicantUP; int WpaSupplicantScanCount; scalar_t__ AuthMode; scalar_t__ PortSecured; int LastScanTime; scalar_t__ ScanCnt; scalar_t__ bScanReqIsFromWebUI; } ;
struct TYPE_16__ {int CurrReqIsFromNdis; } ;
struct TYPE_14__ {scalar_t__ CurrState; } ;
struct TYPE_15__ {TYPE_1__ CntlMachine; } ;
struct TYPE_18__ {scalar_t__ OpMode; scalar_t__ bPCIclkOff; TYPE_4__ StaCfg; TYPE_3__ MlmeAux; TYPE_2__ Mlme; } ;
typedef TYPE_5__* PRTMP_ADAPTER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ,int ,int ,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_9(struct net_device *VAR_20,
   struct iw_request_info *VAR_21,
   struct iw_point *VAR_22, char *VAR_23)
{
 PRTMP_ADAPTER VAR_24 = VAR_20->ml_priv;

 ULONG VAR_25;
 int VAR_26 = VAR_6;


 if(!FUNC_8(VAR_24, VAR_18))
 {
  FUNC_0(VAR_11, ("INFO::Network is down!\n"));
  return -VAR_2;
 }

 if (FUNC_2(VAR_24))
    {
        FUNC_0(VAR_11, ("!!! Driver is in Monitor Mode now !!!\n"));
        return -VAR_1;
    }
 if (VAR_24->StaCfg.WpaSupplicantUP == VAR_14)
 {
  VAR_24->StaCfg.WpaSupplicantScanCount++;
 }

    VAR_24->StaCfg.bScanReqIsFromWebUI = VAR_12;
 if (FUNC_8(VAR_24, VAR_16))
  return 0;
 do{
  VAR_25 = VAR_19;

  if ((VAR_24->StaCfg.WpaSupplicantUP == VAR_14) &&
   (VAR_24->StaCfg.WpaSupplicantScanCount > 3))
  {
   FUNC_0(VAR_11, ("!!! WpaSupplicantScanCount > 3\n"));
   VAR_26 = VAR_6;
   break;
  }

  if ((FUNC_4(VAR_24, VAR_15)) &&
   ((VAR_24->StaCfg.AuthMode == VAR_7) ||
   (VAR_24->StaCfg.AuthMode == VAR_8)) &&
   (VAR_24->StaCfg.PortSecured == VAR_13))
  {
   FUNC_0(VAR_11, ("!!! Link UP, Port Not Secured! ignore this set::OID_802_11_BSSID_LIST_SCAN\n"));
   VAR_26 = VAR_6;
   break;
  }

  if (VAR_24->Mlme.CntlMachine.CurrState != VAR_0)
  {
   FUNC_6(VAR_24);
   FUNC_0(VAR_11, ("!!! MLME busy, reset MLME state machine !!!\n"));
  }



  VAR_24->MlmeAux.CurrReqIsFromNdis = VAR_3;

  VAR_24->StaCfg.ScanCnt = 0;
  VAR_24->StaCfg.LastScanTime = VAR_25;

  FUNC_3(VAR_24,
   VAR_5,
   VAR_9,
   0,
   ((void*)0));

  VAR_26 = VAR_6;
  FUNC_5(VAR_24);
 }while(0);
 return 0;
}
