
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int * s_bdev; TYPE_4__* s_op; } ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_8__ {int * freeze_fs; } ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 struct super_block* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4)
{
 struct super_block *VAR_5 = VAR_4->f_path.dentry->d_inode->i_sb;

 if (!FUNC_2(VAR_0))
  return -VAR_3;


 if (VAR_5->s_op->freeze_fs == ((void*)0))
  return -VAR_2;


 if (VAR_5->s_bdev == ((void*)0))
  return -VAR_1;


 VAR_5 = FUNC_3(VAR_5->s_bdev);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 return 0;
}
