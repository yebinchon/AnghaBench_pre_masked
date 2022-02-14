
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fc_lport {scalar_t__ state; int link_up; } ;
struct fc_fcp_pkt {int dummy; } ;
struct fc_fcp_internal {int scsi_queue_lock; } ;
struct TYPE_2__ {int host; } ;


 struct fc_fcp_pkt* FUNC_0 (struct scsi_cmnd*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_fcp_pkt*) ;
 int FUNC_5 (struct fc_fcp_pkt*) ;
 int FUNC_6 (struct fc_fcp_pkt*) ;
 struct fc_fcp_internal* FUNC_7 (struct fc_lport*) ;
 struct fc_lport* FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int FUNC_11(struct scsi_cmnd *VAR_3)
{
 struct fc_fcp_pkt *VAR_4;
 struct fc_lport *VAR_5;
 struct fc_fcp_internal *VAR_6;
 int VAR_7 = VAR_0;
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_5 = FUNC_8(VAR_3->device->host);
 if (VAR_5->state != VAR_1)
  return VAR_7;
 else if (!VAR_5->link_up)
  return VAR_7;

 VAR_6 = FUNC_7(VAR_5);
 FUNC_9(&VAR_6->scsi_queue_lock, VAR_8);
 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {

  FUNC_10(&VAR_6->scsi_queue_lock, VAR_8);
  return VAR_2;
 }

 FUNC_4(VAR_4);
 FUNC_10(&VAR_6->scsi_queue_lock, VAR_8);

 if (FUNC_2(VAR_4)) {

  VAR_7 = VAR_2;
  goto release_pkt;
 }

 VAR_7 = FUNC_3(VAR_4);
 FUNC_6(VAR_4);

release_pkt:
 FUNC_5(VAR_4);
 return VAR_7;
}
