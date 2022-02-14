
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct uio_device* vm_private_data; } ;
struct uio_device {int vma_count; } ;



__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_0)
{
 struct uio_device *VAR_1 = VAR_0->vm_private_data;
 VAR_1->vma_count++;
}
