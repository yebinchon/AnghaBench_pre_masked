
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ processor_t ;
typedef int integer_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ chosen_processor; scalar_t__ bound_processor; scalar_t__ runq; int sched_group; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int ) ;

__attribute__((used)) static boolean_t
FUNC_5(
                               processor_t VAR_2,
                               thread_t VAR_3,
                               integer_t VAR_4)
{
 boolean_t VAR_5;

 FUNC_0(VAR_2 == VAR_3->chosen_processor);

 if (VAR_3->bound_processor != VAR_1) {
  FUNC_0(VAR_3->bound_processor == VAR_2);

  VAR_5 = FUNC_3(FUNC_1(VAR_2), VAR_3, VAR_4);
  VAR_3->runq = VAR_2;

  return VAR_5;
 }

 FUNC_4(FUNC_2(VAR_2),
                            VAR_3->sched_group,
                            VAR_3, VAR_4);

 VAR_3->runq = VAR_2;

 return (VAR_0);
}
