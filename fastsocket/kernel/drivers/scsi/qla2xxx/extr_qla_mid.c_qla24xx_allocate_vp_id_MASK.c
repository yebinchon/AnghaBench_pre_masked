
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct qla_hw_data {scalar_t__ max_npiv_vports; int vport_lock; int vport_slock; int vp_list; int num_vhosts; int vp_idx_map; } ;
struct TYPE_4__ {int list; scalar_t__ vp_idx; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*,int,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static uint32_t
FUNC_8(scsi_qla_host_t *VAR_1)
{
 uint32_t VAR_2;
 struct qla_hw_data *VAR_3 = VAR_1->hw;
 unsigned long VAR_4;


 FUNC_2(&VAR_3->vport_lock);
 VAR_2 = FUNC_0(VAR_3->vp_idx_map, VAR_3->max_npiv_vports + 1);
 if (VAR_2 > VAR_3->max_npiv_vports) {
  FUNC_4(VAR_0, VAR_1, 0xa000,
      "vp_id %d is bigger than max-supported %d.\n",
      VAR_2, VAR_3->max_npiv_vports);
  FUNC_3(&VAR_3->vport_lock);
  return VAR_2;
 }

 FUNC_5(VAR_2, VAR_3->vp_idx_map);
 VAR_3->num_vhosts++;
 VAR_1->vp_idx = VAR_2;

 FUNC_6(&VAR_3->vport_slock, VAR_4);
 FUNC_1(&VAR_1->list, &VAR_3->vp_list);
 FUNC_7(&VAR_3->vport_slock, VAR_4);

 FUNC_3(&VAR_3->vport_lock);
 return VAR_2;
}
