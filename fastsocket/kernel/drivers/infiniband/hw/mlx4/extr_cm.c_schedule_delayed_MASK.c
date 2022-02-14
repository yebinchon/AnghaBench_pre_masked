
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_sriov {int id_map_lock; int going_down_lock; int is_going_down; } ;
struct id_map_entry {int scheduled_delete; int timeout; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct mlx4_ib_sriov sriov; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static void FUNC_6(struct ib_device *VAR_1, struct id_map_entry *VAR_2)
{
 struct mlx4_ib_sriov *VAR_3 = &FUNC_5(VAR_1)->sriov;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->id_map_lock);
 FUNC_2(&VAR_3->going_down_lock, VAR_4);

 if (!VAR_3->is_going_down) {
  VAR_2->scheduled_delete = 1;
  FUNC_0(&VAR_2->timeout, VAR_0);
 }
 FUNC_4(&VAR_3->going_down_lock, VAR_4);
 FUNC_3(&VAR_3->id_map_lock);
}
