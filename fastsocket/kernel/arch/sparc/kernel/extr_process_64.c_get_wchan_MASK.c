
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {unsigned long ksp; } ;
struct task_struct {scalar_t__ state; } ;
struct reg_window {unsigned long* ins; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct thread_info*,unsigned long) ;
 struct thread_info* FUNC_2 (struct task_struct*) ;

unsigned long FUNC_3(struct task_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6 = 0;
 struct thread_info *VAR_7;
 struct reg_window *VAR_8;
        unsigned long VAR_9 = 0;
 int VAR_10 = 0;

 if (!VAR_3 || VAR_3 == VAR_2 ||
            VAR_3->state == VAR_1)
  goto out;

 VAR_7 = FUNC_2(VAR_3);
 VAR_6 = VAR_0;
 VAR_5 = FUNC_2(VAR_3)->ksp + VAR_6;

 do {
  if (!FUNC_1(VAR_7, VAR_5))
   break;
  VAR_8 = (struct reg_window *) VAR_5;
  VAR_4 = VAR_8->ins[7];
  if (!FUNC_0(VAR_4)) {
   VAR_9 = VAR_4;
   goto out;
  }
  VAR_5 = VAR_8->ins[6] + VAR_6;
 } while (++VAR_10 < 16);

out:
 return VAR_9;
}
