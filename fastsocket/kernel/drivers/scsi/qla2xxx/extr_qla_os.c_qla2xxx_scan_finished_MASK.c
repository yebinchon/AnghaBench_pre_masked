
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_5__ {int loop_state; TYPE_1__* hw; int host; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {unsigned long loop_reset_delay; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_2(struct Scsi_Host *VAR_2, unsigned long VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4->host)
  return 1;
 if (VAR_3 > VAR_4->hw->loop_reset_delay * VAR_0)
  return 1;

 return FUNC_0(&VAR_4->loop_state) == VAR_1;
}
