
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isci_host {TYPE_1__* smu_registers; } ;
struct TYPE_2__ {int interrupt_mask; int interrupt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static bool FUNC_2(struct isci_host *VAR_2)
{
 u32 VAR_3;

 VAR_3 =
  FUNC_0(&VAR_2->smu_registers->interrupt_status);
 VAR_3 &= (VAR_0 | VAR_1);

 if (VAR_3 != 0) {



  return 1;
 }







 FUNC_1(0xff, &VAR_2->smu_registers->interrupt_mask);
 FUNC_1(0, &VAR_2->smu_registers->interrupt_mask);

 return 0;
}
