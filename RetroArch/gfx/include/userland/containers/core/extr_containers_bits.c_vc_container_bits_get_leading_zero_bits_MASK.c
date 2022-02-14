
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int bits; int* buffer; int bytes; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint32_t FUNC_2( VC_CONTAINER_BITS_T *VAR_0 )
{
   uint32_t VAR_1;
   uint32_t VAR_2 = FUNC_0(VAR_0);
   uint32_t VAR_3;
   uint8_t VAR_4, VAR_5;

   if (!VAR_2)
      return FUNC_1(VAR_0);


   VAR_3 = VAR_0->bits;
   if (VAR_3)
   {
      VAR_5 = *VAR_0->buffer;
      VAR_4 = 1 << (VAR_3 - 1);
   } else {

      VAR_5 = 0;
      VAR_4 = 0;
   }





   for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
   {
      if (!VAR_3)
      {
         if (!VAR_0->bytes)
            return FUNC_1(VAR_0);
         VAR_0->bytes--;
         VAR_5 = *(++VAR_0->buffer);
         VAR_3 = 8;
         VAR_4 = 0x80;
      }

      VAR_3--;
      VAR_2--;
      if (VAR_5 & VAR_4)
         break;

      VAR_4 >>= 1;
   }


   if (VAR_1 > VAR_2)
      return FUNC_1(VAR_0);


   VAR_0->bits = VAR_3;

   return VAR_1;
}
