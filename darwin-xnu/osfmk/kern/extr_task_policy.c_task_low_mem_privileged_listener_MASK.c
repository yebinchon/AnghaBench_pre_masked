
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ low_mem_privileged_listener; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(task_t VAR_0, boolean_t VAR_1, boolean_t *VAR_2)
{
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = (boolean_t)VAR_0->low_mem_privileged_listener;
 } else {
  FUNC_0(VAR_0);
  VAR_0->low_mem_privileged_listener = (uint32_t)VAR_1;
  FUNC_1(VAR_0);
 }

 return 0;
}
