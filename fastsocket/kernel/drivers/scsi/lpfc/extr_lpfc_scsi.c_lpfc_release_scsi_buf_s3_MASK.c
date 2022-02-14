
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iocb_flag; } ;
struct lpfc_scsi_buf {int list; TYPE_1__ cur_iocbq; int * pCmd; scalar_t__ prot_seg_cnt; scalar_t__ nonsg_phys; scalar_t__ seg_cnt; } ;
struct lpfc_hba {int scsi_buf_list_put_lock; int lpfc_scsi_buf_list_put; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_1, struct lpfc_scsi_buf *VAR_2)
{
 unsigned long VAR_3 = 0;

 VAR_2->seg_cnt = 0;
 VAR_2->nonsg_phys = 0;
 VAR_2->prot_seg_cnt = 0;

 FUNC_1(&VAR_1->scsi_buf_list_put_lock, VAR_3);
 VAR_2->pCmd = ((void*)0);
 VAR_2->cur_iocbq.iocb_flag = VAR_0;
 FUNC_0(&VAR_2->list, &VAR_1->lpfc_scsi_buf_list_put);
 FUNC_2(&VAR_1->scsi_buf_list_put_lock, VAR_3);
}
