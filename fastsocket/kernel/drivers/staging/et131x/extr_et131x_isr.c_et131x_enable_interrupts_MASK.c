
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct et131x_adapter {scalar_t__ FlowControl; TYPE_2__* regs; int CachedMaskValue; scalar_t__ DriverNoPhyAccess; } ;
struct TYPE_3__ {int int_mask; } ;
struct TYPE_4__ {TYPE_1__ global; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct et131x_adapter *VAR_5)
{
 u32 VAR_6;


 if (VAR_5->FlowControl == VAR_4 || VAR_5->FlowControl == VAR_0)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_3;

 if (VAR_5->DriverNoPhyAccess)
  VAR_6 |= VAR_1;

 VAR_5->CachedMaskValue = VAR_6;
 FUNC_0(VAR_6, &VAR_5->regs->global.int_mask);
}
