
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_tcb {int dummy; } ;
struct sym_lcb {int started_tags; int started_max; scalar_t__ num_sgood; } ;
struct sym_hcb {int squeue_ba; int comp_ccbq; struct sym_tcb* target; } ;
struct sym_ccb {size_t target; int link_ccbq; int ssss_status; int host_status; scalar_t__ sv_resid; int xerr_status; int host_flags; struct scsi_cmnd* cmd; } ;
struct scsi_device {int lun; int sdev_gendev; } ;
struct scsi_cmnd {struct scsi_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sym_hcb*,int ) ;
 int FUNC_1 (struct sym_hcb*,int ) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,char*,struct sym_ccb*,int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (char*,int,int) ;
 int VAR_11 ;
 int FUNC_5 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_6 (struct sym_hcb*,int,size_t,int ,int) ;
 int FUNC_7 (struct sym_hcb*,int ) ;
 int FUNC_8 (int *,int *) ;
 struct sym_lcb* FUNC_9 (struct sym_tcb*,int ) ;
 int FUNC_10 (struct scsi_cmnd*,char*,int) ;
 int FUNC_11 (struct scsi_cmnd*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct sym_hcb*,struct sym_ccb*,int) ;
 int FUNC_14 (struct scsi_cmnd*,int ) ;
 int FUNC_15 (struct sym_hcb*,struct sym_lcb*,int) ;
 int VAR_12 ;

void FUNC_16(struct sym_hcb *VAR_13, struct sym_ccb *VAR_14)
{
 struct scsi_device *VAR_15;
 struct scsi_cmnd *VAR_16;
 struct sym_tcb *VAR_17;
 struct sym_lcb *VAR_18;
 int VAR_19;
 int VAR_20;




 if (!VAR_14 || !VAR_14->cmd)
  return;

 VAR_16 = VAR_14->cmd;
 VAR_15 = VAR_16->device;
 if (VAR_0 & (VAR_2|VAR_1)) {
  FUNC_3(&VAR_15->sdev_gendev, "CCB=%p STAT=%x/%x/%x\n", VAR_14,
   VAR_14->host_status, VAR_14->ssss_status, VAR_14->host_flags);
 }




 VAR_17 = &VAR_13->target[VAR_14->target];
 VAR_18 = FUNC_9(VAR_17, VAR_15->lun);




 if (VAR_14->xerr_status) {
  if (VAR_12)
   FUNC_11(VAR_16, VAR_14->xerr_status);
  if (VAR_14->host_status == VAR_5)
   VAR_14->host_status = VAR_6;
 }




 VAR_19 = FUNC_5(VAR_13, VAR_14);

 if (!VAR_7) {
  VAR_19 = 0;
  VAR_14->sv_resid = 0;
 }
 VAR_20 = (FUNC_0(VAR_13, VAR_10) - VAR_13->squeue_ba) / 4;
 VAR_20 = FUNC_6(VAR_13, VAR_20, VAR_14->target, VAR_15->lun, -1);




 FUNC_1(VAR_13, FUNC_2(VAR_13, VAR_11));
 FUNC_13(VAR_13, VAR_14, VAR_19);







 FUNC_12(&VAR_14->link_ccbq);
 FUNC_8(&VAR_14->link_ccbq, &VAR_13->comp_ccbq);





 FUNC_7(VAR_13, 0);







}
