
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
struct TYPE_7__ {int * cpu_user_debug; } ;
struct TYPE_5__ {int * DebugData; } ;
struct TYPE_6__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3(
         thread_t VAR_1)
{

        if (VAR_1->machine.DebugData != ((void*)0)) {
  if (VAR_1->machine.DebugData == FUNC_1()->cpu_user_debug)
   FUNC_0(((void*)0));
  FUNC_2(VAR_0, VAR_1->machine.DebugData);
 }
}
