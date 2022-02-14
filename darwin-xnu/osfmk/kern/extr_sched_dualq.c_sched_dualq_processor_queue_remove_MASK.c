
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int run_queue_t ;
typedef TYPE_2__* processor_t ;
typedef int processor_set_t ;
typedef int boolean_t ;
struct TYPE_10__ {int processor_set; } ;
struct TYPE_9__ {TYPE_2__* runq; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_5(
                                   processor_t VAR_1,
                                   thread_t VAR_2)
{
 run_queue_t VAR_3;
 processor_set_t VAR_4 = VAR_1->processor_set;

 FUNC_2(VAR_4);

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (VAR_1 == VAR_2->runq) {




  FUNC_4(VAR_3, VAR_2);
 }
 else {




  FUNC_0(VAR_2->runq == VAR_0);
  VAR_1 = VAR_0;
 }

 FUNC_3(VAR_4);

 return (VAR_1 != VAR_0);
}
