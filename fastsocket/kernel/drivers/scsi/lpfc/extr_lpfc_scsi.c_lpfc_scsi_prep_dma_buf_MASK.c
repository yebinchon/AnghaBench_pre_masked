
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_scsi_buf {int dummy; } ;
struct lpfc_hba {int (* lpfc_scsi_prep_dma_buf ) (struct lpfc_hba*,struct lpfc_scsi_buf*) ;} ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_scsi_buf*) ;

__attribute__((used)) static inline int
FUNC_1(struct lpfc_hba *VAR_0, struct lpfc_scsi_buf *VAR_1)
{
 return VAR_0->lpfc_scsi_prep_dma_buf(VAR_0, VAR_1);
}
