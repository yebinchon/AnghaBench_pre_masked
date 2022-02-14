
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int file_lock; } ;
struct file {int dummy; } ;
struct fdtable {int close_on_exec; int ** fd; } ;
struct TYPE_2__ {struct files_struct* files; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 TYPE_1__* VAR_0 ;
 struct fdtable* FUNC_2 (struct files_struct*) ;
 int FUNC_3 (int *,struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1, struct file *VAR_2)
{
 struct files_struct *VAR_3 = VAR_0->files;
 struct fdtable *VAR_4;

 FUNC_4(&VAR_3->file_lock);
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_4->fd[VAR_1] != ((void*)0));
 FUNC_3(VAR_4->fd[VAR_1], VAR_2);
 FUNC_1(VAR_1, VAR_4->close_on_exec);
 FUNC_5(&VAR_3->file_lock);
}
