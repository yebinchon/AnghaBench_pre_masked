
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_mutex; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static loff_t FUNC_2 (struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4 = -VAR_0;

 FUNC_0(&VAR_1->f_path.dentry->d_inode->i_mutex);
 switch(VAR_3) {
 case 0:
  if (VAR_2 > 0) {
   VAR_1->f_pos = VAR_2;
   VAR_4 = VAR_1->f_pos;
  }
  break;
 case 1:
  if ((VAR_2 + VAR_1->f_pos) > 0) {
   VAR_1->f_pos += VAR_2;
   VAR_4 = VAR_1->f_pos;
  }
  break;
 default:
  break;
 }
 FUNC_1(&VAR_1->f_path.dentry->d_inode->i_mutex);
 return VAR_4;
}
