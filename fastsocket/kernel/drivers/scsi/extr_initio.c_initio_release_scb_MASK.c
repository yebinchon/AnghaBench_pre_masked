
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_ctrl_blk {struct scsi_ctrl_blk* next; scalar_t__ status; int * srb; } ;
struct initio_host {int avail_lock; struct scsi_ctrl_blk* last_avail; struct scsi_ctrl_blk* first_avail; } ;


 int FUNC_0 (char*,struct scsi_ctrl_blk*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct initio_host * VAR_0, struct scsi_ctrl_blk * VAR_1)
{
 unsigned long VAR_2;




 FUNC_1(&(VAR_0->avail_lock), VAR_2);
 VAR_1->srb = ((void*)0);
 VAR_1->status = 0;
 VAR_1->next = ((void*)0);
 if (VAR_0->last_avail != ((void*)0)) {
  VAR_0->last_avail->next = VAR_1;
  VAR_0->last_avail = VAR_1;
 } else {
  VAR_0->first_avail = VAR_1;
  VAR_0->last_avail = VAR_1;
 }
 FUNC_2(&(VAR_0->avail_lock), VAR_2);
}
