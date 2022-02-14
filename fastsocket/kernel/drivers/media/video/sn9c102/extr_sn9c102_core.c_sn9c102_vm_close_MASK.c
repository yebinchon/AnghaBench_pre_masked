
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct sn9c102_frame_t* vm_private_data; } ;
struct sn9c102_frame_t {int vma_use_count; } ;



__attribute__((used)) static void FUNC_0(struct vm_area_struct* VAR_0)
{

 struct sn9c102_frame_t* VAR_1 = VAR_0->vm_private_data;
 VAR_1->vma_use_count--;
}
