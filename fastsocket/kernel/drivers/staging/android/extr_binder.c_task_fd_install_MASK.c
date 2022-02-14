
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {int file_lock; } ;
struct file {int dummy; } ;
struct fdtable {int ** fd; } ;
struct binder_proc {struct files_struct* files; } ;


 int FUNC_0 (int ) ;
 struct fdtable* FUNC_1 (struct files_struct*) ;
 int FUNC_2 (int *,struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
 struct binder_proc *VAR_0, unsigned int VAR_1, struct file *VAR_2)
{
 struct files_struct *VAR_3 = VAR_0->files;
 struct fdtable *VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_3(&VAR_3->file_lock);
 VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_4->fd[VAR_1] != ((void*)0));
 FUNC_2(VAR_4->fd[VAR_1], VAR_2);
 FUNC_4(&VAR_3->file_lock);
}
