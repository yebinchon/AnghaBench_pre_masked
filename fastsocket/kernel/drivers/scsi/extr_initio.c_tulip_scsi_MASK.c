
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int js_period; int flags; int drv_flags; } ;
struct scsi_ctrl_blk {int target; scalar_t__ opcode; int flags; int next_state; int hastat; int srb; scalar_t__ tagmsg; } ;
struct initio_host {int jsstatus0; int phase; int jsint; int scsi_id; scalar_t__ addr; struct target_control* targets; struct scsi_ctrl_blk* active; void* jsstatus1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct initio_host*,int ) ;
 int FUNC_2 (struct initio_host*,struct scsi_ctrl_blk*) ;
 struct scsi_ctrl_blk* FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*) ;
 int FUNC_5 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_6 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_7 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_8 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_9 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_10 (struct initio_host*) ;
 scalar_t__ FUNC_11 (struct initio_host*) ;
 int FUNC_12 (struct initio_host*) ;
 int FUNC_13 (int,scalar_t__) ;
 int FUNC_14 (struct initio_host*) ;

__attribute__((used)) static void FUNC_15(struct initio_host * VAR_22)
{
 struct scsi_ctrl_blk *VAR_23;
 struct target_control *VAR_24;


 if ((VAR_22->jsstatus0 = FUNC_0(VAR_22->addr + VAR_20)) & VAR_12) {
  VAR_22->phase = VAR_22->jsstatus0 & VAR_13;
  VAR_22->jsstatus1 = FUNC_0(VAR_22->addr + VAR_21);
  VAR_22->jsint = FUNC_0(VAR_22->addr + VAR_17);
  if (VAR_22->jsint & VAR_15) {
   FUNC_12(VAR_22);
   return;
  }
  if (VAR_22->jsint & VAR_14) {
   if (FUNC_11(VAR_22) == 0)
    FUNC_4(VAR_22);
   return;
  }
  if (VAR_22->jsint & VAR_16) {
   FUNC_10(VAR_22);
   return;
  }
  if (VAR_22->jsint & VAR_10) {
   FUNC_10(VAR_22);
   return;
  }
  if (VAR_22->jsint & (VAR_11 | VAR_9)) {
   if ((VAR_23 = VAR_22->active) != ((void*)0))
    FUNC_4(VAR_22);
   return;
  }
 }
 if (VAR_22->active != ((void*)0))
  return;

 if ((VAR_23 = FUNC_3(VAR_22)) == ((void*)0))
  return;


 FUNC_13((VAR_22->scsi_id << 4) | (VAR_23->target & 0x0F),
  VAR_22->addr + VAR_19);
 if (VAR_23->opcode == VAR_2) {
  VAR_24 = &VAR_22->targets[VAR_23->target];

  if (VAR_23->tagmsg)
   VAR_24->drv_flags |= VAR_4;
  else
   VAR_24->drv_flags &= ~VAR_4;

  FUNC_13(VAR_24->js_period, VAR_22->addr + VAR_18);
  if ((VAR_24->flags & (VAR_8 | VAR_6)) == 0) {
   FUNC_8(VAR_22, VAR_23);
  } else {
   if ((VAR_24->flags & (VAR_7 | VAR_5)) == 0) {
    FUNC_8(VAR_22, VAR_23);
   } else {
    if (VAR_23->tagmsg)
     FUNC_7(VAR_22, VAR_23);
    else
     FUNC_6(VAR_22, VAR_23);
   }
  }
  if (VAR_23->flags & VAR_3) {
   while (FUNC_14(VAR_22) != -1) {
    if (FUNC_4(VAR_22) == -1)
     break;
   }
  }
 } else if (VAR_23->opcode == VAR_1) {
  FUNC_8(VAR_22, VAR_23);
  VAR_23->next_state = 8;
  if (VAR_23->flags & VAR_3) {
   while (FUNC_14(VAR_22) != -1) {
    if (FUNC_4(VAR_22) == -1)
     break;
   }
  }
 } else if (VAR_23->opcode == VAR_0) {
  if (FUNC_1(VAR_22, VAR_23->srb) != 0) {
   FUNC_9(VAR_22, VAR_23);
   FUNC_5(VAR_22, VAR_23);
  } else {
   VAR_23->opcode = VAR_1;
   FUNC_8(VAR_22, VAR_23);
   VAR_23->next_state = 8;
  }
 } else {
  FUNC_9(VAR_22, VAR_23);
  VAR_23->hastat = 0x16;
  FUNC_2(VAR_22, VAR_23);
 }
 return;
}
