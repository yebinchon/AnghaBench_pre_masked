
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_device {int* Regdot11HTOperationalRateSet; int dev; scalar_t__ (* GetHalfNmodeSupportByAPsHandler ) (int ) ;TYPE_1__* pHTInfo; } ;
struct TYPE_4__ {int ChlWidth; int ShortGI20Mhz; int ShortGI40Mhz; int TxSTBC; int MaxAMSDUSize; int DssCCk; int MPDUDensity; int MaxRxAMPDUFactor; int* MCS; int ExtHTCapInfo; int* TxBFCap; scalar_t__ ASCap; scalar_t__ LSigTxopProtect; scalar_t__ PSMP; scalar_t__ DelayBA; scalar_t__ RxSTBC; scalar_t__ GreenField; int MimoPwrSave; scalar_t__ AdvCoding; } ;
struct TYPE_3__ {scalar_t__ ePeerHTSpecVer; int IOTAction; scalar_t__ bRegSuppCCK; scalar_t__ bRegBW40MHz; int SelfMimoPs; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_2__* PHT_CAPABILITY_ELE ;
typedef int EWC11NHTCap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_device* VAR_7, u8* VAR_8, u8* VAR_9, u8 VAR_10)
{
 PRT_HIGH_THROUGHPUT VAR_11 = VAR_7->pHTInfo;
 PHT_CAPABILITY_ELE VAR_12 = ((void*)0);


 if ((VAR_8 == ((void*)0)) || (VAR_11 == ((void*)0)))
 {
  FUNC_0(VAR_4, "posHTCap or pHTInfo can't be null in HTConstructCapabilityElement()\n");
  return;
 }
 FUNC_2(VAR_8, 0, *VAR_9);
 if(VAR_11->ePeerHTSpecVer == VAR_3)
 {
  u8 VAR_13[] = {0x00, 0x90, 0x4c, 0x33};
  FUNC_1(VAR_8, VAR_13, sizeof(VAR_13));
  VAR_12 = (PHT_CAPABILITY_ELE)&(VAR_8[4]);
 }else
 {
  VAR_12 = (PHT_CAPABILITY_ELE)VAR_8;
 }



 VAR_12->AdvCoding = 0;
 if(VAR_7->GetHalfNmodeSupportByAPsHandler(VAR_7->dev))
 {
  VAR_12->ChlWidth = 0;
 }
 else
 {
  VAR_12->ChlWidth = (VAR_11->bRegBW40MHz?1:0);
 }


 VAR_12->MimoPwrSave = VAR_11->SelfMimoPs;
 VAR_12->GreenField = 0;
 VAR_12->ShortGI20Mhz = 1;
 VAR_12->ShortGI40Mhz = 1;


 VAR_12->TxSTBC = 1;
 VAR_12->RxSTBC = 0;
 VAR_12->DelayBA = 0;
 VAR_12->MaxAMSDUSize = (VAR_6>=7935)?1:0;
 VAR_12->DssCCk = ((VAR_11->bRegBW40MHz)?(VAR_11->bRegSuppCCK?1:0):0);
 VAR_12->PSMP = 0;
 VAR_12->LSigTxopProtect = 0;




 FUNC_0(VAR_5, "TX HT cap/info ele BW=%d MaxAMSDUSize:%d DssCCk:%d\n", VAR_12->ChlWidth, VAR_12->MaxAMSDUSize, VAR_12->DssCCk);

 if( VAR_10)
 {
  VAR_12->MPDUDensity = 7;
  VAR_12->MaxRxAMPDUFactor = 2;
 }
 else
 {
  VAR_12->MaxRxAMPDUFactor = 3;
  VAR_12->MPDUDensity = 0;
 }


 FUNC_1(VAR_12->MCS, VAR_7->Regdot11HTOperationalRateSet, 16);
 if(VAR_11->IOTAction & VAR_2)
  VAR_12->MCS[1] &= 0x7f;

 if(VAR_11->IOTAction & VAR_1)
  VAR_12->MCS[1] &= 0xbf;

 if(VAR_11->IOTAction & VAR_0)
  VAR_12->MCS[1] &= 0x00;



 if(VAR_7->GetHalfNmodeSupportByAPsHandler(VAR_7->dev))
 {
  int VAR_14;
  for(VAR_14 = 1; VAR_14< 16; VAR_14++)
   VAR_12->MCS[VAR_14] = 0;
 }


 FUNC_2(&VAR_12->ExtHTCapInfo, 0, 2);



 FUNC_2(VAR_12->TxBFCap, 0, 4);


 VAR_12->ASCap = 0;

 if(VAR_11->ePeerHTSpecVer == VAR_3)
  *VAR_9 = 30 + 2;
 else
  *VAR_9 = 26 + 2;







 return;

}
