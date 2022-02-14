
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_pgoff; int vm_flags; int vm_private_data; int * vm_ops; } ;
struct ttm_buffer_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ttm_buffer_object*) ;
 int VAR_4 ;

int FUNC_1(struct vm_area_struct *VAR_5, struct ttm_buffer_object *VAR_6)
{
 if (VAR_5->vm_pgoff != 0)
  return -VAR_0;

 VAR_5->vm_ops = &VAR_4;
 VAR_5->vm_private_data = FUNC_0(VAR_6);
 VAR_5->vm_flags |= VAR_2 | VAR_3 | VAR_1;
 return 0;
}
