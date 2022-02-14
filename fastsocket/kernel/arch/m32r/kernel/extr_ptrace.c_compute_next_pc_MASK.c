
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long,unsigned long*,struct task_struct*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long*,struct task_struct*) ;

__attribute__((used)) static inline void
FUNC_2(unsigned long VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2, struct task_struct *VAR_3)
{
 if (VAR_0 & 0x80000000)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
