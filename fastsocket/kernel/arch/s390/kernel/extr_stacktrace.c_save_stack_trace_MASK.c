
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack_trace {int dummy; } ;
struct TYPE_2__ {scalar_t__ thread_info; scalar_t__ async_stack; scalar_t__ panic_stack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (struct stack_trace*,unsigned long,scalar_t__,scalar_t__,int) ;

void FUNC_1(struct stack_trace *VAR_5)
{
 register unsigned long VAR_6 asm ("15");
 unsigned long VAR_7, VAR_8;

 VAR_7 = VAR_6 & VAR_2;
 VAR_8 = FUNC_0(VAR_5, VAR_7,
        VAR_3.panic_stack - VAR_1,
        VAR_3.panic_stack, 1);
 if (VAR_8 != VAR_7)
  return;
 VAR_8 = FUNC_0(VAR_5, VAR_8,
        VAR_3.async_stack - VAR_0,
        VAR_3.async_stack, 1);
 if (VAR_8 != VAR_7)
  return;
 FUNC_0(VAR_5, VAR_8,
      VAR_3.thread_info,
      VAR_3.thread_info + VAR_4, 1);
}
