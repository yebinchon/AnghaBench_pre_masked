
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ bytes; scalar_t__ buffer; int bits; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(VC_CONTAINER_BITS_T *VAR_0,
      uint32_t VAR_1,
      uint8_t *VAR_2)
{
   FUNC_1(!VAR_0->bits);

   if (VAR_0->bytes < VAR_1)
   {

      FUNC_2(VAR_0);
      return;
   }


   FUNC_0(VAR_2, VAR_0->buffer + 1, VAR_1);
   VAR_0->buffer += VAR_1;
   VAR_0->bytes -= VAR_1;
}
