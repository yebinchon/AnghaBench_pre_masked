
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void uint8_t ;
struct TYPE_3__ {size_t end; size_t size; size_t buffer; } ;
typedef TYPE_1__ fifo_buffer_t ;


 int FUNC_0 (size_t,void const*,size_t) ;

void FUNC_1(fifo_buffer_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
   size_t VAR_3 = VAR_2;
   size_t VAR_4 = 0;

   if (VAR_0->end + VAR_2 > VAR_0->size)
   {
      VAR_3 = VAR_0->size - VAR_0->end;
      VAR_4 = VAR_2 - VAR_3;
   }

   FUNC_0(VAR_0->buffer + VAR_0->end, VAR_1, VAR_3);
   FUNC_0(VAR_0->buffer, (const uint8_t*)VAR_1 + VAR_3, VAR_4);

   VAR_0->end = (VAR_0->end + VAR_2) % VAR_0->size;
}
