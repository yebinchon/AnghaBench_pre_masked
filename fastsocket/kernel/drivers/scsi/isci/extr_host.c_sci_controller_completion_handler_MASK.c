
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_host {TYPE_1__* smu_registers; } ;
struct TYPE_2__ {int interrupt_mask; int interrupt_status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isci_host*) ;
 int FUNC_1 (struct isci_host*) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct isci_host *VAR_1)
{

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1);


 FUNC_2(VAR_0, &VAR_1->smu_registers->interrupt_status);

 FUNC_2(0xFF000000, &VAR_1->smu_registers->interrupt_mask);
 FUNC_2(0, &VAR_1->smu_registers->interrupt_mask);
}
