
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int scsi_xri_cnt; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; int scsi_buf_list_get_lock; int scsi_buf_list_put_lock; int lpfc_scsi_buf_list_put; int lpfc_scsi_buf_list_get; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct lpfc_hba*,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int
FUNC_9(struct lpfc_hba *VAR_2)
{
 FUNC_0(VAR_1);
 int VAR_3, VAR_4 = 0;


 FUNC_6(&VAR_2->scsi_buf_list_get_lock);
 FUNC_5(&VAR_2->scsi_buf_list_put_lock);
 FUNC_3(&VAR_2->lpfc_scsi_buf_list_get, &VAR_1);
 FUNC_2(&VAR_2->lpfc_scsi_buf_list_put, &VAR_1);
 FUNC_7(&VAR_2->scsi_buf_list_put_lock);
 FUNC_8(&VAR_2->scsi_buf_list_get_lock);


 if (!FUNC_1(&VAR_1)) {
  VAR_3 = FUNC_4(VAR_2, &VAR_1,
      VAR_2->sli4_hba.scsi_xri_cnt);

  if (VAR_3 == 0)
   VAR_4 = -VAR_0;
 }
 return VAR_4;
}
