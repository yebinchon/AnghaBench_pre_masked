
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_buffer_chain {scalar_t__ offset; int head; int current; } ;



void FUNC_0(struct vk_buffer_chain *VAR_0)
{
   VAR_0->current = VAR_0->head;
   VAR_0->offset = 0;
}
