
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int channel; } ;
struct ieee80211_device {scalar_t__ iw_mode; TYPE_1__ current_network; TYPE_2__* pHTInfo; } ;
struct TYPE_6__ {int ControlChl; int RecommemdedTxWidth; int* BasicMSC; scalar_t__ PcoPhase; scalar_t__ PcoActive; scalar_t__ LSigTxopProtectFull; scalar_t__ SecondaryBeacon; scalar_t__ DualBeacon; scalar_t__ NonGFDevPresent; int OptMode; scalar_t__ SrvIntGranularity; scalar_t__ PSMPAccessOnly; scalar_t__ RIFS; int ExtChlOffset; } ;
struct TYPE_5__ {int bRegBW40MHz; int CurrentOpMode; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;
typedef TYPE_3__* PHT_INFORMATION_ELE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(struct ieee80211_device* VAR_6, u8* VAR_7, u8* VAR_8, u8 VAR_9)
{
 PRT_HIGH_THROUGHPUT VAR_10 = VAR_6->pHTInfo;
 PHT_INFORMATION_ELE VAR_11 = (PHT_INFORMATION_ELE)VAR_7;
 if ((VAR_7 == ((void*)0)) || (VAR_11 == ((void*)0)))
 {
  FUNC_0(VAR_3, "posHTInfo or pHTInfoEle can't be null in HTConstructInfoElement()\n");
  return;
 }

 FUNC_1(VAR_7, 0, *VAR_8);
 if ( (VAR_6->iw_mode == VAR_4) || (VAR_6->iw_mode == VAR_5))
 {
  VAR_11->ControlChl = VAR_6->current_network.channel;
  VAR_11->ExtChlOffset = ((VAR_10->bRegBW40MHz == 0)?VAR_1:
           (VAR_6->current_network.channel<=6)?
            VAR_2:VAR_0);
  VAR_11->RecommemdedTxWidth = VAR_10->bRegBW40MHz;
  VAR_11->RIFS = 0;
  VAR_11->PSMPAccessOnly = 0;
  VAR_11->SrvIntGranularity = 0;
  VAR_11->OptMode = VAR_10->CurrentOpMode;
  VAR_11->NonGFDevPresent = 0;
  VAR_11->DualBeacon = 0;
  VAR_11->SecondaryBeacon = 0;
  VAR_11->LSigTxopProtectFull = 0;
  VAR_11->PcoActive = 0;
  VAR_11->PcoPhase = 0;

  FUNC_1(VAR_11->BasicMSC, 0, 16);


  *VAR_8 = 22 + 2;

 }
 else
 {

  *VAR_8 = 0;
 }


 return;
}
