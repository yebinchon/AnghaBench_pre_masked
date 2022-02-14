
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct MPT2SAS_ADAPTER {scalar_t__ mask_interrupts; TYPE_1__* chip; } ;
struct TYPE_2__ {int HostInterruptMask; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct MPT2SAS_ADAPTER *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(&VAR_1->chip->HostInterruptMask);
 VAR_2 &= ~VAR_0;
 FUNC_1(VAR_2, &VAR_1->chip->HostInterruptMask);
 VAR_1->mask_interrupts = 0;
}
