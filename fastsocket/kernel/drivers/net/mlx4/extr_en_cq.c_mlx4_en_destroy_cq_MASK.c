
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_7__ {int buf; } ;
struct mlx4_en_cq {int * buf; int buf_size; scalar_t__ vector; TYPE_4__ wqres; } ;
struct TYPE_5__ {scalar_t__ comp_pool; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

void FUNC_3(struct mlx4_en_priv *VAR_0, struct mlx4_en_cq *VAR_1)
{
 struct mlx4_en_dev *VAR_2 = VAR_0->mdev;

 FUNC_0(&VAR_1->wqres.buf);
 FUNC_1(VAR_2->dev, &VAR_1->wqres, VAR_1->buf_size);
 if (VAR_0->mdev->dev->caps.comp_pool && VAR_1->vector)
  FUNC_2(VAR_0->mdev->dev, VAR_1->vector);
 VAR_1->vector = 0;
 VAR_1->buf_size = 0;
 VAR_1->buf = ((void*)0);
}
