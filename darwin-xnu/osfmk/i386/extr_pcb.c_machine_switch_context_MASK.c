
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* thread_t ;
typedef int thread_continue_t ;
struct TYPE_20__ {int specFlags; } ;
struct TYPE_21__ {scalar_t__ kernel_stack; TYPE_1__ machine; } ;
struct TYPE_19__ {scalar_t__ cpu_active_stack; } ;


 int VAR_0 ;
 int FUNC_0 (int ,long,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 TYPE_13__* FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_2__*,int ) ;

thread_t
FUNC_12(
 thread_t VAR_4,
 thread_continue_t VAR_5,
 thread_t VAR_6)
{
 FUNC_4(FUNC_6()->cpu_active_stack == VAR_4->kernel_stack);
 FUNC_8(VAR_4, VAR_6);

 VAR_4->machine.specFlags &= ~VAR_2;
 VAR_6->machine.specFlags |= VAR_2;





 vm_offset_t VAR_7 = FUNC_7();
 if (VAR_7 > VAR_3) {
  VAR_3 = VAR_7;
  FUNC_0(
   FUNC_1(VAR_0, VAR_1),
   (long) VAR_7, 0, 0, 0, 0);
 }





 FUNC_11(VAR_4, VAR_6, FUNC_5());




 FUNC_3(VAR_4, VAR_6);





 return(FUNC_2(VAR_4, VAR_5, VAR_6));
}
