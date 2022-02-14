
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {int dummy; } ;
struct task_struct {scalar_t__ state; } ;
struct reg_window32 {unsigned long* ins; } ;
struct TYPE_2__ {unsigned long ksp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 TYPE_1__* FUNC_1 (struct task_struct*) ;

unsigned long FUNC_2(struct task_struct *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6 = 0;
 unsigned long VAR_7 = (unsigned long) VAR_3;
        unsigned long VAR_8 = 0;
 struct reg_window32 *VAR_9;
 int VAR_10 = 0;

 if (!VAR_3 || VAR_3 == VAR_2 ||
            VAR_3->state == VAR_1)
  goto out;

 VAR_5 = FUNC_1(VAR_3)->ksp + VAR_6;
 do {

  if (VAR_5 < (VAR_7 + sizeof(struct thread_info)) ||
      VAR_5 >= (VAR_7 + (2 * VAR_0)))
   break;
  VAR_9 = (struct reg_window32 *) VAR_5;
  VAR_4 = VAR_9->ins[7];
  if (!FUNC_0(VAR_4)) {
   VAR_8 = VAR_4;
   goto out;
  }
  VAR_5 = VAR_9->ins[6] + VAR_6;
 } while (++VAR_10 < 16);

out:
 return VAR_8;
}
