
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_3__ {void* tag; int data_len; int attribute; int lun; int scb; void* itn_id; int host_no; } ;
struct TYPE_4__ {TYPE_1__ cmd_req; } ;
struct tgt_event {TYPE_2__ p; } ;
struct scsi_lun {int dummy; } ;
struct scsi_cmnd {int tag; struct scsi_lun* cmnd; } ;
struct Scsi_Host {int host_no; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (char*,struct scsi_cmnd*,int ,int ,int ,unsigned long long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct scsi_lun*,int) ;
 int FUNC_3 (struct tgt_event*,int ,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 struct Scsi_Host* FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (int ,struct tgt_event*) ;

int FUNC_7(struct scsi_cmnd *VAR_1, u64 VAR_2,
        struct scsi_lun *VAR_3, u64 VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_5(VAR_1);
 struct tgt_event VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.p.cmd_req.host_no = VAR_5->host_no;
 VAR_6.p.cmd_req.itn_id = VAR_2;
 VAR_6.p.cmd_req.data_len = FUNC_4(VAR_1);
 FUNC_2(VAR_6.p.cmd_req.scb, VAR_1->cmnd, sizeof(VAR_6.p.cmd_req.scb));
 FUNC_2(VAR_6.p.cmd_req.lun, VAR_3, sizeof(VAR_6.p.cmd_req.lun));
 VAR_6.p.cmd_req.attribute = VAR_1->tag;
 VAR_6.p.cmd_req.tag = VAR_4;

 FUNC_0("%p %d %u %x %llx\n", VAR_1, VAR_5->host_no,
  VAR_6.p.cmd_req.data_len, VAR_1->tag,
  (unsigned long long) VAR_6.p.cmd_req.tag);

 VAR_7 = FUNC_6(VAR_0, &VAR_6);
 if (VAR_7)
  FUNC_1("tx buf is full, could not send\n");

 return VAR_7;
}
