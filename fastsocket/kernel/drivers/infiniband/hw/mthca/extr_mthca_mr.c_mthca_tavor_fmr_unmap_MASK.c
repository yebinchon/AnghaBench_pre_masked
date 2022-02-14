
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mpt; } ;
struct TYPE_4__ {TYPE_1__ tavor; } ;
struct mthca_fmr {TYPE_2__ mem; scalar_t__ maps; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(struct mthca_dev *VAR_1, struct mthca_fmr *VAR_2)
{
 if (!VAR_2->maps)
  return;

 VAR_2->maps = 0;

 FUNC_0(VAR_0, VAR_2->mem.tavor.mpt);
}
