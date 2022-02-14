
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int ptrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,struct task_struct*,int) ;

__attribute__((used)) static inline void FUNC_2(struct task_struct *VAR_2)
{
 if (VAR_2->ptrace & VAR_0) {
  FUNC_0(VAR_2);
  FUNC_1(VAR_1, VAR_2, 1);
 }
}
