
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct qla_hw_data {int current_topology; int vport_lock; int pdev; } ;
struct TYPE_6__ {int vp_idx; int fc_vport; int vp_err_state; int loop_state; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*,int,char*,int ) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(scsi_qla_host_t *VAR_8)
{
 int VAR_9;
 struct qla_hw_data *VAR_10 = VAR_8->hw;
 scsi_qla_host_t *VAR_11 = FUNC_4(VAR_10->pdev);


 if (FUNC_0(&VAR_11->loop_state) == VAR_4 ||
  FUNC_0(&VAR_11->loop_state) == VAR_3 ||
  !(VAR_10->current_topology & VAR_2)) {
  VAR_8->vp_err_state = VAR_6;
  FUNC_1(VAR_8->fc_vport, VAR_1);
  goto enable_failed;
 }


 FUNC_2(&VAR_10->vport_lock);
 VAR_9 = FUNC_6(VAR_8);
 FUNC_3(&VAR_10->vport_lock);

 if (VAR_9 != VAR_5) {
  FUNC_1(VAR_8->fc_vport, VAR_0);
  goto enable_failed;
 }

 FUNC_5(VAR_7, VAR_8, 0x801a,
     "Virtual port with id: %d - Enabled.\n", VAR_8->vp_idx);
 return 0;

enable_failed:
 FUNC_5(VAR_7, VAR_8, 0x801b,
     "Virtual port with id: %d - Disabled.\n", VAR_8->vp_idx);
 return 1;
}
