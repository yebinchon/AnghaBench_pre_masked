
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int key; } ;
struct ib_mr {int lkey; int rkey; } ;
struct mlx4_ib_mr {TYPE_2__ mmr; struct ib_mr ibmr; int * umem; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_pd {int device; } ;
struct TYPE_5__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx4_ib_mr*) ;
 struct mlx4_ib_mr* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int ,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 struct mlx4_ib_dev* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct ib_pd*) ;

struct ib_mr *FUNC_8(struct ib_pd *VAR_2,
     int VAR_3)
{
 struct mlx4_ib_dev *VAR_4 = FUNC_6(VAR_2->device);
 struct mlx4_ib_mr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(VAR_4->dev, FUNC_7(VAR_2)->pdn, 0, 0, 0,
       VAR_3, 0, &VAR_5->mmr);
 if (VAR_6)
  goto err_free;

 VAR_6 = FUNC_4(VAR_4->dev, &VAR_5->mmr);
 if (VAR_6)
  goto err_mr;

 VAR_5->ibmr.rkey = VAR_5->ibmr.lkey = VAR_5->mmr.key;
 VAR_5->umem = ((void*)0);

 return &VAR_5->ibmr;

err_mr:
 (void) FUNC_5(VAR_4->dev, &VAR_5->mmr);

err_free:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_6);
}
