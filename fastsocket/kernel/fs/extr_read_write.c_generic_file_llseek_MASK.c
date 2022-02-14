
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_2__* f_dentry; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_mutex; } ;


 int FUNC_0 (struct file*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

loff_t FUNC_3(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 loff_t VAR_3;

 FUNC_1(&VAR_0->f_dentry->d_inode->i_mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->f_dentry->d_inode->i_mutex);

 return VAR_3;
}
