
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct task_struct {int dummy; } ;
struct switch_stack {int dummy; } ;


 long VAR_0 ;
 int FUNC_0 (struct task_struct*,unsigned long,unsigned long*,int,int ) ;
 long FUNC_1 (struct task_struct*,struct switch_stack*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static long
FUNC_2 (struct task_struct *VAR_1, struct switch_stack *VAR_2,
  unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6;
 long VAR_7;


 for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 += 8) {
  if (FUNC_0(VAR_1, VAR_5, &VAR_6, sizeof(VAR_6), 0)
    != sizeof(VAR_6))
   return -VAR_0;

  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
