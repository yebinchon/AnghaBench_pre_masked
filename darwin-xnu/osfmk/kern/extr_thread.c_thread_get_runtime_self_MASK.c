
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int * processor_t ;
typedef int boolean_t ;
struct TYPE_3__ {int system_timer; int user_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;

uint64_t FUNC_7(void)
{
 boolean_t VAR_2;
 uint64_t VAR_3;
 thread_t VAR_4 = ((void*)0);
 processor_t VAR_5 = ((void*)0);

 VAR_4 = FUNC_2();


 VAR_2 = FUNC_4(VAR_0);
 VAR_5 = FUNC_1();
 FUNC_6(FUNC_0(VAR_5, VAR_1), FUNC_3());
 VAR_3 = (FUNC_5(&VAR_4->user_timer) + FUNC_5(&VAR_4->system_timer));
 FUNC_4(VAR_2);

 return VAR_3;
}
