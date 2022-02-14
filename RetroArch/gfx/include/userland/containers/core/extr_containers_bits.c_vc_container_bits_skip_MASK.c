
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int bits; int bytes; int buffer; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(VC_CONTAINER_BITS_T *VAR_0,
      uint32_t VAR_1)
{
   uint32_t VAR_2;
   uint32_t VAR_3;

   VAR_2 = FUNC_0(VAR_0);
   if (VAR_2 < VAR_1)
   {
      FUNC_1(VAR_0);
      return;
   }

   VAR_2 -= VAR_1;
   VAR_3 = VAR_2 >> 3;
   VAR_0->bits = VAR_2 & 7;
   VAR_0->buffer += (VAR_0->bytes - VAR_3);
   VAR_0->bytes = VAR_3;
}
