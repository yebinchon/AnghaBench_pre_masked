
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int bits; int* buffer; int bytes; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

uint32_t FUNC_3(VC_CONTAINER_BITS_T *VAR_0,
      uint32_t VAR_1)
{
   uint32_t VAR_2 = 0;
   uint32_t VAR_3 = VAR_1;
   uint32_t VAR_4;

   FUNC_0(VAR_1 <= 32);

   if (VAR_3 > FUNC_1(VAR_0))
      return FUNC_2(VAR_0);

   VAR_4 = VAR_0->bits;
   while (VAR_3)
   {
      uint32_t VAR_5;

      if (!VAR_4)
      {
         VAR_0->bytes--;
         VAR_0->buffer++;
         VAR_4 = 8;
      }

      VAR_5 = VAR_4;
      if (VAR_3 < VAR_5) VAR_5 = VAR_3;

      VAR_4 -= VAR_5;
      VAR_3 -= VAR_5;

      VAR_2 <<= VAR_5;
      if (VAR_5 == 8)
         VAR_2 |= *VAR_0->buffer;
      else
         VAR_2 |= (*VAR_0->buffer >> VAR_4) & ((1 << VAR_5) - 1);
   }

   VAR_0->bits = VAR_4;
   return VAR_2;
}
