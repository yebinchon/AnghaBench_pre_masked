
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union thread_union {int dummy; } thread_union ;
struct task_struct {int dummy; } ;
struct reg_window {int dummy; } ;


 unsigned long VAR_0 ;
 struct task_struct VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline int FUNC_1(struct task_struct *VAR_2,
      struct reg_window *VAR_3)
{
 unsigned long VAR_4 = (unsigned long) VAR_3;
 unsigned long VAR_5, VAR_6;

 if (VAR_4 < VAR_0) {
  if (VAR_2 != &VAR_1)
   return 0;
 }

 VAR_5 = (unsigned long) FUNC_0(VAR_2);
 VAR_6 = VAR_5 + sizeof(union thread_union);
 if (VAR_4 >= VAR_5 &&
     VAR_4 < VAR_6 &&
     !(VAR_4 & 0x7UL))
  return 1;

 return 0;
}
