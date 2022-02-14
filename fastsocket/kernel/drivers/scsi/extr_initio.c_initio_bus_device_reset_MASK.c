
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct target_control {int flags; } ;
struct scsi_ctrl_blk {scalar_t__ target; struct scsi_ctrl_blk* next; int hastat; } ;
struct initio_host {scalar_t__ phase; scalar_t__ addr; struct scsi_ctrl_blk* last_busy; struct scsi_ctrl_blk* first_busy; struct target_control* active_tc; struct scsi_ctrl_blk* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_1 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct initio_host * VAR_9)
{
 struct scsi_ctrl_blk *VAR_10 = VAR_9->active;
 struct target_control *VAR_11 = VAR_9->active_tc;
 struct scsi_ctrl_blk *VAR_12, *VAR_13;
 u8 VAR_14;

 if (VAR_9->phase != VAR_2)
  return FUNC_4(VAR_9);

 FUNC_2(VAR_9, VAR_10);
 FUNC_1(VAR_9, VAR_10);


 VAR_14 = VAR_10->target;
 VAR_11->flags &= ~(VAR_4 | VAR_5 | VAR_3);



 VAR_13 = VAR_12 = VAR_9->first_busy;
 while (VAR_12 != ((void*)0)) {
  if (VAR_12->target == VAR_14) {

   if (VAR_12 == VAR_9->first_busy) {
    if ((VAR_9->first_busy = VAR_12->next) == ((void*)0))
     VAR_9->last_busy = ((void*)0);
   } else {
    VAR_13->next = VAR_12->next;
    if (VAR_12 == VAR_9->last_busy)
     VAR_9->last_busy = VAR_13;
   }
   VAR_12->hastat = VAR_0;
   FUNC_0(VAR_9, VAR_12);
  }

  else {
   VAR_13 = VAR_12;
  }
  VAR_12 = VAR_12->next;
 }
 FUNC_5(VAR_1, VAR_9->addr + VAR_8);
 FUNC_5(VAR_6, VAR_9->addr + VAR_7);
 return FUNC_3(VAR_9);

}
