
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {int clientCanCacheRead; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct file*,struct vm_area_struct*) ;

int FUNC_5(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 int VAR_2, VAR_3;
 struct inode *VAR_4 = VAR_0->f_path.dentry->d_inode;

 VAR_3 = FUNC_2();

 if (!FUNC_0(VAR_4)->clientCanCacheRead) {
  VAR_2 = FUNC_3(VAR_4);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 FUNC_1(VAR_3);
 return VAR_2;
}
