
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ timer_active; int timer; scalar_t__ vp_idx; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int *) ;

void
FUNC_1(scsi_qla_host_t *VAR_0)
{
 if (VAR_0->vp_idx && VAR_0->timer_active) {
  FUNC_0(&VAR_0->timer);
  VAR_0->timer_active = 0;
 }
}
