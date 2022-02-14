
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_ctrl_blk {scalar_t__ opcode; scalar_t__ tagmsg; size_t target; struct scsi_ctrl_blk* next; } ;
struct initio_host {scalar_t__* act_tags; scalar_t__* max_tags; TYPE_1__* targets; struct scsi_ctrl_blk* first_pending; } ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct scsi_ctrl_blk *FUNC_0(struct initio_host * VAR_2)
{
 struct scsi_ctrl_blk *VAR_3;


 VAR_3 = VAR_2->first_pending;
 while (VAR_3 != ((void*)0)) {
  if (VAR_3->opcode != VAR_0)
   return VAR_3;
  if (VAR_3->tagmsg == 0) {
   if ((VAR_2->act_tags[VAR_3->target] == 0) &&
       !(VAR_2->targets[VAR_3->target].flags & VAR_1))
    return VAR_3;
  } else {
   if ((VAR_2->act_tags[VAR_3->target] >=
     VAR_2->max_tags[VAR_3->target]) |
       (VAR_2->targets[VAR_3->target].flags & VAR_1)) {
    VAR_3 = VAR_3->next;
    continue;
   }
   return VAR_3;
  }
  VAR_3 = VAR_3->next;
 }
 return VAR_3;
}
