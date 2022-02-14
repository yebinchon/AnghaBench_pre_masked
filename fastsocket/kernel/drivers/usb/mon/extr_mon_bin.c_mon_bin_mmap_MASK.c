
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_private_data; int vm_flags; int * vm_ops; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, struct vm_area_struct *VAR_3)
{

 VAR_3->vm_ops = &VAR_1;
 VAR_3->vm_flags |= VAR_0;
 VAR_3->vm_private_data = VAR_2->private_data;
 FUNC_0(VAR_3);
 return 0;
}
