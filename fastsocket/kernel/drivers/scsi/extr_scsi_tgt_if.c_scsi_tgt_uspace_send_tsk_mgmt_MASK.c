
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_3__ {int host_no; int function; void* mid; int lun; void* tag; void* itn_id; } ;
struct TYPE_4__ {TYPE_1__ tsk_mgmt_req; } ;
struct tgt_event {TYPE_2__ p; } ;
struct scsi_lun {int dummy; } ;
typedef int ev ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,unsigned long long,unsigned long long) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct scsi_lun*,int) ;
 int FUNC_3 (struct tgt_event*,int ,int) ;
 int FUNC_4 (int ,struct tgt_event*) ;

int FUNC_5(int VAR_1, u64 VAR_2, int VAR_3,
      u64 VAR_4, struct scsi_lun *VAR_5, void *VAR_6)
{
 struct tgt_event VAR_7;
 int VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.p.tsk_mgmt_req.host_no = VAR_1;
 VAR_7.p.tsk_mgmt_req.itn_id = VAR_2;
 VAR_7.p.tsk_mgmt_req.function = VAR_3;
 VAR_7.p.tsk_mgmt_req.tag = VAR_4;
 FUNC_2(VAR_7.p.tsk_mgmt_req.lun, VAR_5, sizeof(VAR_7.p.tsk_mgmt_req.lun));
 VAR_7.p.tsk_mgmt_req.mid = (u64) (unsigned long) VAR_6;

 FUNC_0("%d %x %llx %llx\n", VAR_1, VAR_3, (unsigned long long) VAR_4,
  (unsigned long long) VAR_7.p.tsk_mgmt_req.mid);

 VAR_8 = FUNC_4(VAR_0, &VAR_7);
 if (VAR_8)
  FUNC_1("tx buf is full, could not send\n");

 return VAR_8;
}
