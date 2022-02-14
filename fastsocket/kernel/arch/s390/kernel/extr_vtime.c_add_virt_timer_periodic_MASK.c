
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtimer_list {int expires; int interval; } ;


 int FUNC_0 (struct vtimer_list*) ;
 int FUNC_1 (struct vtimer_list*) ;

void FUNC_2(void *VAR_0)
{
 struct vtimer_list *VAR_1;

 VAR_1 = (struct vtimer_list *)VAR_0;
 FUNC_1(VAR_1);
 VAR_1->interval = VAR_1->expires;
 FUNC_0(VAR_1);
}
