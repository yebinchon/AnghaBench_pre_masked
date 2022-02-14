
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct scsi_cmnd {int cmd_len; int cmnd; TYPE_1__* device; } ;
struct fcp_cmnd {scalar_t__ fc_pri_ta; int fc_flags; int fc_tm_flags; scalar_t__ fc_cmdref; int fc_cdb; int fc_dl; scalar_t__ fc_lun; } ;
struct TYPE_4__ {int tm_flags; } ;
struct bnx2fc_cmd {int io_req_flags; TYPE_2__ mp_req; int data_xfer_len; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_3__ {int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_lun*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fcp_cmnd*,int ,int) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*,char*) ;

void FUNC_5(struct bnx2fc_cmd *VAR_3,
      struct fcp_cmnd *VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_3->sc_cmd;
 char VAR_6[2];

 FUNC_3(VAR_4, 0, sizeof(struct fcp_cmnd));

 FUNC_1(VAR_5->device->lun,
   (struct scsi_lun *) VAR_4->fc_lun);


 VAR_4->fc_dl = FUNC_0(VAR_3->data_xfer_len);
 FUNC_2(VAR_4->fc_cdb, VAR_5->cmnd, VAR_5->cmd_len);

 VAR_4->fc_cmdref = 0;
 VAR_4->fc_pri_ta = 0;
 VAR_4->fc_tm_flags = VAR_3->mp_req.tm_flags;
 VAR_4->fc_flags = VAR_3->io_req_flags;

 if (FUNC_4(VAR_5, VAR_6)) {
  switch (VAR_6[0]) {
  case 129:
   VAR_4->fc_pri_ta = VAR_0;
   break;
  case 128:
   VAR_4->fc_pri_ta = VAR_1;
   break;
  default:
   VAR_4->fc_pri_ta = VAR_2;
   break;
  }
 } else {
  VAR_4->fc_pri_ta = 0;
 }
}
