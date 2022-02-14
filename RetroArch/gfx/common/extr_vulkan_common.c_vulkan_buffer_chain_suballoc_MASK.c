
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct vk_buffer_range {int offset; int buffer; int * data; } ;
struct vk_buffer_chain {size_t offset; int alignment; TYPE_2__* current; } ;
typedef int VkDeviceSize ;
struct TYPE_3__ {int size; int buffer; scalar_t__ mapped; } ;
struct TYPE_4__ {TYPE_1__ buffer; } ;



__attribute__((used)) static bool FUNC_0(struct vk_buffer_chain *VAR_0,
      size_t VAR_1, struct vk_buffer_range *VAR_2)
{
   VkDeviceSize VAR_3 = VAR_0->offset + VAR_1;
   if (VAR_3 <= VAR_0->current->buffer.size)
   {
      VAR_2->data = (uint8_t*)VAR_0->current->buffer.mapped + VAR_0->offset;
      VAR_2->buffer = VAR_0->current->buffer.buffer;
      VAR_2->offset = VAR_0->offset;
      VAR_0->offset = (VAR_3 + VAR_0->alignment - 1)
         & ~(VAR_0->alignment - 1);

      return 1;
   }

   return 0;
}
