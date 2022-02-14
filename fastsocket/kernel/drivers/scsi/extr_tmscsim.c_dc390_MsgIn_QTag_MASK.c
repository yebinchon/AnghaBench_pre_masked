
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {scalar_t__ host_scribble; } ;
struct dc390_srb {int SRBState; int MsgCnt; int * MsgOutBuf; TYPE_1__* pcmd; } ;
struct dc390_dcb {int DCBFlag; struct dc390_srb* pActiveSRB; struct dc390_srb* pGoingSRB; } ;
struct dc390_acb {struct dc390_srb* pTmpSRB; } ;
typedef int s8 ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dc390_acb*,struct dc390_srb*) ;
 struct scsi_cmnd* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct dc390_srb*
FUNC_2 (struct dc390_acb* VAR_7, struct dc390_dcb* VAR_8, s8 VAR_9)
{
  struct dc390_srb* VAR_10 = VAR_8->pGoingSRB;

  if (VAR_10)
    {
 struct scsi_cmnd *VAR_11 = FUNC_1(VAR_10->pcmd->device, VAR_9);
 VAR_10 = (struct dc390_srb *)VAR_11->host_scribble;

 if (VAR_8->DCBFlag & VAR_0)
 {
   VAR_10->SRBState = VAR_3;
   FUNC_0( VAR_7, VAR_10 );
 }

 if (!(VAR_10->SRBState & VAR_5))
  goto mingx0;

 VAR_8->pActiveSRB = VAR_10;
 VAR_10->SRBState = VAR_4;
    }
  else
    {
    mingx0:
      VAR_10 = VAR_7->pTmpSRB;
      VAR_10->SRBState = VAR_6;
      VAR_8->pActiveSRB = VAR_10;
      VAR_10->MsgOutBuf[0] = VAR_1;
      VAR_10->MsgCnt = 1; VAR_2;
    }
  return VAR_10;
}
