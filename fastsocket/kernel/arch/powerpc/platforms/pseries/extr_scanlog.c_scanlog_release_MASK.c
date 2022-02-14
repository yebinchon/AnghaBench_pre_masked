
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ data; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode * VAR_0, struct file * VAR_1)
{
 struct proc_dir_entry *VAR_2 = FUNC_0(VAR_0);
 unsigned int *VAR_3 = (unsigned int *)VAR_2->data;

 VAR_3[0] = 0;

 return 0;
}
