
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {int flag; scalar_t__ throttlequeuedepth; TYPE_1__* host; scalar_t__ max_fw_cmds; scalar_t__ is_imr; int fw_outstanding; scalar_t__ last_time; } ;
struct TYPE_2__ {int host_lock; scalar_t__ can_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

void
FUNC_4(struct megasas_instance *VAR_5)
{
 unsigned long VAR_6;
 if (VAR_5->flag & VAR_1
     && FUNC_3(VAR_4, VAR_5->last_time + 5 * VAR_0)
     && FUNC_0(&VAR_5->fw_outstanding) <
     VAR_5->throttlequeuedepth + 1) {

  FUNC_1(VAR_5->host->host_lock, VAR_6);
  VAR_5->flag &= ~VAR_1;
  if (VAR_5->is_imr) {
   VAR_5->host->can_queue =
    VAR_5->max_fw_cmds - VAR_3;
  } else
   VAR_5->host->can_queue =
    VAR_5->max_fw_cmds - VAR_2;

  FUNC_2(VAR_5->host->host_lock, VAR_6);
 }
}
