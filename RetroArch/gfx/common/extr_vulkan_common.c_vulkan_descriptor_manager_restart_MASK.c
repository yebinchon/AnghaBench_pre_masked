
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vk_descriptor_manager {scalar_t__ count; int head; int current; } ;



void FUNC_0(struct vk_descriptor_manager *VAR_0)
{
   VAR_0->current = VAR_0->head;
   VAR_0->count = 0;
}
