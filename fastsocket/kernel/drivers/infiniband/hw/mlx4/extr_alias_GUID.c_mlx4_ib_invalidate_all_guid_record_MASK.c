
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


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct mlx4_ib_dev *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned long VAR_4, VAR_5;

 FUNC_3("port %d\n", VAR_2);

 FUNC_5(&VAR_1->sriov.going_down_lock, VAR_4);
 FUNC_5(&VAR_1->sriov.alias_guid.ag_work_lock, VAR_5);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_1, VAR_2, VAR_3);

 if (FUNC_2(VAR_1->dev) && !VAR_1->sriov.is_going_down) {





  FUNC_0(&VAR_1->sriov.alias_guid.
          ports_guid[VAR_2 - 1].alias_guid_work);
  FUNC_4(VAR_1->sriov.alias_guid.ports_guid[VAR_2 - 1].wq,
       &VAR_1->sriov.alias_guid.ports_guid[VAR_2 - 1].alias_guid_work,
       0);
 }
 FUNC_6(&VAR_1->sriov.alias_guid.ag_work_lock, VAR_5);
 FUNC_6(&VAR_1->sriov.going_down_lock, VAR_4);
}
