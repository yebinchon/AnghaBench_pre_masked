
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int buf; } ;
struct mlx4_en_rx_ring {int * rx_info; TYPE_1__ wqres; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_rx_ring *VAR_2, u32 VAR_3, u16 VAR_4)
{
 struct mlx4_en_dev *VAR_5 = VAR_1->mdev;

 FUNC_1(&VAR_2->wqres.buf);
 FUNC_2(VAR_5->dev, &VAR_2->wqres, VAR_3 * VAR_4 + VAR_0);
 FUNC_3(VAR_2->rx_info);
 VAR_2->rx_info = ((void*)0);



}
