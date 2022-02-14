
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ mpt; } ;
struct TYPE_4__ {TYPE_1__ arbel; } ;
struct mthca_fmr {TYPE_2__ mem; scalar_t__ maps; } ;
struct mthca_dev {int dummy; } ;


 int VAR_0 ;

void FUNC_0(struct mthca_dev *VAR_1, struct mthca_fmr *VAR_2)
{
 if (!VAR_2->maps)
  return;

 VAR_2->maps = 0;

 *(u8 *) VAR_2->mem.arbel.mpt = VAR_0;
}
