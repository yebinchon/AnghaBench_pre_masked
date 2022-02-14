
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isci_host {int scic_lock; TYPE_1__* smu_registers; int flags; } ;
struct TYPE_2__ {int interrupt_mask; int interrupt_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct isci_host*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static bool FUNC_5(struct isci_host *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 1;





 FUNC_4(VAR_1, &VAR_2->smu_registers->interrupt_status);







 FUNC_1(&VAR_2->scic_lock);
 if (FUNC_3(VAR_0, &VAR_2->flags)) {
  FUNC_4(0xFF000000, &VAR_2->smu_registers->interrupt_mask);
  FUNC_4(0, &VAR_2->smu_registers->interrupt_mask);
 }
 FUNC_2(&VAR_2->scic_lock);

 return 0;
}
