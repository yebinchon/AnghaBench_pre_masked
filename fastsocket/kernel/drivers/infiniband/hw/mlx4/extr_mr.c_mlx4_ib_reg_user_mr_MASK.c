
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_14__ {int key; int mtt; } ;
struct ib_mr {int lkey; int rkey; } ;
struct mlx4_ib_mr {TYPE_6__* umem; TYPE_3__ mmr; struct ib_mr ibmr; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; TYPE_1__* uobject; } ;
struct TYPE_15__ {int page_size; } ;
struct TYPE_13__ {int pdn; } ;
struct TYPE_12__ {int context; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int) ;
 TYPE_6__* FUNC_4 (int ,int ,int ,int,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlx4_ib_mr*) ;
 struct mlx4_ib_mr* FUNC_9 (int,int ) ;
 int FUNC_10 (struct mlx4_ib_dev*,int *,TYPE_6__*) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int,int,TYPE_3__*) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (int ,TYPE_3__*) ;
 struct mlx4_ib_dev* FUNC_14 (int ) ;
 TYPE_2__* FUNC_15 (struct ib_pd*) ;

struct ib_mr *FUNC_16(struct ib_pd *VAR_2, u64 VAR_3, u64 VAR_4,
      u64 VAR_5, int VAR_6,
      struct ib_udata *VAR_7)
{
 struct mlx4_ib_dev *VAR_8 = FUNC_14(VAR_2->device);
 struct mlx4_ib_mr *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_9(sizeof *VAR_9, VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 VAR_9->umem = FUNC_4(VAR_2->uobject->context, VAR_3, VAR_4,
          VAR_6, 0);
 if (FUNC_1(VAR_9->umem)) {
  VAR_11 = FUNC_2(VAR_9->umem);
  goto err_free;
 }

 VAR_12 = FUNC_5(VAR_9->umem);
 VAR_10 = FUNC_7(VAR_9->umem->page_size);

 VAR_11 = FUNC_11(VAR_8->dev, FUNC_15(VAR_2)->pdn, VAR_5, VAR_4,
       FUNC_3(VAR_6), VAR_12, VAR_10, &VAR_9->mmr);
 if (VAR_11)
  goto err_umem;

 VAR_11 = FUNC_10(VAR_8, &VAR_9->mmr.mtt, VAR_9->umem);
 if (VAR_11)
  goto err_mr;

 VAR_11 = FUNC_12(VAR_8->dev, &VAR_9->mmr);
 if (VAR_11)
  goto err_mr;

 VAR_9->ibmr.rkey = VAR_9->ibmr.lkey = VAR_9->mmr.key;

 return &VAR_9->ibmr;

err_mr:
 (void) FUNC_13(FUNC_14(VAR_2->device)->dev, &VAR_9->mmr);

err_umem:
 FUNC_6(VAR_9->umem);

err_free:
 FUNC_8(VAR_9);

 return FUNC_0(VAR_11);
}
