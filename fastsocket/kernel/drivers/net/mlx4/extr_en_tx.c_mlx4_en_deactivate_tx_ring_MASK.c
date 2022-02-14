
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {int qp; int qp_state; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int *,int ,int ,int *) ;

void FUNC_1(struct mlx4_en_priv *VAR_1,
    struct mlx4_en_tx_ring *VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1->mdev;

 FUNC_0(VAR_3->dev, ((void*)0), VAR_2->qp_state,
         VAR_0, ((void*)0), 0, 0, &VAR_2->qp);
}
