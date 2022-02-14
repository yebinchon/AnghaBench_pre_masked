
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_ucmd {scalar_t__ eh_done; } ;
struct sym_hcb {int dummy; } ;
struct scsi_pointer {int dummy; } ;
struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;


 int FUNC_0 (int) ;
 struct sym_ucmd* FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

void FUNC_5(struct sym_hcb *VAR_0, struct scsi_cmnd *VAR_1)
{
 struct sym_ucmd *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(sizeof(struct scsi_pointer) < sizeof(struct sym_ucmd));

 if (VAR_2->eh_done)
  FUNC_2(VAR_2->eh_done);

 FUNC_3(VAR_1);
 VAR_1->scsi_done(VAR_1);
}
