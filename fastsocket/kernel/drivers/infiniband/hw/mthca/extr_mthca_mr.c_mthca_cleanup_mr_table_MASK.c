
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mpt_base; scalar_t__ mtt_base; int mtt_buddy; } ;
struct TYPE_6__ {int mpt_alloc; TYPE_2__ tavor_fmr; int mtt_buddy; } ;
struct TYPE_4__ {scalar_t__ fmr_reserved_mtts; } ;
struct mthca_dev {TYPE_3__ mr_table; TYPE_1__ limits; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mthca_dev *VAR_0)
{

 if (VAR_0->limits.fmr_reserved_mtts)
  FUNC_2(&VAR_0->mr_table.tavor_fmr.mtt_buddy);

 FUNC_2(&VAR_0->mr_table.mtt_buddy);

 if (VAR_0->mr_table.tavor_fmr.mtt_base)
  FUNC_0(VAR_0->mr_table.tavor_fmr.mtt_base);
 if (VAR_0->mr_table.tavor_fmr.mpt_base)
  FUNC_0(VAR_0->mr_table.tavor_fmr.mpt_base);

 FUNC_1(&VAR_0->mr_table.mpt_alloc);
}
