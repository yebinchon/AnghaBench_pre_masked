
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tgt_queuedata {int cmd_hash_lock; int * cmd_hash; struct Scsi_Host* shost; } ;
struct request_queue {int nr_requests; struct scsi_tgt_queuedata* queuedata; } ;
struct Scsi_Host {struct request_queue* uspace_req_q; int can_queue; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct request_queue* FUNC_2 (struct Scsi_Host*,int *) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,int ) ;
 struct scsi_tgt_queuedata* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct Scsi_Host *VAR_2)
{
 struct scsi_tgt_queuedata *VAR_3;
 struct request_queue *VAR_4;
 int VAR_5, VAR_6;





 VAR_4 = FUNC_2(VAR_2, ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_5(sizeof(*VAR_3), VAR_1);
 if (!VAR_3) {
  VAR_5 = -VAR_0;
  goto cleanup_queue;
 }
 VAR_3->shost = VAR_2;
 VAR_4->queuedata = VAR_3;






 VAR_4->nr_requests = VAR_2->can_queue;





 FUNC_4(VAR_4, 0);
 VAR_2->uspace_req_q = VAR_4;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3->cmd_hash); VAR_6++)
  FUNC_1(&VAR_3->cmd_hash[VAR_6]);
 FUNC_6(&VAR_3->cmd_hash_lock);

 return 0;

cleanup_queue:
 FUNC_3(VAR_4);
 return VAR_5;
}
