
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef TYPE_3__* thread_call_group_t ;
struct TYPE_9__ {int active_count; int blocked_count; int pending_count; } ;
struct TYPE_7__ {TYPE_3__* thc_group; } ;
struct TYPE_8__ {TYPE_1__ thc_state; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(
  int VAR_2,
  thread_t VAR_3)
{
 thread_call_group_t VAR_4;

 VAR_4 = VAR_3->thc_state.thc_group;
 FUNC_0((VAR_4 - &VAR_1[0]) < VAR_0);

 FUNC_1();

 switch (VAR_2) {

  case 129:
   FUNC_0(VAR_4->active_count);
   --VAR_4->active_count;
   VAR_4->blocked_count++;
   if (VAR_4->pending_count > 0)
    FUNC_3(VAR_4);
   break;

  case 128:
   FUNC_0(VAR_4->blocked_count);
   --VAR_4->blocked_count;
   VAR_4->active_count++;
   break;
 }

 FUNC_2();
}
