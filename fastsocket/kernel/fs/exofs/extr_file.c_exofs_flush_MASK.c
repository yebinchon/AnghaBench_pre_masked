
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef int fl_owner_t ;


 int FUNC_0 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, fl_owner_t VAR_1)
{
 FUNC_0(VAR_0, VAR_0->f_path.dentry, 1);

 return 0;
}
