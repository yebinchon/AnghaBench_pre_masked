
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fr_mr; int lkey; struct ocrdma_dev* dev; } ;
struct ocrdma_mr {scalar_t__ umem; TYPE_1__ hwmr; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_mr {int dummy; } ;


 struct ocrdma_mr* FUNC_0 (struct ib_mr*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ocrdma_mr*) ;
 int FUNC_3 (struct ocrdma_dev*,TYPE_1__*) ;
 int FUNC_4 (struct ocrdma_dev*,scalar_t__,int ) ;

int FUNC_5(struct ib_mr *VAR_0)
{
 struct ocrdma_mr *VAR_1 = FUNC_0(VAR_0);
 struct ocrdma_dev *VAR_2 = VAR_1->hwmr.dev;
 int VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_1->hwmr.fr_mr, VAR_1->hwmr.lkey);

 if (VAR_1->hwmr.fr_mr == 0)
  FUNC_3(VAR_2, &VAR_1->hwmr);


 if (VAR_1->umem)
  FUNC_1(VAR_1->umem);
 FUNC_2(VAR_1);
 return VAR_3;
}
