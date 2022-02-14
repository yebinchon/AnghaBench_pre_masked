
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3)
{
 if (VAR_2 & 3 || VAR_2 >= sizeof(struct user))
  return -VAR_0;

 if (VAR_2 >= sizeof(struct pt_regs))
  return 0;

 return FUNC_0(VAR_1, VAR_2 >> 2, VAR_3);
}
