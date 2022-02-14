
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* fs; } ;
struct linux_binprm {int unsafe; } ;
struct TYPE_2__ {unsigned int users; int in_exec; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 struct task_struct* FUNC_0 (struct task_struct*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct linux_binprm *VAR_3)
{
 struct task_struct *VAR_4 = VAR_2, *VAR_5;
 unsigned VAR_6;
 int VAR_7 = 0;

 VAR_3->unsafe = FUNC_3(VAR_4);

 VAR_6 = 1;
 FUNC_4(&VAR_4->fs->lock);
 FUNC_1();
 for (VAR_5 = FUNC_0(VAR_4); VAR_5 != VAR_4; VAR_5 = FUNC_0(VAR_5)) {
  if (VAR_5->fs == VAR_4->fs)
   VAR_6++;
 }
 FUNC_2();

 if (VAR_4->fs->users > VAR_6) {
  VAR_3->unsafe |= VAR_1;
 } else {
  VAR_7 = -VAR_0;
  if (!VAR_4->fs->in_exec) {
   VAR_4->fs->in_exec = 1;
   VAR_7 = 1;
  }
 }
 FUNC_5(&VAR_4->fs->lock);

 return VAR_7;
}
