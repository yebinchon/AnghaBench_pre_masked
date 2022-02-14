
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct exception_action {int dummy; } ;
struct TYPE_3__ {int * exc_actions; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;

void
FUNC_5(
 thread_t VAR_1)
{
 FUNC_0(VAR_1->exc_actions == ((void*)0));

 VAR_1->exc_actions = FUNC_2(sizeof(struct exception_action) * VAR_0);
 FUNC_1(VAR_1->exc_actions, sizeof(struct exception_action) * VAR_0);






}
