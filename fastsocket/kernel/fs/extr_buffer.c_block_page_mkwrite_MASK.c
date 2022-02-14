
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_fault {int dummy; } ;
struct vm_area_struct {TYPE_4__* vm_file; } ;
struct super_block {int dummy; } ;
typedef int get_block_t ;
struct TYPE_7__ {TYPE_2__* dentry; } ;
struct TYPE_8__ {TYPE_3__ f_path; } ;
struct TYPE_6__ {TYPE_1__* d_inode; } ;
struct TYPE_5__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,struct vm_fault*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,int ) ;

int FUNC_6(struct vm_area_struct *VAR_1, struct vm_fault *VAR_2,
     get_block_t VAR_3)
{
 int VAR_4;
 __attribute__ ((unused)) struct super_block *VAR_5 = VAR_1->vm_file->f_path.dentry->d_inode->i_sb;






 if (!FUNC_3(VAR_5))
  FUNC_5(VAR_5, VAR_0);

 FUNC_4(VAR_5);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_5);
 return FUNC_1(VAR_4);
}
