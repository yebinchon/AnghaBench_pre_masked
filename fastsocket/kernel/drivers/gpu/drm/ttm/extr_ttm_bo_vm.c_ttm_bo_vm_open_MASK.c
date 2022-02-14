
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_private_data; } ;
struct ttm_buffer_object {int dummy; } ;


 int FUNC_0 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct ttm_buffer_object *VAR_1 =
     (struct ttm_buffer_object *)VAR_0->vm_private_data;

 (void)FUNC_0(VAR_1);
}
