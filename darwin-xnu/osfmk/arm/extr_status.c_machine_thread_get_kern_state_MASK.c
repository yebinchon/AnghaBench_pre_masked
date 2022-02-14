
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef scalar_t__ thread_state_t ;
typedef int thread_flavor_t ;
struct arm_thread_state {int sp; int * r; int pc; int cpsr; int lr; } ;
struct arm_saved_state {int * r; int cpsr; int pc; int lr; int sp; } ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_2__ {struct arm_saved_state* cpu_int_state; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*,int ,int ,int ) ;

kern_return_t
FUNC_3(
         thread_t VAR_4,
         thread_flavor_t VAR_5,
         thread_state_t VAR_6,
         mach_msg_type_number_t * VAR_7)
{
 if (VAR_4 != FUNC_0() || FUNC_1()->cpu_int_state == ((void*)0))
  return VAR_1;

 switch (VAR_5) {
 case 128:{
   struct arm_thread_state *VAR_8;
   struct arm_saved_state *VAR_9;
   unsigned int VAR_10;
   if (*VAR_7 < VAR_0)
    return (VAR_2);

   VAR_8 = (struct arm_thread_state *) VAR_6;
   VAR_9 = FUNC_1()->cpu_int_state;

   VAR_8->sp = VAR_9->sp;
   VAR_8->lr = VAR_9->lr;
   VAR_8->pc = VAR_9->pc;
   VAR_8->cpsr = VAR_9->cpsr;
   for (VAR_10 = 0; VAR_10 < 13; VAR_10++)
    VAR_8->r[VAR_10] = VAR_9->r[VAR_10];

                                        ;
   *VAR_7 = VAR_0;
   break;
  }
 default:
  return (VAR_2);
 }
 return (VAR_3);
}
