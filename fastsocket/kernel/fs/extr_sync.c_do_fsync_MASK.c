
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;


 int VAR_0 ;
 struct file* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1, int VAR_2)
{
 struct file *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3, VAR_3->f_path.dentry, VAR_2);
  FUNC_1(VAR_3);
 }
 return VAR_4;
}
