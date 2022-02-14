
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_ib_mr {scalar_t__ umem; int mmr; } ;
struct ib_mr {int device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlx4_ib_mr*) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 struct mlx4_ib_mr* FUNC_4 (struct ib_mr*) ;

int FUNC_5(struct ib_mr *VAR_0)
{
 struct mlx4_ib_mr *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(FUNC_3(VAR_0->device)->dev, &VAR_1->mmr);
 if (VAR_2)
  return VAR_2;
 if (VAR_1->umem)
  FUNC_0(VAR_1->umem);
 FUNC_1(VAR_1);

 return 0;
}
