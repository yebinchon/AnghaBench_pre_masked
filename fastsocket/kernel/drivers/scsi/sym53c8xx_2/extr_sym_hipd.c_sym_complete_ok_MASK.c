
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_tcb {int dummy; } ;
struct sym_lcb {scalar_t__ started_max; scalar_t__ started_limit; int num_sgood; int waiting_ccbq; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct TYPE_3__ {scalar_t__ lastp; } ;
struct TYPE_4__ {TYPE_1__ head; } ;
struct sym_ccb {scalar_t__ host_status; size_t target; scalar_t__ goalp; TYPE_2__ phys; int lun; struct scsi_cmnd* cmd; } ;
struct scsi_cmnd {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct sym_hcb*,struct sym_ccb*) ;
 int FUNC_3 (struct sym_hcb*,struct sym_ccb*) ;
 struct sym_lcb* FUNC_4 (struct sym_tcb*,int ) ;
 int FUNC_5 (struct scsi_cmnd*,char*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sym_ccb*,struct scsi_cmnd*,int) ;
 int FUNC_8 (struct sym_hcb*,struct sym_lcb*,int) ;
 int VAR_2 ;
 int FUNC_9 (struct sym_hcb*,struct scsi_cmnd*) ;

void FUNC_10 (struct sym_hcb *VAR_3, struct sym_ccb *VAR_4)
{
 struct sym_tcb *VAR_5;
 struct sym_lcb *VAR_6;
 struct scsi_cmnd *VAR_7;
 int VAR_8;




 if (!VAR_4 || !VAR_4->cmd)
  return;
 FUNC_0 (VAR_4->host_status == VAR_0);




 VAR_7 = VAR_4->cmd;




 VAR_5 = &VAR_3->target[VAR_4->target];
 VAR_6 = FUNC_4(VAR_5, VAR_4->lun);





 VAR_8 = 0;
 if (VAR_4->phys.head.lastp != VAR_4->goalp)
  VAR_8 = FUNC_2(VAR_3, VAR_4);






 if (!VAR_1)
  VAR_8 = 0;
 FUNC_7(VAR_4, VAR_7, VAR_8);
 FUNC_3 (VAR_3, VAR_4);
 FUNC_9(VAR_3, VAR_7);
}
