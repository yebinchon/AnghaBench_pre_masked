
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lkey; } ;
struct mthca_mr {int mtt; TYPE_2__ ibmr; } ;
struct TYPE_3__ {int num_mpts; } ;
struct mthca_dev {TYPE_1__ limits; } ;


 int FUNC_0 (struct mthca_dev*,int ) ;
 int FUNC_1 (struct mthca_dev*,int *,int) ;
 int FUNC_2 (struct mthca_dev*,int ) ;
 int FUNC_3 (struct mthca_dev*,int ) ;
 int FUNC_4 (struct mthca_dev*,char*,int) ;

void FUNC_5(struct mthca_dev *VAR_0, struct mthca_mr *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, ((void*)0),
         FUNC_0(VAR_0, VAR_1->ibmr.lkey) &
         (VAR_0->limits.num_mpts - 1));
 if (VAR_2)
  FUNC_4(VAR_0, "HW2SW_MPT failed (%d)\n", VAR_2);

 FUNC_3(VAR_0, VAR_1->ibmr.lkey);
 FUNC_2(VAR_0, VAR_1->mtt);
}
