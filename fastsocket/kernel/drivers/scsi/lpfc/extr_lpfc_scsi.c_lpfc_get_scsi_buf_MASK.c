
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_scsi_buf {int dummy; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_hba {struct lpfc_scsi_buf* (* lpfc_get_scsi_buf ) (struct lpfc_hba*,struct lpfc_nodelist*) ;} ;


 struct lpfc_scsi_buf* FUNC_0 (struct lpfc_hba*,struct lpfc_nodelist*) ;

__attribute__((used)) static struct lpfc_scsi_buf*
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_nodelist *VAR_1)
{
 return VAR_0->lpfc_get_scsi_buf(VAR_0, VAR_1);
}
