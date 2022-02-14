
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct TYPE_6__ {scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(void)
{
 thread_t VAR_2 = FUNC_1();

 FUNC_5(VAR_2);





 FUNC_0(VAR_2->active == VAR_1);
 FUNC_4(VAR_2, VAR_0);
 FUNC_3(VAR_2);

 FUNC_2("thread_corpse_continue");

}
