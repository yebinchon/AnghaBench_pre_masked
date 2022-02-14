
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_size; int i_mutex; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static loff_t
FUNC_2(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4 = -1;
 struct inode *VAR_5 = VAR_1->f_path.dentry->d_inode;

 FUNC_0(&VAR_5->i_mutex);
 switch (VAR_3) {
 case 0:
  VAR_4 = VAR_2;
  break;
 case 1:
  VAR_4 = VAR_1->f_pos + VAR_2;
  break;
 case 2:
  VAR_4 = VAR_5->i_size + VAR_2;
  break;
 }
 if (VAR_4 < 0 || VAR_4 > VAR_5->i_size)
  VAR_4 = -VAR_0;
 else
  VAR_1->f_pos = VAR_4;
 FUNC_1(&VAR_5->i_mutex);
 return VAR_4;
}
