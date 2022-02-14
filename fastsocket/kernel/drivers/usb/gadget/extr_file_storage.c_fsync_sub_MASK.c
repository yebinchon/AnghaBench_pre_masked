
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lun {scalar_t__ ro; struct file* filp; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;


 int FUNC_0 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct lun *VAR_0)
{
 struct file *VAR_1 = VAR_0->filp;

 if (VAR_0->ro || !VAR_1)
  return 0;
 return FUNC_0(VAR_1, VAR_1->f_path.dentry, 1);
}
