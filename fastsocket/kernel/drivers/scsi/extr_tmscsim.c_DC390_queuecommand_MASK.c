
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ queue_depth; struct dc390_dcb* hostdata; TYPE_1__* host; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;char* host_scribble; scalar_t__ result; struct scsi_device* device; } ;
struct dc390_srb {int TagNumber; scalar_t__ EndMessage; scalar_t__ ScsiPhase; scalar_t__ SGToBeXferLen; scalar_t__ SGBusAddr; scalar_t__ TotalXferredLen; scalar_t__ SRBState; scalar_t__ SRBFlag; scalar_t__ SRBStatus; scalar_t__ MsgCnt; scalar_t__ TargetStatus; scalar_t__ AdaptStatus; scalar_t__ SGIndex; struct scsi_cmnd* pcmd; struct dc390_dcb* pSRBDCB; struct dc390_srb* pNextSRB; } ;
struct dc390_dcb {scalar_t__ GoingSRBCnt; } ;
struct dc390_acb {int ACBFlag; struct dc390_srb* pFreeSRB; int Cmds; scalar_t__ pActiveDCB; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dc390_acb*,struct dc390_srb*) ;
 int FUNC_1 (struct dc390_dcb*,struct dc390_srb*) ;
 scalar_t__ FUNC_2 (struct dc390_acb*,struct dc390_dcb*,struct dc390_srb*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_6,
  void (*VAR_7)(struct scsi_cmnd *))
{
 struct scsi_device *VAR_8 = VAR_6->device;
 struct dc390_acb *VAR_9 = (struct dc390_acb *)VAR_8->host->hostdata;
 struct dc390_dcb *VAR_10 = VAR_8->hostdata;
 struct dc390_srb *VAR_11;

 if (VAR_8->queue_depth <= VAR_10->GoingSRBCnt)
  goto device_busy;
 if (VAR_9->pActiveDCB)
  goto host_busy;
 if (VAR_9->ACBFlag & (VAR_0|VAR_2|VAR_1))
  goto host_busy;

 VAR_11 = VAR_9->pFreeSRB;
 if (FUNC_3(VAR_11 == ((void*)0)))
  goto host_busy;

 VAR_6->scsi_done = VAR_7;
 VAR_6->result = 0;
 VAR_9->Cmds++;

 VAR_9->pFreeSRB = VAR_11->pNextSRB;
 VAR_11->pNextSRB = ((void*)0);

 VAR_11->pSRBDCB = VAR_10;
 VAR_11->pcmd = VAR_6;
 VAR_6->host_scribble = (char *)VAR_11;

 VAR_11->SGIndex = 0;
 VAR_11->AdaptStatus = 0;
 VAR_11->TargetStatus = 0;
 VAR_11->MsgCnt = 0;

 VAR_11->SRBStatus = 0;
 VAR_11->SRBFlag = 0;
 VAR_11->SRBState = 0;
 VAR_11->TotalXferredLen = 0;
 VAR_11->SGBusAddr = 0;
 VAR_11->SGToBeXferLen = 0;
 VAR_11->ScsiPhase = 0;
 VAR_11->EndMessage = 0;
 VAR_11->TagNumber = VAR_5;

 if (FUNC_2(VAR_9, VAR_10, VAR_11)) {
  FUNC_0(VAR_9, VAR_11);
  goto host_busy;
 }

 FUNC_1(VAR_10, VAR_11);

 return 0;

 host_busy:
 return VAR_4;

 device_busy:
 return VAR_3;
}
