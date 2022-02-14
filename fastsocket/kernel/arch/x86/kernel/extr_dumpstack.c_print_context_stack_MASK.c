
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct stacktrace_ops {int (* address ) (void*,unsigned long,int) ;} ;
struct stack_frame {struct stack_frame* next_frame; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,void*,struct stacktrace_ops const*,struct thread_info*,int*) ;
 int FUNC_2 (void*,unsigned long,int) ;
 int FUNC_3 (void*,unsigned long,int) ;
 scalar_t__ FUNC_4 (struct thread_info*,unsigned long*,int,unsigned long*) ;

unsigned long
FUNC_5(struct thread_info *VAR_0,
  unsigned long *VAR_1, unsigned long VAR_2,
  const struct stacktrace_ops *VAR_3, void *VAR_4,
  unsigned long *VAR_5, int *VAR_6)
{
 struct stack_frame *VAR_7 = (struct stack_frame *)VAR_2;

 while (FUNC_4(VAR_0, VAR_1, sizeof(*VAR_1), VAR_5)) {
  unsigned long VAR_8;

  VAR_8 = *VAR_1;
  if (FUNC_0(VAR_8)) {
   if ((unsigned long) VAR_1 == VAR_2 + sizeof(long)) {
    VAR_3->address(VAR_4, VAR_8, 1);
    VAR_7 = VAR_7->next_frame;
    VAR_2 = (unsigned long) VAR_7;
   } else {
    VAR_3->address(VAR_4, VAR_8, 0);
   }
   FUNC_1(VAR_8, VAR_4, VAR_3, VAR_0, VAR_6);
  }
  VAR_1++;
 }
 return VAR_2;
}
