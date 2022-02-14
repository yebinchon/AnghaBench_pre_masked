
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_2__ {unsigned long sp; } ;
struct task_struct {scalar_t__ state; TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

unsigned long FUNC_2(struct task_struct *VAR_3)
{
 unsigned long VAR_4;
 u64 VAR_5, VAR_6;
 int VAR_7 = 0;

 if (!VAR_3 || VAR_3 == VAR_2 || VAR_3->state == VAR_0)
  return 0;
 VAR_4 = (unsigned long)FUNC_1(VAR_3);
 if (VAR_3->thread.sp < VAR_4 || VAR_3->thread.sp >= VAR_4+VAR_1)
  return 0;
 VAR_5 = *(u64 *)(VAR_3->thread.sp);
 do {
  if (VAR_5 < (unsigned long)VAR_4 ||
      VAR_5 >= (unsigned long)VAR_4+VAR_1)
   return 0;
  VAR_6 = *(u64 *)(VAR_5+8);
  if (!FUNC_0(VAR_6))
   return VAR_6;
  VAR_5 = *(u64 *)VAR_5;
 } while (VAR_7++ < 16);
 return 0;
}
