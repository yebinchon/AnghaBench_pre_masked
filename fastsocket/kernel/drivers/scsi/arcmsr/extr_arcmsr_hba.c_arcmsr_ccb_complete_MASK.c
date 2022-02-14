
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct CommandControlBlock {int list; int startdone; struct scsi_cmnd* pcmd; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int ccblist_lock; int ccb_free_list; int ccboutstandingcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct CommandControlBlock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct CommandControlBlock *VAR_1)
{
 struct AdapterControlBlock *VAR_2 = VAR_1->acb;
 struct scsi_cmnd *VAR_3 = VAR_1->pcmd;
 unsigned long VAR_4;
 FUNC_1(&VAR_2->ccboutstandingcount);
 FUNC_0(VAR_1);
 VAR_1->startdone = VAR_0;
 FUNC_3(&VAR_2->ccblist_lock, VAR_4);
 FUNC_2(&VAR_1->list, &VAR_2->ccb_free_list);
 FUNC_4(&VAR_2->ccblist_lock, VAR_4);
 VAR_3->scsi_done(VAR_3);
}
