
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ management_server_logged_in; } ;
struct TYPE_7__ {int fc_vport; TYPE_1__ flags; int vp_state; int loop_down_timer; int loop_state; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int
FUNC_4(scsi_qla_host_t *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_5);
 FUNC_0(&VAR_7->loop_state, VAR_2);
 FUNC_0(&VAR_7->loop_down_timer, VAR_3);

 FUNC_3(VAR_7);
 FUNC_0(&VAR_7->vp_state, VAR_6);
 VAR_7->flags.management_server_logged_in = 0;
 if (VAR_8 == VAR_4) {
  FUNC_1(VAR_7->fc_vport, VAR_0);
 } else {
  FUNC_1(VAR_7->fc_vport, VAR_1);
  return -1;
 }
 return 0;
}
