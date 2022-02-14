
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int * s_bdev; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct super_block*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3)
{
 struct super_block *VAR_4 = VAR_3->f_path.dentry->d_inode->i_sb;

 if (!FUNC_0(VAR_0))
  return -VAR_2;


 if (VAR_4->s_bdev == ((void*)0))
  return -VAR_1;


 return FUNC_1(VAR_4->s_bdev, VAR_4);
}
