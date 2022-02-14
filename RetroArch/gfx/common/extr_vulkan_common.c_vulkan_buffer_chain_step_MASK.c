
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vk_buffer_chain {scalar_t__ offset; TYPE_1__* current; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;



__attribute__((used)) static void FUNC_0(struct vk_buffer_chain *VAR_0)
{
   VAR_0->current = VAR_0->current->next;
   VAR_0->offset = 0;
}
