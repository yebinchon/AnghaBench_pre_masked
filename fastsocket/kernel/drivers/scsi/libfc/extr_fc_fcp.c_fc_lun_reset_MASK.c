
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct TYPE_4__ {int (* exch_done ) (int *) ;} ;
struct fc_lport {TYPE_2__ tt; } ;
struct TYPE_3__ {scalar_t__ fc_lun; int fc_tm_flags; int fc_dl; } ;
struct fc_fcp_pkt {int wait_for_comp; scalar_t__ cdb_status; int scsi_pkt_lock; int * seq_ptr; int timer; int state; int tm_done; TYPE_1__ cdb_cmd; int data_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fc_lport*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_lport*,unsigned int,unsigned int,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned int,struct scsi_lun*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct fc_lport *VAR_7, struct fc_fcp_pkt *VAR_8,
   unsigned int VAR_9, unsigned int VAR_10)
{
 int VAR_11;

 VAR_8->cdb_cmd.fc_dl = FUNC_4(VAR_8->data_len);
 VAR_8->cdb_cmd.fc_tm_flags = VAR_2;
 FUNC_6(VAR_10, (struct scsi_lun *)VAR_8->cdb_cmd.fc_lun);

 VAR_8->wait_for_comp = 1;
 FUNC_5(&VAR_8->tm_done);

 FUNC_3((unsigned long)VAR_8);





 VAR_11 = FUNC_10(&VAR_8->tm_done, VAR_4);

 FUNC_7(&VAR_8->scsi_pkt_lock);
 VAR_8->state |= VAR_5;
 FUNC_8(&VAR_8->scsi_pkt_lock);

 FUNC_1(&VAR_8->timer);

 FUNC_7(&VAR_8->scsi_pkt_lock);
 if (VAR_8->seq_ptr) {
  VAR_7->tt.exch_done(VAR_8->seq_ptr);
  VAR_8->seq_ptr = ((void*)0);
 }
 VAR_8->wait_for_comp = 0;
 FUNC_8(&VAR_8->scsi_pkt_lock);

 if (!VAR_11) {
  FUNC_0(VAR_7, "lun reset failed\n");
  return VAR_0;
 }


 if (VAR_8->cdb_status != VAR_1)
  return VAR_0;

 FUNC_0(VAR_7, "lun reset to lun %u completed\n", VAR_10);
 FUNC_2(VAR_7, VAR_9, VAR_10, VAR_3);
 return VAR_6;
}
