
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_17__ {int specFlags; } ;
struct TYPE_18__ {scalar_t__ kernel_stack; scalar_t__ reserved_stack; TYPE_1__ machine; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;

void
FUNC_9(thread_t VAR_1,
       thread_t VAR_2)
{
 vm_offset_t VAR_3;

 FUNC_1(VAR_2);
 FUNC_1(VAR_1);

 FUNC_4(VAR_1);

 VAR_3 = VAR_1->kernel_stack;
 if (VAR_3 == VAR_1->reserved_stack) {
  FUNC_1(VAR_2->reserved_stack);
  VAR_1->reserved_stack = VAR_2->reserved_stack;
  VAR_2->reserved_stack = VAR_3;
 }
 VAR_1->kernel_stack = 0;




 VAR_2->kernel_stack = VAR_3;

 FUNC_3(VAR_1, VAR_2);

 VAR_1->machine.specFlags &= ~VAR_0;
 VAR_2->machine.specFlags |= VAR_0;

 FUNC_7(VAR_1, VAR_2, FUNC_2());
 FUNC_0(VAR_1, VAR_2);





 FUNC_5(VAR_2);
 FUNC_8(VAR_2);

 return;
}
