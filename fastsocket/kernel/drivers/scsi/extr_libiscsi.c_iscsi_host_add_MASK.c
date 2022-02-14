
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct Scsi_Host {TYPE_1__* transportt; scalar_t__ cmd_per_lun; scalar_t__ can_queue; } ;
struct TYPE_2__ {scalar_t__ eh_timed_out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct Scsi_Host*,struct device*) ;

int FUNC_1(struct Scsi_Host *VAR_3, struct device *VAR_4)
{
 if (!VAR_3->can_queue)
  VAR_3->can_queue = VAR_1;

 if (!VAR_3->cmd_per_lun)
  VAR_3->cmd_per_lun = VAR_0;

 if (!VAR_3->transportt->eh_timed_out)
  VAR_3->transportt->eh_timed_out = VAR_2;
 return FUNC_0(VAR_3, VAR_4);
}
