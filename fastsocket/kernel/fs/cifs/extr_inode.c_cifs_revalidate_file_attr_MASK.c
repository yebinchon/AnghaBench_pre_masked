
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ private_data; TYPE_2__ f_path; } ;
struct cifsFileInfo {int tlink; } ;
struct TYPE_6__ {scalar_t__ unix_ext; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (int ) ;

int FUNC_4(struct file *VAR_0)
{
 int VAR_1 = 0;
 struct inode *VAR_2 = VAR_0->f_path.dentry->d_inode;
 struct cifsFileInfo *VAR_3 = (struct cifsFileInfo *) VAR_0->private_data;

 if (!FUNC_2(VAR_2))
  return VAR_1;

 if (FUNC_3(VAR_3->tlink)->unix_ext)
  VAR_1 = FUNC_1(VAR_0);
 else
  VAR_1 = FUNC_0(VAR_0);

 return VAR_1;
}
