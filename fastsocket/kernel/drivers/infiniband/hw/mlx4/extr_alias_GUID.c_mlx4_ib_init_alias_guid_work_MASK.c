
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ag_work_lock; TYPE_1__* ports_guid; } ;
struct TYPE_6__ {int going_down_lock; TYPE_2__ alias_guid; int is_going_down; } ;
struct mlx4_ib_dev {TYPE_3__ sriov; int dev; } ;
struct TYPE_4__ {int alias_guid_work; int wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mlx4_ib_dev *VAR_0, int VAR_1)
{
 unsigned long VAR_2, VAR_3;

 if (!FUNC_0(VAR_0->dev))
  return;
 FUNC_2(&VAR_0->sriov.going_down_lock, VAR_2);
 FUNC_2(&VAR_0->sriov.alias_guid.ag_work_lock, VAR_3);
 if (!VAR_0->sriov.is_going_down) {
  FUNC_1(VAR_0->sriov.alias_guid.ports_guid[VAR_1].wq,
      &VAR_0->sriov.alias_guid.ports_guid[VAR_1].alias_guid_work, 0);
 }
 FUNC_3(&VAR_0->sriov.alias_guid.ag_work_lock, VAR_3);
 FUNC_3(&VAR_0->sriov.going_down_lock, VAR_2);
}
