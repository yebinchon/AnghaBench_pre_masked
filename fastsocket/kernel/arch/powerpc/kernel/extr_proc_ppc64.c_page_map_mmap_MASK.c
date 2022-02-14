
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; int vm_page_prot; } ;
struct proc_dir_entry {scalar_t__ size; int data; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3( struct file *VAR_2, struct vm_area_struct *VAR_3 )
{
 struct proc_dir_entry *VAR_4 = FUNC_0(VAR_2->f_path.dentry->d_inode);

 if ((VAR_3->vm_end - VAR_3->vm_start) > VAR_4->size)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_3->vm_start, FUNC_1(VAR_4->data) >> VAR_1,
      VAR_4->size, VAR_3->vm_page_prot);
 return 0;
}
