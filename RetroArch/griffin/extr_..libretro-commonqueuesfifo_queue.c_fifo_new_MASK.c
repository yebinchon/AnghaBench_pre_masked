
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t size; int * buffer; } ;
typedef TYPE_1__ fifo_buffer_t ;


 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

fifo_buffer_t *FUNC_2(size_t VAR_0)
{
   uint8_t *VAR_1 = ((void*)0);
   fifo_buffer_t *VAR_2 = (fifo_buffer_t*)FUNC_0(1, sizeof(*VAR_2));

   if (!VAR_2)
      return ((void*)0);

   VAR_1 = (uint8_t*)FUNC_0(1, VAR_0 + 1);

   if (!VAR_1)
   {
      FUNC_1(VAR_2);
      return ((void*)0);
   }

   VAR_2->buffer = VAR_1;
   VAR_2->size = VAR_0 + 1;

   return VAR_2;
}
