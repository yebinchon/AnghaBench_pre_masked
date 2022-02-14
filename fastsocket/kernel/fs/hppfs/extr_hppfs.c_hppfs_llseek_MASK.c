
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hppfs_private {struct file* proc_file; } ;
struct TYPE_8__ {TYPE_3__* dentry; } ;
struct file {TYPE_4__ f_path; struct hppfs_private* private_data; } ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {TYPE_2__* d_inode; } ;
struct TYPE_6__ {TYPE_1__* i_fop; } ;
struct TYPE_5__ {scalar_t__ (* llseek ) (struct file*,scalar_t__,int) ;} ;


 scalar_t__ FUNC_0 (struct file*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct file*,scalar_t__,int) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct hppfs_private *VAR_3 = VAR_0->private_data;
 struct file *VAR_4 = VAR_3->proc_file;
 loff_t (*VAR_5)(struct file *, loff_t, int);
 loff_t VAR_6;

 VAR_5 = VAR_4->f_path.dentry->d_inode->i_fop->llseek;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = (*VAR_5)(VAR_4, VAR_1, VAR_2);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
