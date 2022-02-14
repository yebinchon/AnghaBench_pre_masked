
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interrupt_source; int interrupts_enabled; void* interrupt_refCon; int interrupt_handler; void* interrupt_target; void* interrupt_nub; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;
typedef int IOInterruptHandler ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

void
FUNC_3(
        void *VAR_3,
        int VAR_4,
        void *VAR_5,
        IOInterruptHandler VAR_6,
        void *VAR_7)
{
 cpu_data_t *VAR_8;
 boolean_t VAR_9;

 VAR_9 = FUNC_2(VAR_0);
 VAR_8 = FUNC_0();

 VAR_8->interrupt_nub = VAR_3;
 VAR_8->interrupt_source = VAR_4;
 VAR_8->interrupt_target = VAR_5;
 VAR_8->interrupt_handler = VAR_6;
 VAR_8->interrupt_refCon = VAR_7;

 VAR_8->interrupts_enabled = VAR_1;
 (void) FUNC_2(VAR_9);

 FUNC_1(((void*)0), VAR_2);
}
