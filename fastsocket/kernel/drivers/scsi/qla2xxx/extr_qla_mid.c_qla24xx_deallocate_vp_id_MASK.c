
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct qla_hw_data {int vport_lock; int vp_idx_map; int num_vhosts; int vport_slock; } ;
struct TYPE_3__ {int vp_idx; int list; int vref_count; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void
FUNC_8(scsi_qla_host_t *VAR_0)
{
 uint16_t VAR_1;
 struct qla_hw_data *VAR_2 = VAR_0->hw;
 unsigned long VAR_3 = 0;

 FUNC_4(&VAR_2->vport_lock);







 FUNC_6(&VAR_2->vport_slock, VAR_3);
 while (FUNC_0(&VAR_0->vref_count)) {
  FUNC_7(&VAR_2->vport_slock, VAR_3);

  FUNC_3(500);

  FUNC_6(&VAR_2->vport_slock, VAR_3);
 }
 FUNC_2(&VAR_0->list);
 FUNC_7(&VAR_2->vport_slock, VAR_3);

 VAR_1 = VAR_0->vp_idx;
 VAR_2->num_vhosts--;
 FUNC_1(VAR_1, VAR_2->vp_idx_map);

 FUNC_5(&VAR_2->vport_lock);
}
