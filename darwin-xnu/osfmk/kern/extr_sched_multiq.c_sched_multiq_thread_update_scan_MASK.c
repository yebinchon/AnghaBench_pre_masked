
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int sched_update_scan_context_t ;
typedef TYPE_2__* processor_t ;
typedef TYPE_3__* processor_set_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int pset_runq; struct TYPE_13__* pset_list; } ;
struct TYPE_12__ {TYPE_1__* idle_thread; TYPE_3__* processor_set; struct TYPE_12__* processor_list; } ;
struct TYPE_11__ {scalar_t__ sched_stamp; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(sched_update_scan_context_t VAR_6)
{
 boolean_t VAR_7 = VAR_0;
 processor_t VAR_8 = VAR_3;
 processor_set_t VAR_9;
 thread_t VAR_10;
 spl_t VAR_11;






 do {
  do {
   VAR_9 = VAR_8->processor_set;

   VAR_11 = FUNC_5();
   FUNC_2(VAR_9);

   VAR_7 = FUNC_4(FUNC_1(VAR_8), VAR_6);

   FUNC_3(VAR_9);
   FUNC_6(VAR_11);

   if (VAR_7)
    break;

   VAR_10 = VAR_8->idle_thread;
   if (VAR_10 != VAR_1 && VAR_10->sched_stamp != VAR_5) {
    if (FUNC_7(VAR_10) == VAR_0) {
     VAR_7 = VAR_2;
     break;
    }
   }
  } while ((VAR_8 = VAR_8->processor_list) != ((void*)0));


  FUNC_8();

 } while (VAR_7);

 VAR_9 = &VAR_4;

 do {
  do {
   VAR_11 = FUNC_5();
   FUNC_2(VAR_9);

   VAR_7 = FUNC_0(&VAR_9->pset_runq, VAR_6);

   FUNC_3(VAR_9);
   FUNC_6(VAR_11);

   if (VAR_7)
    break;
  } while ((VAR_9 = VAR_9->pset_list) != ((void*)0));


  FUNC_8();

 } while (VAR_7);
}
