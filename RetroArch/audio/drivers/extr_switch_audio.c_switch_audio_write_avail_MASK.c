
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* current_buffer; } ;
typedef TYPE_2__ switch_audio_t ;
struct TYPE_3__ {size_t buffer_size; } ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   switch_audio_t *VAR_1 = (switch_audio_t*) VAR_0;

   if (!VAR_1 || !VAR_1->current_buffer)
      return 0;

   return VAR_1->current_buffer->buffer_size;
}
