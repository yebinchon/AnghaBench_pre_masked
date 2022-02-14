
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct arm_saved_state {int dummy; } ;
struct TYPE_2__ {struct arm_saved_state* cpu_int_state; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;

struct arm_saved_state *
FUNC_2(
        thread_t VAR_0)
{



 if (VAR_0 != FUNC_0() || FUNC_1()->cpu_int_state == ((void*)0))
  return ((struct arm_saved_state *) ((void*)0));
 else
  return (FUNC_1()->cpu_int_state);

}
