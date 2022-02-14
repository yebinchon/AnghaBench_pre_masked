
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct cifsInodeInfo {scalar_t__ time; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 struct cifsInodeInfo* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0)
{
 struct inode *VAR_1 = VAR_0->f_path.dentry->d_inode;
 struct cifsInodeInfo *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->time == 0)
  return 1;
 else
  return 0;

}
