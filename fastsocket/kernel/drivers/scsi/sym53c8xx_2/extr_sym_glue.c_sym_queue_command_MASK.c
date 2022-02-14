
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sym_tcb {int dummy; } ;
struct TYPE_2__ {scalar_t__ reqtags; } ;
struct sym_lcb {TYPE_1__ s; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct sym_ccb {int dummy; } ;
struct scsi_device {size_t id; int lun; } ;
struct scsi_cmnd {struct scsi_device* device; } ;


 int VAR_0 ;
 struct sym_ccb* FUNC_0 (struct sym_hcb*,struct scsi_cmnd*,int) ;
 struct sym_lcb* FUNC_1 (struct sym_tcb*,int ) ;
 int FUNC_2 (struct sym_hcb*,struct scsi_cmnd*,struct sym_ccb*) ;

__attribute__((used)) static int FUNC_3(struct sym_hcb *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct scsi_device *VAR_3 = VAR_2->device;
 struct sym_tcb *VAR_4;
 struct sym_lcb *VAR_5;
 struct sym_ccb *VAR_6;
 int VAR_7;




 VAR_4 = &VAR_1->target[VAR_3->id];




 VAR_5 = FUNC_1(VAR_4, VAR_3->lun);
 VAR_7 = (VAR_5 && VAR_5->s.reqtags) ? VAR_0 : 0;




 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_7);
 if (!VAR_6)
  return 1;
 FUNC_2(VAR_1, VAR_2, VAR_6);
 return 0;
}
