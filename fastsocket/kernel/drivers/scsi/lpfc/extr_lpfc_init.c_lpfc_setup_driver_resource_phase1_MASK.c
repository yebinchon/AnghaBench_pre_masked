
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int fcf_conn_rec_list; int elsbuf; int fabric_iocb_list; int lpfc_scsi_buf_list_put; int scsi_buf_list_put_lock; int lpfc_scsi_buf_list_get; int scsi_buf_list_get_lock; int work_waitq; int wait_4_mlo_m_q; int work_list; int port_list; int ndlp_lock; int hbalock; int fast_event_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_0)
{



 FUNC_1(&VAR_0->fast_event_count, 0);
 FUNC_3(&VAR_0->hbalock);


 FUNC_3(&VAR_0->ndlp_lock);

 FUNC_0(&VAR_0->port_list);
 FUNC_0(&VAR_0->work_list);
 FUNC_2(&VAR_0->wait_4_mlo_m_q);


 FUNC_2(&VAR_0->work_waitq);


 FUNC_3(&VAR_0->scsi_buf_list_get_lock);
 FUNC_0(&VAR_0->lpfc_scsi_buf_list_get);
 FUNC_3(&VAR_0->scsi_buf_list_put_lock);
 FUNC_0(&VAR_0->lpfc_scsi_buf_list_put);


 FUNC_0(&VAR_0->fabric_iocb_list);


 FUNC_0(&VAR_0->elsbuf);


 FUNC_0(&VAR_0->fcf_conn_rec_list);

 return 0;
}
