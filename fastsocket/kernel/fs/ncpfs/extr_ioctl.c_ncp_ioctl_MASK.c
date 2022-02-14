
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_2__ {int mnt; } ;
struct file {TYPE_1__ f_path; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct file*,unsigned int,unsigned long) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;

int FUNC_4(struct inode *VAR_1, struct file *VAR_2,
       unsigned int VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 if (FUNC_3(VAR_3)) {






  if (FUNC_2(VAR_2->f_path.mnt))
   return -VAR_0;
 }
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_3(VAR_3))
  FUNC_1(VAR_2->f_path.mnt);
 return VAR_5;
}
