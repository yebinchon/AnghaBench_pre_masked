
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer_fifo {unsigned int length; scalar_t__ tail; scalar_t__ head; scalar_t__ used; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct vino_framebuffer_fifo *VAR_1,
      unsigned int VAR_2)
{
 VAR_1->length = 0;
 VAR_1->used = 0;
 VAR_1->head = 0;
 VAR_1->tail = 0;

 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 VAR_1->length = VAR_2;
}
