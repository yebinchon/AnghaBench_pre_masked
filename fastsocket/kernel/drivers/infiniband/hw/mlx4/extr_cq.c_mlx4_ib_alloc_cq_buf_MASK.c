
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct TYPE_12__ {int page_shift; int npages; } ;
struct mlx4_ib_cq_buf {int entry_size; TYPE_5__ buf; int mtt; } ;
struct TYPE_10__ {int cqe_size; } ;
struct TYPE_11__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int,int,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*,int,TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_5__*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mlx4_ib_dev *VAR_1, struct mlx4_ib_cq_buf *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->dev, VAR_3 * VAR_1->dev->caps.cqe_size,
        VAR_0 * 2, &VAR_2->buf);

 if (VAR_4)
  goto out;

 VAR_2->entry_size = VAR_1->dev->caps.cqe_size;
 VAR_4 = FUNC_4(VAR_1->dev, VAR_2->buf.npages, VAR_2->buf.page_shift,
        &VAR_2->mtt);
 if (VAR_4)
  goto err_buf;

 VAR_4 = FUNC_2(VAR_1->dev, &VAR_2->mtt, &VAR_2->buf);
 if (VAR_4)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_3(VAR_1->dev, &VAR_2->mtt);

err_buf:
 FUNC_1(VAR_1->dev, VAR_3 * VAR_2->entry_size, &VAR_2->buf);

out:
 return VAR_4;
}
