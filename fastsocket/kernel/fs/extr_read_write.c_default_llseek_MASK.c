
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ f_version; scalar_t__ f_pos; TYPE_2__ f_path; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {int d_inode; } ;


 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

loff_t FUNC_3(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;

 FUNC_1();
 switch (VAR_3) {
  case 128:
   VAR_2 += FUNC_0(VAR_1->f_path.dentry->d_inode);
   break;
  case 129:
   if (VAR_2 == 0) {
    VAR_4 = VAR_1->f_pos;
    goto out;
   }
   VAR_2 += VAR_1->f_pos;
 }
 VAR_4 = -VAR_0;
 if (VAR_2 >= 0) {
  if (VAR_2 != VAR_1->f_pos) {
   VAR_1->f_pos = VAR_2;
   VAR_1->f_version = 0;
  }
  VAR_4 = VAR_2;
 }
out:
 FUNC_2();
 return VAR_4;
}
