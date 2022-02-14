
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int event_t ;
struct TYPE_3__ {int runq_links; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(
 thread_t VAR_3)
{
 spl_t VAR_4 = FUNC_3();

 FUNC_1(&VAR_1);
 FUNC_0(&VAR_0, &VAR_3->runq_links);
 FUNC_2(&VAR_1);

 FUNC_5((event_t)&VAR_2);
 FUNC_4(VAR_4);
}
