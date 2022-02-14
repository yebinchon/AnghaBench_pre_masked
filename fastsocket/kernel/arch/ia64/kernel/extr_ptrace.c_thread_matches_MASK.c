
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pt_regs {int ar_bspstore; } ;


 unsigned long FUNC_0 (struct task_struct*,struct pt_regs*,int *) ;
 int FUNC_1 (unsigned long,int ,unsigned long) ;
 scalar_t__ FUNC_2 (struct task_struct*,int ) ;
 struct pt_regs* FUNC_3 (struct task_struct*) ;

__attribute__((used)) static inline int
FUNC_4 (struct task_struct *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 struct pt_regs *VAR_3;

 if (FUNC_2(VAR_0, 0) < 0)
  return 0;

 VAR_3 = FUNC_3(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_3, ((void*)0));
 if (!FUNC_1(VAR_1, VAR_3->ar_bspstore, VAR_2))
  return 0;

 return 1;
}
