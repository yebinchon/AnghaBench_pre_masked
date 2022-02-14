
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tgt_cmd {int dummy; } ;
struct scsi_cmnd {struct request* request; } ;
struct request_queue {int queue_lock; } ;
struct request {struct scsi_tgt_cmd* end_io_data; } ;
struct Scsi_Host {int shost_gendev; struct request_queue* uspace_req_q; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (struct Scsi_Host*,struct scsi_cmnd*,int *) ;
 int FUNC_2 (int ,struct scsi_tgt_cmd*) ;
 int VAR_0 ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct Scsi_Host *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct request_queue *VAR_3 = VAR_1->uspace_req_q;
 struct request *VAR_4 = VAR_2->request;
 struct scsi_tgt_cmd *VAR_5 = VAR_4->end_io_data;
 unsigned long VAR_6;

 FUNC_2(VAR_0, VAR_5);

 FUNC_3(VAR_3->queue_lock, VAR_6);
 FUNC_0(VAR_3, VAR_4);
 FUNC_4(VAR_3->queue_lock, VAR_6);

 FUNC_1(VAR_1, VAR_2, &VAR_1->shost_gendev);
}
