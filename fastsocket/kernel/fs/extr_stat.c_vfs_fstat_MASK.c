
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kstat {int dummy; } ;
struct TYPE_2__ {int dentry; int mnt; } ;
struct file {TYPE_1__ f_path; } ;


 int VAR_0 ;
 struct file* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,int ,struct kstat*) ;

int FUNC_3(unsigned int VAR_1, struct kstat *VAR_2)
{
 struct file *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = -VAR_0;

 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3->f_path.mnt, VAR_3->f_path.dentry, VAR_2);
  FUNC_1(VAR_3);
 }
 return VAR_4;
}
