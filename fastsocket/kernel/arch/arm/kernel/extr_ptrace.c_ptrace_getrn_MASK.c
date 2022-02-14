
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long FUNC_0 (struct task_struct*,unsigned int) ;

__attribute__((used)) static unsigned long
FUNC_1(struct task_struct *VAR_0, unsigned long VAR_1)
{
 unsigned int VAR_2 = (VAR_1 >> 16) & 15;
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (VAR_2 == 15)
  VAR_3 += 8;

 return VAR_3;
}
