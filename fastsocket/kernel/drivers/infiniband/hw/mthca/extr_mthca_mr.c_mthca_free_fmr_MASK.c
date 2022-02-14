
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lkey; } ;
struct mthca_fmr {int mtt; TYPE_1__ ibmr; scalar_t__ maps; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mthca_dev*,int ) ;
 int FUNC_1 (struct mthca_dev*,int ) ;

int FUNC_2(struct mthca_dev *VAR_1, struct mthca_fmr *VAR_2)
{
 if (VAR_2->maps)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_2->ibmr.lkey);
 FUNC_0(VAR_1, VAR_2->mtt);

 return 0;
}
