
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int js_period; } ;
struct scsi_ctrl_blk {int flags; int hastat; } ;
struct initio_host {scalar_t__ phase; scalar_t__ addr; struct target_control* active_tc; struct scsi_ctrl_blk* active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct initio_host*) ;

int FUNC_3(struct initio_host * VAR_13)
{
 struct scsi_ctrl_blk *VAR_14 = VAR_13->active;
 struct target_control *VAR_15 = VAR_13->active_tc;

 if ((VAR_14->flags & VAR_2) != VAR_3)
  VAR_14->hastat = VAR_1;
 for (;;) {
  if (VAR_15->js_period & VAR_6)
   FUNC_1(2, VAR_13->addr + VAR_9);
  else
   FUNC_1(1, VAR_13->addr + VAR_9);

  FUNC_0(0, VAR_13->addr + VAR_12);
  FUNC_0(VAR_7, VAR_13->addr + VAR_8);
  if ((FUNC_2(VAR_13)) == -1)
   return -1;
  if (VAR_13->phase != VAR_0) {
   FUNC_0(VAR_5, VAR_13->addr + VAR_11);
   FUNC_0(VAR_4, VAR_13->addr + VAR_10);
   return 6;
  }
 }
}
