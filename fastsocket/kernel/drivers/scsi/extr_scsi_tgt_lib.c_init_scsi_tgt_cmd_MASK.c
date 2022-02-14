
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct scsi_tgt_queuedata {int cmd_hash_lock; struct list_head* cmd_hash; } ;
struct scsi_tgt_cmd {int hash_list; int work; int * bio; void* tag; void* itn_id; } ;
struct request {TYPE_1__* q; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct scsi_tgt_queuedata* queuedata; } ;


 int FUNC_0 (int *,int ) ;
 size_t FUNC_1 (void*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct request *VAR_1, struct scsi_tgt_cmd *VAR_2,
         u64 VAR_3, u64 VAR_4)
{
 struct scsi_tgt_queuedata *VAR_5 = VAR_1->q->queuedata;
 unsigned long VAR_6;
 struct list_head *VAR_7;

 VAR_2->itn_id = VAR_3;
 VAR_2->tag = VAR_4;
 VAR_2->bio = ((void*)0);
 FUNC_0(&VAR_2->work, VAR_0);
 FUNC_3(&VAR_5->cmd_hash_lock, VAR_6);
 VAR_7 = &VAR_5->cmd_hash[FUNC_1(VAR_4)];
 FUNC_2(&VAR_2->hash_list, VAR_7);
 FUNC_4(&VAR_5->cmd_hash_lock, VAR_6);
}
