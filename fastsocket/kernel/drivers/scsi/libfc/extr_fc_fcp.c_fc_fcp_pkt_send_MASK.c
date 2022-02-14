
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct TYPE_8__ {int (* fcp_cmd_send ) (struct fc_lport*,struct fc_fcp_pkt*,int ) ;} ;
struct fc_lport {TYPE_3__ tt; } ;
struct TYPE_7__ {int fc_flags; int fc_cdb; scalar_t__ fc_lun; int fc_dl; } ;
struct fc_fcp_pkt {int req_flags; int list; TYPE_5__* cmd; TYPE_2__ cdb_cmd; int data_len; } ;
struct fc_fcp_internal {int scsi_queue_lock; int scsi_pkt_queue; } ;
struct TYPE_9__ {char* ptr; } ;
struct TYPE_10__ {TYPE_4__ SCp; int cmd_len; int cmnd; TYPE_1__* device; } ;
struct TYPE_6__ {int lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fc_fcp_internal* FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct scsi_lun*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct fc_lport*,struct fc_fcp_pkt*,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct fc_lport *VAR_2, struct fc_fcp_pkt *VAR_3)
{
 struct fc_fcp_internal *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 int VAR_6;

 VAR_3->cmd->SCp.ptr = (char *)VAR_3;
 VAR_3->cdb_cmd.fc_dl = FUNC_1(VAR_3->data_len);
 VAR_3->cdb_cmd.fc_flags = VAR_3->req_flags & ~VAR_0;

 FUNC_2(VAR_3->cmd->device->lun,
         (struct scsi_lun *)VAR_3->cdb_cmd.fc_lun);
 FUNC_5(VAR_3->cdb_cmd.fc_cdb, VAR_3->cmd->cmnd, VAR_3->cmd->cmd_len);

 FUNC_6(&VAR_4->scsi_queue_lock, VAR_5);
 FUNC_3(&VAR_3->list, &VAR_4->scsi_pkt_queue);
 FUNC_7(&VAR_4->scsi_queue_lock, VAR_5);
 VAR_6 = VAR_2->tt.fcp_cmd_send(VAR_2, VAR_3, VAR_1);
 if (FUNC_9(VAR_6)) {
  FUNC_6(&VAR_4->scsi_queue_lock, VAR_5);
  VAR_3->cmd->SCp.ptr = ((void*)0);
  FUNC_4(&VAR_3->list);
  FUNC_7(&VAR_4->scsi_queue_lock, VAR_5);
 }

 return VAR_6;
}
