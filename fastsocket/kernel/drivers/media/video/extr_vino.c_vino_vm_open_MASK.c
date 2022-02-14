
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct vino_framebuffer* vm_private_data; } ;
struct vino_framebuffer {int map_count; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_0)
{
 struct vino_framebuffer *VAR_1 = VAR_0->vm_private_data;

 VAR_1->map_count++;
 FUNC_0("vino_vm_open(): count = %d\n", VAR_1->map_count);
}
