
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtimer_list {scalar_t__ interval; } ;


 int FUNC_0 (struct vtimer_list*) ;
 int FUNC_1 (struct vtimer_list*) ;

void FUNC_2(void *VAR_0)
{
 struct vtimer_list *VAR_1;

 VAR_1 = (struct vtimer_list *)VAR_0;
 FUNC_1(VAR_1);
 VAR_1->interval = 0;
 FUNC_0(VAR_1);
}
