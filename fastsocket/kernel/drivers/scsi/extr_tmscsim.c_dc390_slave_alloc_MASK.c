
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef size_t u8 ;
struct scsi_device {int id; int lun; struct dc390_dcb* hostdata; TYPE_1__* host; } ;
struct dc390_dcb {int TargetID; int TargetLUN; int DevMode; int SyncMode; int SyncOffset; int NegoPeriod; int CtrlR4; int CtrlR1; int CtrlR3; int SyncPeriod; struct dc390_acb* pDCBACB; struct dc390_dcb* pNextDCB; } ;
struct dc390_acb {size_t AdapterIndex; int glitch_cfg; int scan_devices; TYPE_2__* pScsiHost; struct dc390_dcb* pLastDCB; struct dc390_dcb* pLinkDCB; struct dc390_dcb* pDCBRunRobin; int DCBCnt; } ;
struct TYPE_6__ {int EE_MODE1; size_t EE_SPEED; } ;
struct TYPE_5__ {int this_id; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;
typedef TYPE_3__* PEEprom ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
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
 int* VAR_13 ;
 int** VAR_14 ;
 struct dc390_dcb* FUNC_0 (struct dc390_acb*,int,int ) ;
 struct dc390_dcb* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_15)
{
 struct dc390_acb *VAR_16 = (struct dc390_acb*) VAR_15->host->hostdata;
 struct dc390_dcb *VAR_17, *VAR_18 = ((void*)0);
 uint VAR_19 = VAR_15->id;
 uint VAR_20 = VAR_15->lun;

 VAR_17 = FUNC_1(sizeof(struct dc390_dcb), VAR_5);
 if (!VAR_17)
  return -VAR_3;

 if (!VAR_16->DCBCnt++) {
  VAR_16->pLinkDCB = VAR_17;
  VAR_16->pDCBRunRobin = VAR_17;
 } else {
  VAR_16->pLastDCB->pNextDCB = VAR_17;
 }

 VAR_17->pNextDCB = VAR_16->pLinkDCB;
 VAR_16->pLastDCB = VAR_17;

 VAR_17->pDCBACB = VAR_16;
 VAR_17->TargetID = VAR_19;
 VAR_17->TargetLUN = VAR_20;





 if (VAR_20 && (VAR_18 = FUNC_0(VAR_16, VAR_19, 0))) {
  VAR_17->DevMode = VAR_18->DevMode;
  VAR_17->SyncMode = VAR_18->SyncMode & VAR_12;
  VAR_17->SyncPeriod = VAR_18->SyncPeriod;
  VAR_17->SyncOffset = VAR_18->SyncOffset;
  VAR_17->NegoPeriod = VAR_18->NegoPeriod;

  VAR_17->CtrlR3 = VAR_18->CtrlR3;
  VAR_17->CtrlR4 = VAR_18->CtrlR4;
 } else {
  u8 VAR_21 = VAR_16->AdapterIndex;
  PEEprom VAR_22 = (PEEprom) &VAR_14[VAR_21][VAR_19 << 2];

  VAR_17->DevMode = VAR_22->EE_MODE1;
  VAR_17->NegoPeriod =
   (VAR_13[VAR_22->EE_SPEED] * 25) >> 2;
  VAR_17->CtrlR3 = VAR_4;
  VAR_17->CtrlR4 = VAR_16->glitch_cfg | VAR_1;
  if (VAR_14[VAR_21][VAR_2] & VAR_0)
   VAR_17->CtrlR4 |= VAR_7 | VAR_6;
 }

 if (VAR_17->DevMode & VAR_11)
  VAR_17->SyncMode |= VAR_10;
 else {
  VAR_17->SyncMode = 0;
  VAR_17->SyncOffset &= ~0x0f;
 }

 VAR_17->CtrlR1 = VAR_16->pScsiHost->this_id;
 if (VAR_17->DevMode & VAR_8)
  VAR_17->CtrlR1 |= VAR_9;

 VAR_16->scan_devices = 1;
 VAR_15->hostdata = VAR_17;
 return 0;
}
