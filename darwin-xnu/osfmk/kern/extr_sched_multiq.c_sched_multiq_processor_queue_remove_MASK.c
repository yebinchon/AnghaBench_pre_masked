
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
typedef int processor_set_t ;
typedef int boolean_t ;
struct TYPE_11__ {int processor_set; } ;
struct TYPE_10__ {int sched_group; TYPE_2__* runq; TYPE_2__* bound_processor; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_7(
                                    processor_t VAR_3,
                                    thread_t VAR_4)
{
 boolean_t VAR_5 = VAR_0;
 processor_set_t VAR_6 = VAR_3->processor_set;

 FUNC_3(VAR_6);

 if (VAR_4->runq != VAR_1) {





  FUNC_0(VAR_4->runq == VAR_3);

  if (VAR_4->bound_processor != VAR_1) {
   FUNC_0(VAR_3 == VAR_4->bound_processor);
   FUNC_5(FUNC_1(VAR_3), VAR_4);
   VAR_4->runq = VAR_1;
  } else {
   FUNC_6(FUNC_2(VAR_3),
                             VAR_4->sched_group,
                             VAR_4);
  }

  VAR_5 = VAR_2;
 }

 FUNC_4(VAR_6);

 return VAR_5;
}
