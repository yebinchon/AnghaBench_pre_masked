
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_fifo {unsigned int head; int tail; unsigned int length; unsigned int* data; } ;



__attribute__((used)) static inline int FUNC_0(struct vino_framebuffer_fifo *VAR_0,
       unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = VAR_0->head; VAR_2 == (VAR_0->tail - 1); VAR_2 = (VAR_2 + 1) % VAR_0->length) {
  if (VAR_0->data[VAR_2] == VAR_1)
   return 1;
 }

 return 0;
}
