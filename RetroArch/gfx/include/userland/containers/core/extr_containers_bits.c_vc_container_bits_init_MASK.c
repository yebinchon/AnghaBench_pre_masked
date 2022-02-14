
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ bits; int bytes; int const* buffer; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (int ) ;

void FUNC_1(VC_CONTAINER_BITS_T *VAR_0,
      const uint8_t *VAR_1,
      uint32_t VAR_2)
{
   FUNC_0(VAR_1 && (VAR_1 != (const uint8_t *)1));



   VAR_0->buffer = VAR_1 - 1;
   VAR_0->bytes = VAR_2;
   VAR_0->bits = 0;
}
