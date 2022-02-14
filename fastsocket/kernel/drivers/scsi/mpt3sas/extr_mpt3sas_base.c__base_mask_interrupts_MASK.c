
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct MPT3SAS_ADAPTER {int mask_interrupts; TYPE_1__* chip; } ;
struct TYPE_2__ {int HostInterruptMask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct MPT3SAS_ADAPTER *VAR_3)
{
 u32 VAR_4;

 VAR_3->mask_interrupts = 1;
 VAR_4 = FUNC_0(&VAR_3->chip->HostInterruptMask);
 VAR_4 |= VAR_0 + VAR_2 + VAR_1;
 FUNC_1(VAR_4, &VAR_3->chip->HostInterruptMask);
 FUNC_0(&VAR_3->chip->HostInterruptMask);
}
