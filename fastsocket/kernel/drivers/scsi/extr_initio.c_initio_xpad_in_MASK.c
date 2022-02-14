
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
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct initio_host*) ;

int FUNC_4(struct initio_host * VAR_11)
{
 struct scsi_ctrl_blk *VAR_12 = VAR_11->active;
 struct target_control *VAR_13 = VAR_11->active_tc;

 if ((VAR_12->flags & VAR_2) != VAR_3)
  VAR_12->hastat = VAR_1;
 for (;;) {
  if (VAR_13->js_period & VAR_5)
   FUNC_2(2, VAR_11->addr + VAR_8);
  else
   FUNC_2(1, VAR_11->addr + VAR_8);

  FUNC_1(VAR_6, VAR_11->addr + VAR_7);
  if (FUNC_3(VAR_11) == -1)
   return -1;
  if (VAR_11->phase != VAR_0) {
   FUNC_1(VAR_4, VAR_11->addr + VAR_9);
   return 6;
  }
  FUNC_0(VAR_11->addr + VAR_10);
 }
}
