
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {scalar_t__ data; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode * VAR_1, struct file * VAR_2)
{
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_1);
 unsigned int *VAR_4 = (unsigned int *)VAR_3->data;

 if (VAR_4[0] != 0) {



  return -VAR_0;
 }

 VAR_4[0] = 0;

 return 0;
}
