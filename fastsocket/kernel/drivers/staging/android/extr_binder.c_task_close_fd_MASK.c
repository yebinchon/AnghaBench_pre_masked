
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_struct {int file_lock; } ;
struct file {int dummy; } ;
struct fdtable {unsigned int max_fds; int close_on_exec; struct file** fd; } ;
struct binder_proc {struct files_struct* files; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct files_struct*,unsigned int) ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (struct file*,struct files_struct*) ;
 int FUNC_4 (struct file*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static long FUNC_8(struct binder_proc *VAR_7, unsigned int VAR_8)
{
 struct file *VAR_9;
 struct files_struct *VAR_10 = VAR_7->files;
 struct fdtable *VAR_11;
 int VAR_12;

 if (VAR_10 == ((void*)0))
  return -VAR_6;

 FUNC_5(&VAR_10->file_lock);
 VAR_11 = FUNC_2(VAR_10);
 if (VAR_8 >= VAR_11->max_fds)
  goto out_unlock;
 VAR_9 = VAR_11->fd[VAR_8];
 if (!VAR_9)
  goto out_unlock;
 FUNC_4(VAR_11->fd[VAR_8], ((void*)0));
 FUNC_0(VAR_8, VAR_11->close_on_exec);
 FUNC_1(VAR_10, VAR_8);
 FUNC_6(&VAR_10->file_lock);
 VAR_12 = FUNC_3(VAR_9, VAR_10);


 if (FUNC_7(VAR_12 == -VAR_4 ||
       VAR_12 == -VAR_3 ||
       VAR_12 == -VAR_2 ||
       VAR_12 == -VAR_5))
  VAR_12 = -VAR_1;

 return VAR_12;

out_unlock:
 FUNC_6(&VAR_10->file_lock);
 return -VAR_0;
}
