
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct isci_host {TYPE_1__* smu_registers; int scic_lock; } ;
struct TYPE_2__ {int interrupt_coalesce_control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct isci_host*) ;
 int FUNC_3 (struct isci_host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;

void FUNC_7(unsigned long VAR_3)
{
 struct isci_host *VAR_4 = (struct isci_host *)VAR_3;
 u16 VAR_5;

 FUNC_4(&VAR_4->scic_lock);
 FUNC_3(VAR_4);
 FUNC_5(&VAR_4->scic_lock);




 VAR_5 = FUNC_2(VAR_4);
 FUNC_6(FUNC_0(VAR_1, VAR_5) |
        FUNC_0(VAR_2, VAR_0 + FUNC_1(VAR_5)),
        &VAR_4->smu_registers->interrupt_coalesce_control);
}
