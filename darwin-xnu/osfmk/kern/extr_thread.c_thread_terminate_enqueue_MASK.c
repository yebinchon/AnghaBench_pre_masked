
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int event_t ;
struct TYPE_3__ {int runq_links; int thread_id; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

void
FUNC_5(
 thread_t VAR_3)
{
 FUNC_0(VAR_0, VAR_3->thread_id);

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_2, &VAR_3->runq_links);
 FUNC_3(&VAR_1);

 FUNC_4((event_t)&VAR_2);
}
