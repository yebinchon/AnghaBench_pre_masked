
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_2__ f_path; } ;
typedef int loff_t ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_1);
 VAR_5 = FUNC_2(VAR_2->f_path.dentry->d_inode);
 switch (VAR_4) {
  default:
   FUNC_1(&VAR_1);
   return -VAR_0;
  case 2:
   VAR_3 += VAR_5;
   break;
  case 1:
   VAR_3 += VAR_2->f_pos;
  case 0:
   break;
 }
 if (VAR_3 < 0 || VAR_3 > VAR_5) {
  FUNC_1(&VAR_1);
  return -VAR_0;
 }
 VAR_2->f_pos = VAR_3;
 FUNC_1(&VAR_1);
 return VAR_2->f_pos;
}
