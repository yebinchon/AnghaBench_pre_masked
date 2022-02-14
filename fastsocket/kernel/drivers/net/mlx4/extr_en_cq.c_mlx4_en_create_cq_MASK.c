
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_3__* dev; } ;
struct TYPE_9__ {scalar_t__ buf; } ;
struct TYPE_12__ {TYPE_2__ direct; } ;
struct TYPE_11__ {TYPE_5__ buf; } ;
struct mlx4_en_cq {int size; int buf_size; int ring; int is_tx; TYPE_4__ wqres; struct mlx4_cqe* buf; int lock; } ;
struct mlx4_cqe {int dummy; } ;
typedef enum cq_type { ____Placeholder_cq_type } cq_type ;
struct TYPE_8__ {int cqe_size; } ;
struct TYPE_10__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_cq *VAR_2,
        int VAR_3, int VAR_4, enum cq_type VAR_5)
{
 struct mlx4_en_dev *VAR_6 = VAR_1->mdev;
 int VAR_7;

 VAR_2->size = VAR_3;
 VAR_2->buf_size = VAR_2->size * VAR_6->dev->caps.cqe_size;

 VAR_2->ring = VAR_4;
 VAR_2->is_tx = VAR_5;
 FUNC_3(&VAR_2->lock);

 VAR_7 = FUNC_0(VAR_6->dev, &VAR_2->wqres,
    VAR_2->buf_size, 2 * VAR_0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(&VAR_2->wqres.buf);
 if (VAR_7)
  FUNC_2(VAR_6->dev, &VAR_2->wqres, VAR_2->buf_size);
 else
  VAR_2->buf = (struct mlx4_cqe *) VAR_2->wqres.buf.direct.buf;

 return VAR_7;
}
