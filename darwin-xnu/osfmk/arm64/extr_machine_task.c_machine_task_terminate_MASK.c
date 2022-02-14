
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_3__ {int * task_debug; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;

void
FUNC_1(task_t VAR_1)
{
 if (VAR_1) {
  void *VAR_2;

  VAR_2 = VAR_1->task_debug;
  if (VAR_2 != ((void*)0)) {
   VAR_1->task_debug = ((void*)0);
   FUNC_0(VAR_0, VAR_2);
  }
 }
}
