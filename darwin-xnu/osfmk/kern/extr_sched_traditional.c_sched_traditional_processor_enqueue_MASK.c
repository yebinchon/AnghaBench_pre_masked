
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int run_queue_t ;
typedef int processor_t ;
typedef int integer_t ;
typedef int boolean_t ;
struct TYPE_5__ {int runq; } ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static boolean_t
FUNC_3(processor_t VAR_0,
                                    thread_t VAR_1,
                                    integer_t VAR_2)
{
 run_queue_t VAR_3 = FUNC_2(VAR_0);
 boolean_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);
 VAR_1->runq = VAR_0;
 FUNC_1(VAR_0, VAR_1);

 return (VAR_4);
}
