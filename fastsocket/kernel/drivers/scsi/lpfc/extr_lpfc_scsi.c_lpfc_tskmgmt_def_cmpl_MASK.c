
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_scsi_buf {int dummy; } ;
struct lpfc_iocbq {scalar_t__ context1; } ;
struct lpfc_hba {int dummy; } ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0,
   struct lpfc_iocbq *VAR_1,
   struct lpfc_iocbq *VAR_2)
{
 struct lpfc_scsi_buf *VAR_3 =
  (struct lpfc_scsi_buf *) VAR_1->context1;
 if (VAR_3)
  FUNC_0(VAR_0, VAR_3);
 return;
}
