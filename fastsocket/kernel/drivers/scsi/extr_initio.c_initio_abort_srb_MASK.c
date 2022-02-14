
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_ctrl_blk {int flags; scalar_t__ tagmsg; size_t target; struct scsi_ctrl_blk* next; int (* post ) (int *,int *) ;void* hastat; struct scsi_cmnd* srb; } ;
struct scsi_cmnd {int dummy; } ;
struct initio_host {scalar_t__ semaph; int semaph_lock; struct scsi_ctrl_blk* last_busy; struct scsi_ctrl_blk* first_busy; int * act_tags; struct scsi_ctrl_blk* active; struct scsi_ctrl_blk* last_pending; struct scsi_ctrl_blk* first_pending; scalar_t__ addr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct initio_host*) ;

__attribute__((used)) static int FUNC_6(struct initio_host * VAR_8, struct scsi_cmnd *VAR_9)
{
 unsigned long VAR_10;
 struct scsi_ctrl_blk *VAR_11, *VAR_12;

 FUNC_1(&VAR_8->semaph_lock, VAR_10);

 if ((VAR_8->semaph == 0) && (VAR_8->active == ((void*)0))) {

  FUNC_0(0x1F, VAR_8->addr + VAR_7);
  FUNC_2(&VAR_8->semaph_lock, VAR_10);

  FUNC_5(VAR_8);
  FUNC_1(&VAR_8->semaph_lock, VAR_10);
  VAR_8->semaph = 1;
  FUNC_0(0x0F, VAR_8->addr + VAR_7);
  FUNC_2(&VAR_8->semaph_lock, VAR_10);
  return VAR_5;
 }
 VAR_12 = VAR_11 = VAR_8->first_pending;
 while (VAR_11 != ((void*)0)) {

  if (VAR_11->srb == VAR_9) {
   if (VAR_11 == VAR_8->active) {
    FUNC_2(&VAR_8->semaph_lock, VAR_10);
    return VAR_3;
   } else if (VAR_11 == VAR_8->first_pending) {
    if ((VAR_8->first_pending = VAR_11->next) == ((void*)0))
     VAR_8->last_pending = ((void*)0);
   } else {
    VAR_12->next = VAR_11->next;
    if (VAR_11 == VAR_8->last_pending)
     VAR_8->last_pending = VAR_12;
   }
   VAR_11->hastat = VAR_0;
   VAR_11->flags |= VAR_1;
   if (VAR_11->flags & VAR_2)
    (*VAR_11->post) ((u8 *) VAR_8, (u8 *) VAR_11);
   FUNC_2(&VAR_8->semaph_lock, VAR_10);
   return VAR_6;
  }
  VAR_12 = VAR_11;
  VAR_11 = VAR_11->next;
 }

 VAR_12 = VAR_11 = VAR_8->first_busy;
 while (VAR_11 != ((void*)0)) {
  if (VAR_11->srb == VAR_9) {
   if (VAR_11 == VAR_8->active) {
    FUNC_2(&VAR_8->semaph_lock, VAR_10);
    return VAR_3;
   } else if (VAR_11->tagmsg == 0) {
    FUNC_2(&VAR_8->semaph_lock, VAR_10);
    return VAR_3;
   } else {
    VAR_8->act_tags[VAR_11->target]--;
    if (VAR_11 == VAR_8->first_busy) {
     if ((VAR_8->first_busy = VAR_11->next) == ((void*)0))
      VAR_8->last_busy = ((void*)0);
    } else {
     VAR_12->next = VAR_11->next;
     if (VAR_11 == VAR_8->last_busy)
      VAR_8->last_busy = VAR_12;
    }
    VAR_11->next = ((void*)0);


    VAR_11->hastat = VAR_0;
    VAR_11->flags |= VAR_1;
    if (VAR_11->flags & VAR_2)
     (*VAR_11->post) ((u8 *) VAR_8, (u8 *) VAR_11);
    FUNC_2(&VAR_8->semaph_lock, VAR_10);
    return VAR_6;
   }
  }
  VAR_12 = VAR_11;
  VAR_11 = VAR_11->next;
 }
 FUNC_2(&VAR_8->semaph_lock, VAR_10);
 return VAR_4;
}
