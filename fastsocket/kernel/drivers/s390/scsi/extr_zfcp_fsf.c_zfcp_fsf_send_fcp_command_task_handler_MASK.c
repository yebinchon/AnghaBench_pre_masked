
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_5__* adapter; TYPE_4__* qtcb; struct scsi_cmnd* data; } ;
struct scsi_cmnd {scalar_t__ result; scalar_t__ retries; int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; } ;
struct fcp_resp_with_ext {int dummy; } ;
struct TYPE_10__ {int adapter_features; int abort_lock; int dbf; } ;
struct TYPE_7__ {int fcp_rsp; } ;
struct TYPE_8__ {TYPE_2__ io; } ;
struct TYPE_6__ {int fsf_status; } ;
struct TYPE_9__ {TYPE_3__ bottom; TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct scsi_cmnd*,int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*,int,int ,struct scsi_cmnd*,struct zfcp_fsf_req*) ;
 int FUNC_6 (struct fcp_resp_with_ext*,struct scsi_cmnd*) ;
 int FUNC_7 (struct zfcp_fsf_req*) ;
 int FUNC_8 (struct zfcp_fsf_req*) ;
 int FUNC_9 (struct scsi_cmnd*,int) ;

__attribute__((used)) static void FUNC_10(struct zfcp_fsf_req *VAR_4)
{
 struct scsi_cmnd *VAR_5;
 struct fcp_resp_with_ext *VAR_6;
 unsigned long VAR_7;

 FUNC_0(&VAR_4->adapter->abort_lock, VAR_7);

 VAR_5 = VAR_4->data;
 if (FUNC_4(!VAR_5)) {
  FUNC_1(&VAR_4->adapter->abort_lock, VAR_7);
  return;
 }

 if (FUNC_4(VAR_4->status & VAR_3)) {
  FUNC_2(VAR_5, VAR_1);
  goto skip_fsfstatus;
 }

 switch (VAR_4->qtcb->header.fsf_status) {
 case 130:
 case 129:
  FUNC_2(VAR_5, VAR_0);
  goto skip_fsfstatus;
 case 131:
  FUNC_9(VAR_5, 0x1);
  goto skip_fsfstatus;
 case 132:
  FUNC_9(VAR_5, 0x2);
  goto skip_fsfstatus;
 case 128:
  FUNC_9(VAR_5, 0x3);
  goto skip_fsfstatus;
 }
 VAR_6 = (struct fcp_resp_with_ext *) &VAR_4->qtcb->bottom.io.fcp_rsp;
 FUNC_6(VAR_6, VAR_5);

 if (VAR_4->adapter->adapter_features & VAR_2)
  FUNC_7(VAR_4);

 FUNC_8(VAR_4);

skip_fsfstatus:
 if (VAR_5->result != 0)
  FUNC_5("erro", 3, VAR_4->adapter->dbf, VAR_5, VAR_4);
 else if (VAR_5->retries > 0)
  FUNC_5("retr", 4, VAR_4->adapter->dbf, VAR_5, VAR_4);
 else
  FUNC_5("norm", 6, VAR_4->adapter->dbf, VAR_5, VAR_4);

 VAR_5->host_scribble = ((void*)0);
 (VAR_5->scsi_done) (VAR_5);






 FUNC_1(&VAR_4->adapter->abort_lock, VAR_7);
}
