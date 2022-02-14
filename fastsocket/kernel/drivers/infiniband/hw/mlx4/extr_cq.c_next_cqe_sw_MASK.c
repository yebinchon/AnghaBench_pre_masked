
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cons_index; } ;
struct mlx4_ib_cq {TYPE_1__ mcq; } ;
struct mlx4_cqe {int dummy; } ;


 struct mlx4_cqe* FUNC_0 (struct mlx4_ib_cq*,int ) ;

__attribute__((used)) static struct mlx4_cqe *FUNC_1(struct mlx4_ib_cq *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->mcq.cons_index);
}
