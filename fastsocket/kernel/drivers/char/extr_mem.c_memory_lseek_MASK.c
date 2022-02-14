
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; int f_pos; } ;
typedef int loff_t ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {int i_mutex; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static loff_t FUNC_3(struct file * VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;

 FUNC_1(&VAR_1->f_path.dentry->d_inode->i_mutex);
 switch (VAR_3) {
  case 0:
   VAR_1->f_pos = VAR_2;
   VAR_4 = VAR_1->f_pos;
   FUNC_0();
   break;
  case 1:
   VAR_1->f_pos += VAR_2;
   VAR_4 = VAR_1->f_pos;
   FUNC_0();
   break;
  default:
   VAR_4 = -VAR_0;
 }
 FUNC_2(&VAR_1->f_path.dentry->d_inode->i_mutex);
 return VAR_4;
}
