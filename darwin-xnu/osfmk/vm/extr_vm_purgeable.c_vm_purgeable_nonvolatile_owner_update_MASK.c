
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_3__ {int task_nonvolatile_objects; } ;


 int FUNC_0 (int,int*) ;
 int FUNC_1 (int) ;

void
FUNC_2(
 task_t VAR_0,
 int VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == 0) {
  return;
 }

 if (VAR_1 > 0) {
  FUNC_1(VAR_0->task_nonvolatile_objects >= 0);
  FUNC_0(VAR_1, &VAR_0->task_nonvolatile_objects);
  FUNC_1(VAR_0->task_nonvolatile_objects > 0);
 } else {
  FUNC_1(VAR_0->task_nonvolatile_objects > VAR_1);
  FUNC_0(VAR_1, &VAR_0->task_nonvolatile_objects);
  FUNC_1(VAR_0->task_nonvolatile_objects >= 0);
 }
}
