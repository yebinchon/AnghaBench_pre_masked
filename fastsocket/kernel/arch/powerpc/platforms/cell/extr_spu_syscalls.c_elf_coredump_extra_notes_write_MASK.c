
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spufs_calls {int (* coredump_extra_notes_write ) (struct file*,int *) ;} ;
struct file {int dummy; } ;
typedef int loff_t ;


 struct spufs_calls* FUNC_0 () ;
 int FUNC_1 (struct spufs_calls*) ;
 int FUNC_2 (struct file*,int *) ;

int FUNC_3(struct file *VAR_0, loff_t *VAR_1)
{
 struct spufs_calls *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0();
 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->coredump_extra_notes_write(VAR_0, VAR_1);

 FUNC_1(VAR_2);

 return VAR_3;
}
