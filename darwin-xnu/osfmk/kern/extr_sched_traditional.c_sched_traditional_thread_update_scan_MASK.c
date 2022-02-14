
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int sched_update_scan_context_t ;
typedef TYPE_2__* processor_t ;
typedef int processor_set_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {TYPE_1__* idle_thread; int processor_set; struct TYPE_8__* processor_list; } ;
struct TYPE_7__ {scalar_t__ sched_stamp; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(sched_update_scan_context_t VAR_5)
{
 boolean_t VAR_6 = VAR_0;
 processor_t VAR_7 = VAR_3;
 processor_set_t VAR_8;
 thread_t VAR_9;
 spl_t VAR_10;

 do {
  do {




   VAR_8 = VAR_7->processor_set;

   VAR_10 = FUNC_4();
   FUNC_0(VAR_8);

   VAR_6 = FUNC_3(FUNC_2(VAR_7), VAR_5);

   FUNC_1(VAR_8);
   FUNC_5(VAR_10);

   if (VAR_6)
    break;

   VAR_9 = VAR_7->idle_thread;
   if (VAR_9 != VAR_1 && VAR_9->sched_stamp != VAR_4) {
    if (FUNC_6(VAR_9) == VAR_0) {
     VAR_6 = VAR_2;
     break;
    }
   }
  } while ((VAR_7 = VAR_7->processor_list) != ((void*)0));


  FUNC_7();
 } while (VAR_6);
}
