
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int key; } ;
struct TYPE_7__ {TYPE_2__ mr; } ;
struct ib_fmr {int lkey; int rkey; } ;
struct mlx4_ib_fmr {TYPE_3__ mfmr; struct ib_fmr ibfmr; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_pd {int device; } ;
struct ib_fmr_attr {int page_shift; int max_maps; int max_pages; } ;
struct TYPE_5__ {int pdn; } ;


 int VAR_0 ;
 struct ib_fmr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_ib_fmr*) ;
 struct mlx4_ib_fmr* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_2__*) ;
 struct mlx4_ib_dev* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (struct ib_pd*) ;

struct ib_fmr *FUNC_9(struct ib_pd *VAR_2, int VAR_3,
     struct ib_fmr_attr *VAR_4)
{
 struct mlx4_ib_dev *VAR_5 = FUNC_7(VAR_2->device);
 struct mlx4_ib_fmr *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_3(sizeof *VAR_6, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(VAR_5->dev, FUNC_8(VAR_2)->pdn, FUNC_1(VAR_3),
        VAR_4->max_pages, VAR_4->max_maps,
        VAR_4->page_shift, &VAR_6->mfmr);
 if (VAR_7)
  goto err_free;

 VAR_7 = FUNC_5(FUNC_7(VAR_2->device)->dev, &VAR_6->mfmr);
 if (VAR_7)
  goto err_mr;

 VAR_6->ibfmr.rkey = VAR_6->ibfmr.lkey = VAR_6->mfmr.mr.key;

 return &VAR_6->ibfmr;

err_mr:
 (void) FUNC_6(FUNC_7(VAR_2->device)->dev, &VAR_6->mfmr.mr);

err_free:
 FUNC_2(VAR_6);

 return FUNC_0(VAR_7);
}
