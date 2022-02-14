
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx4_sriov_alias_guid_info_rec_det {int dummy; } ;
struct mlx4_next_alias_guid_work {size_t port; int block_num; int rec_det; } ;
struct TYPE_6__ {int ag_work_lock; TYPE_1__* ports_guid; } ;
struct TYPE_7__ {TYPE_2__ alias_guid; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; } ;
struct TYPE_8__ {scalar_t__ status; } ;
struct TYPE_5__ {TYPE_4__* all_rec_per_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_4__*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mlx4_ib_dev *VAR_4, u8 VAR_5,
         struct mlx4_next_alias_guid_work *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_1(&VAR_4->sriov.alias_guid.ag_work_lock, VAR_8);
  if (VAR_4->sriov.alias_guid.ports_guid[VAR_5].all_rec_per_port[VAR_7].status ==
      VAR_1) {
   FUNC_0(&VAR_6->rec_det,
          &VAR_4->sriov.alias_guid.ports_guid[VAR_5].all_rec_per_port[VAR_7],
          sizeof (struct mlx4_sriov_alias_guid_info_rec_det));
   VAR_6->port = VAR_5;
   VAR_6->block_num = VAR_7;
   VAR_4->sriov.alias_guid.ports_guid[VAR_5].all_rec_per_port[VAR_7].status =
    VAR_2;
   FUNC_2(&VAR_4->sriov.alias_guid.ag_work_lock, VAR_8);
   return 0;
  }
  FUNC_2(&VAR_4->sriov.alias_guid.ag_work_lock, VAR_8);
 }
 return -VAR_0;
}
