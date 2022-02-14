
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int * cmnd; } ;
struct ibmvfc_host {scalar_t__ log_level; } ;
struct TYPE_6__ {int rsp_code; } ;
struct TYPE_7__ {TYPE_2__ info; } ;
struct ibmvfc_fcp_rsp {int flags; int scsi_status; TYPE_3__ data; } ;
struct ibmvfc_event {struct scsi_cmnd* cmnd; struct ibmvfc_host* vhost; TYPE_1__* xfer_iu; } ;
struct ibmvfc_cmd {int error; int status; struct ibmvfc_fcp_rsp rsp; } ;
struct TYPE_8__ {int log; char* name; } ;
struct TYPE_5__ {struct ibmvfc_cmd cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct scsi_cmnd*,char*,int ,char const*,int ,int ,int,int,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 char* VAR_4 ;

__attribute__((used)) static void FUNC_3(struct ibmvfc_event *VAR_5)
{
 struct ibmvfc_cmd *VAR_6 = &VAR_5->xfer_iu->cmd;
 struct ibmvfc_host *VAR_7 = VAR_5->vhost;
 struct ibmvfc_fcp_rsp *VAR_8 = &VAR_6->rsp;
 struct scsi_cmnd *VAR_9 = VAR_5->cmnd;
 const char *VAR_10 = VAR_4;
 int VAR_11 = FUNC_0(VAR_6->status, VAR_6->error);
 int VAR_12 = 0;
 int VAR_13 = 0;

 if (VAR_11 >= 0) {
  VAR_12 = VAR_3[VAR_11].log;
  VAR_10 = VAR_3[VAR_11].name;
 }

 if (!VAR_12 && (VAR_7->log_level <= (VAR_1 + 1)))
  return;

 if (VAR_8->flags & VAR_0)
  VAR_13 = VAR_8->data.info.rsp_code;

 FUNC_1(VAR_2, VAR_9, "Command (%02X) failed: %s (%x:%x) "
      "flags: %x fcp_rsp: %x, resid=%d, scsi_status: %x\n",
      VAR_9->cmnd[0], VAR_10, VAR_6->status, VAR_6->error,
      VAR_8->flags, VAR_13, FUNC_2(VAR_9), VAR_8->scsi_status);
}
