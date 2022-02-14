
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_slave_event_eq {int cons; struct mlx4_eqe* event_eqe; } ;
struct mlx4_eqe {int owner; } ;


 int VAR_0 ;

__attribute__((used)) static struct mlx4_eqe *FUNC_0(struct mlx4_slave_event_eq *VAR_1)
{
 struct mlx4_eqe *VAR_2 =
  &VAR_1->event_eqe[VAR_1->cons & (VAR_0 - 1)];
 return (!!(VAR_2->owner & 0x80) ^
  !!(VAR_1->cons & VAR_0)) ?
  VAR_2 : ((void*)0);
}
