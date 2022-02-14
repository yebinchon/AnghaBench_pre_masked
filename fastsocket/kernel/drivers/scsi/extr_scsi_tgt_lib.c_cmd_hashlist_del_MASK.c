
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_tgt_queuedata {int cmd_hash_lock; } ;
struct scsi_tgt_cmd {int hash_list; } ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct request_queue {struct scsi_tgt_queuedata* queuedata; } ;
struct TYPE_2__ {struct scsi_tgt_cmd* end_io_data; struct request_queue* q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->request->q;
 struct scsi_tgt_queuedata *VAR_2 = VAR_1->queuedata;
 unsigned long VAR_3;
 struct scsi_tgt_cmd *VAR_4 = VAR_0->request->end_io_data;

 FUNC_1(&VAR_2->cmd_hash_lock, VAR_3);
 FUNC_0(&VAR_4->hash_list);
 FUNC_2(&VAR_2->cmd_hash_lock, VAR_3);
}
