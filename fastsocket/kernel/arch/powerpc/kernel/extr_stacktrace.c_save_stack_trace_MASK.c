
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct stack_trace*,unsigned long,int ,int) ;

void FUNC_1(struct stack_trace *VAR_1)
{
 unsigned long VAR_2;

 asm("mr %0,1" : "=r" (VAR_2));

 FUNC_0(VAR_1, VAR_2, VAR_0, 1);
}
