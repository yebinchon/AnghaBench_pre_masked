
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
typedef int next_insn ;
typedef int code ;


 int FUNC_0 (struct task_struct*,unsigned long,unsigned long*,int,int) ;
 scalar_t__ FUNC_1 (struct task_struct*,unsigned long,unsigned long,unsigned long*) ;

__attribute__((used)) static int
FUNC_2(struct task_struct *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2, VAR_3;
 unsigned long VAR_4 = VAR_1 & ~3;

 if (FUNC_0(VAR_0, VAR_4, &VAR_2, sizeof(VAR_2), 0)
     != sizeof(VAR_2)) {
  return -1;
 }


 if (FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_3)) {
  return -1;
 }
 if (FUNC_0(VAR_0, VAR_4, &VAR_3, sizeof(VAR_3), 1)
     != sizeof(VAR_3)) {
  return -1;
 }
 return 0;
}
