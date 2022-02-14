
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct stk_sio_buffer* vm_private_data; } ;
struct stk_sio_buffer {int mapcount; } ;



__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_0)
{
 struct stk_sio_buffer *VAR_1 = VAR_0->vm_private_data;
 VAR_1->mapcount++;
}
