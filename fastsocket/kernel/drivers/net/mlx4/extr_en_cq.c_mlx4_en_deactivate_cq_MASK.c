
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {TYPE_1__* mdev; } ;
struct mlx4_en_cq {int mcq; int napi; int is_tx; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx4_en_priv *VAR_0, struct mlx4_en_cq *VAR_1)
{
 if (!VAR_1->is_tx) {
  FUNC_1(&VAR_1->napi);
  FUNC_2(&VAR_1->napi);
 }

 FUNC_0(VAR_0->mdev->dev, &VAR_1->mcq);
}
