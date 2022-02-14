
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int event_t ;
struct TYPE_5__ {int runq_links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

void
FUNC_8(
 thread_t VAR_5)
{
 FUNC_0(FUNC_1(VAR_1,VAR_2) | VAR_0, FUNC_6(VAR_5), 0, 0, 0, 0);
 FUNC_2(VAR_5);

 FUNC_4(&VAR_3);
 FUNC_3(&VAR_4, &VAR_5->runq_links);
 FUNC_5(&VAR_3);

 FUNC_7((event_t)&VAR_4);
}
