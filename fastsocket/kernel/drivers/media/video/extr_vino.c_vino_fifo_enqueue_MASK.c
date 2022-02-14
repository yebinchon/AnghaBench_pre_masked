
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_fifo {unsigned int length; unsigned int used; unsigned int* data; size_t tail; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vino_framebuffer_fifo*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct vino_framebuffer_fifo *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 >= VAR_1->length) {
  return VAR_0;
 }

 if (FUNC_0(VAR_1, VAR_2)) {
  return VAR_0;
 }

 if (VAR_1->used < VAR_1->length) {
  VAR_1->data[VAR_1->tail] = VAR_2;
  VAR_1->tail = (VAR_1->tail + 1) % VAR_1->length;
  VAR_1->used++;
 } else {
  return VAR_0;
 }

 return 0;
}
