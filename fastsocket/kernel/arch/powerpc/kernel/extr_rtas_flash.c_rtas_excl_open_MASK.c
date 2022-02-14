
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int count; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_2, struct file *VAR_3)
{
 struct proc_dir_entry *VAR_4 = FUNC_0(VAR_2);


 FUNC_3(&VAR_1);
 if (FUNC_2(&VAR_4->count) > 2) {
  FUNC_4(&VAR_1);
  return -VAR_0;
 }

 FUNC_1(&VAR_4->count);
 FUNC_4(&VAR_1);

 return 0;
}
