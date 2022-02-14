
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* processor_set_t ;
struct TYPE_5__ {int rt_runq; } ;


 int FUNC_0 (int *,int,int) ;
 TYPE_1__ VAR_0 ;
 void FUNC_1 (TYPE_1__*) ;

void
FUNC_2(processor_set_t VAR_1)
{
 if (VAR_1 == &VAR_0) {
  return FUNC_1(VAR_1);
 }




 FUNC_0(&VAR_1->rt_runq, 0xfd, sizeof VAR_1->rt_runq);
}
