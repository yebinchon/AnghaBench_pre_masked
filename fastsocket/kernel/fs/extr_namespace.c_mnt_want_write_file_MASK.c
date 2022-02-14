
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mnt; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int mnt_sb; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct file *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0->f_path.mnt->mnt_sb);
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(VAR_0->f_path.mnt->mnt_sb);
 return VAR_1;
}
