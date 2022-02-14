
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int mnt; TYPE_1__* dentry; } ;
struct file_operations {int dummy; } ;
struct file {int f_mode; struct file_operations const* f_op; int f_mapping; struct path f_path; } ;
typedef int fmode_t ;
struct TYPE_4__ {int i_mode; int i_mapping; } ;
struct TYPE_3__ {TYPE_2__* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 () ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

struct file *FUNC_6(struct path *VAR_1, fmode_t VAR_2,
  const struct file_operations *VAR_3)
{
 struct file *VAR_4;

 VAR_4 = FUNC_2();
 if (!VAR_4)
  return ((void*)0);

 VAR_4->f_path = *VAR_1;
 VAR_4->f_mapping = VAR_1->dentry->d_inode->i_mapping;
 VAR_4->f_mode = VAR_2;
 VAR_4->f_op = VAR_3;







 if ((VAR_2 & VAR_0) && !FUNC_5(VAR_1->dentry->d_inode->i_mode)) {
  FUNC_1(VAR_4);
  FUNC_0(FUNC_4(VAR_1->mnt));
 }
 FUNC_3(VAR_4);
 return VAR_4;
}
