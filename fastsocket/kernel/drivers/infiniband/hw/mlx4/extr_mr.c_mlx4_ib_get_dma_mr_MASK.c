
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int key; } ;
struct ib_mr {int lkey; int rkey; } ;
struct mlx4_ib_mr {TYPE_3__ mmr; struct ib_mr ibmr; int * umem; } ;
struct ib_pd {int device; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int pdn; } ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_ib_mr*) ;
 struct mlx4_ib_mr* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,unsigned long long,int ,int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (struct ib_pd*) ;

struct ib_mr *FUNC_9(struct ib_pd *VAR_2, int VAR_3)
{
 struct mlx4_ib_mr *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(FUNC_7(VAR_2->device)->dev, FUNC_8(VAR_2)->pdn, 0,
       ~0ull, FUNC_1(VAR_3), 0, 0, &VAR_4->mmr);
 if (VAR_5)
  goto err_free;

 VAR_5 = FUNC_5(FUNC_7(VAR_2->device)->dev, &VAR_4->mmr);
 if (VAR_5)
  goto err_mr;

 VAR_4->ibmr.rkey = VAR_4->ibmr.lkey = VAR_4->mmr.key;
 VAR_4->umem = ((void*)0);

 return &VAR_4->ibmr;

err_mr:
 (void) FUNC_6(FUNC_7(VAR_2->device)->dev, &VAR_4->mmr);

err_free:
 FUNC_2(VAR_4);

 return FUNC_0(VAR_5);
}
