
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int count; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_dir_entry *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->count);

 return 0;
}
