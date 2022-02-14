
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reset_active; scalar_t__ online; } ;
struct TYPE_5__ {int marker_needed; int dpc_flags; int loop_down_timer; TYPE_1__ flags; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(scsi_qla_host_t *VAR_2)
{
 if (VAR_2->flags.online && !VAR_2->flags.reset_active &&
     !FUNC_0(&VAR_2->loop_down_timer) &&
     !(FUNC_2(VAR_0, &VAR_2->dpc_flags))) {
  do {
   FUNC_1(VAR_1, &VAR_2->dpc_flags);





   VAR_2->marker_needed = 1;
  } while (!FUNC_0(&VAR_2->loop_down_timer) &&
      (FUNC_2(VAR_1, &VAR_2->dpc_flags)));
 }
}
