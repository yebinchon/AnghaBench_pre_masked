
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_start; int vm_end; int vm_private_data; int * vm_ops; int vm_page_prot; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct vm_area_struct*,int ) ;
 int FUNC_1 (int ,char*,struct file*,int,struct vm_area_struct*,int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_15, struct vm_area_struct *VAR_16)
{
 if ((VAR_16->vm_flags & (VAR_11 | VAR_12)) != (VAR_11 | VAR_12))
  return -VAR_2;

 if (VAR_16->vm_start & (VAR_3 - 1) ||
    VAR_16->vm_end & (VAR_3 - 1))
  return -VAR_0;

 VAR_16->vm_flags |=
     (VAR_7 | VAR_5 | VAR_8 | VAR_6 | VAR_9 |
   VAR_10);
 VAR_16->vm_page_prot = VAR_4;
 VAR_16->vm_ops = &VAR_13;

 VAR_16->vm_private_data = FUNC_0(VAR_16, 0);
 if (!VAR_16->vm_private_data)
  return -VAR_1;

 FUNC_1(VAR_14, "file %p, vaddr 0x%lx, vma %p, vdata %p\n",
  VAR_15, VAR_16->vm_start, VAR_16, VAR_16->vm_private_data);
 return 0;
}
