
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_fifo {scalar_t__ used; unsigned int* data; size_t head; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vino_framebuffer_fifo *VAR_1, unsigned int *VAR_2)
{
 if (VAR_1->used > 0) {
  *VAR_2 = VAR_1->data[VAR_1->head];
 } else {
  return VAR_0;
 }

 return 0;
}
