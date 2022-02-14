
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t engine_buffer_size; TYPE_1__* buffer; int exclusive; } ;
typedef TYPE_2__ wasapi_t ;
struct TYPE_3__ {size_t size; } ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   wasapi_t *VAR_1 = (wasapi_t*)VAR_0;

   if (!VAR_1->exclusive && VAR_1->buffer)
      return VAR_1->buffer->size;

   return VAR_1->engine_buffer_size;
}
