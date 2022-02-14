
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_control {int flags; int sconfig0; scalar_t__ js_period; } ;
struct scsi_ctrl_blk {int hastat; } ;
struct initio_host {int max_tar; struct target_control* targets; scalar_t__* act_tags; int sconf1; scalar_t__ flags; int * active_tc; int * active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct initio_host*,struct scsi_ctrl_blk*) ;
 struct scsi_ctrl_blk* FUNC_1 (struct initio_host*) ;

__attribute__((used)) static int FUNC_2(struct initio_host * VAR_4)
{
 struct scsi_ctrl_blk *VAR_5;
 struct target_control *VAR_6;
 int VAR_7;

 VAR_4->active = ((void*)0);
 VAR_4->active_tc = ((void*)0);
 VAR_4->flags = 0;

 while ((VAR_5 = FUNC_1(VAR_4)) != ((void*)0)) {
  VAR_5->hastat = VAR_0;
  FUNC_0(VAR_4, VAR_5);
 }

 VAR_6 = &VAR_4->targets[0];
 for (VAR_7 = 0; VAR_7 < VAR_4->max_tar; VAR_6++, VAR_7++) {
  VAR_6->flags &= ~(VAR_2 | VAR_3);

  VAR_6->js_period = 0;
  VAR_6->sconfig0 = VAR_4->sconf1;
  VAR_4->act_tags[0] = 0;
  VAR_4->targets[VAR_7].flags &= ~VAR_1;
 }

 return -1;
}
