
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf; } ;
struct mlx4_en_tx_ring {int * tx_info; int * bounce_buf; int buf_size; TYPE_1__ wqres; int qp; int bf; scalar_t__ bf_enabled; int qpn; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_tx_ring *VAR_2)
{
 struct mlx4_en_dev *VAR_3 = VAR_1->mdev;
 FUNC_0(VAR_0, VAR_1, "Destroying tx ring, qpn: %d\n", VAR_2->qpn);

 if (VAR_2->bf_enabled)
  FUNC_2(VAR_3->dev, &VAR_2->bf);
 FUNC_6(VAR_3->dev, &VAR_2->qp);
 FUNC_5(VAR_3->dev, &VAR_2->qp);
 FUNC_3(&VAR_2->wqres.buf);
 FUNC_4(VAR_3->dev, &VAR_2->wqres, VAR_2->buf_size);
 FUNC_1(VAR_2->bounce_buf);
 VAR_2->bounce_buf = ((void*)0);
 FUNC_7(VAR_2->tx_info);
 VAR_2->tx_info = ((void*)0);
}
