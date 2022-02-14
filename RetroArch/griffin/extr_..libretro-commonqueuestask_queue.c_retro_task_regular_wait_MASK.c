
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ (* retro_task_condition_fn_t ) (void*) ;
struct TYPE_2__ {scalar_t__ front; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(retro_task_condition_fn_t VAR_1, void* VAR_2)
{
   while (VAR_0.front && (!VAR_1 || VAR_1(VAR_2)))
      FUNC_0();
}
