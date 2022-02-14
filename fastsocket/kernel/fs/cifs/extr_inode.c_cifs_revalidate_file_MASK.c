
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {scalar_t__ invalid_mapping; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = VAR_0->f_path.dentry->d_inode;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 if (FUNC_0(VAR_2)->invalid_mapping)
  VAR_1 = FUNC_1(VAR_2);
 return VAR_1;
}
