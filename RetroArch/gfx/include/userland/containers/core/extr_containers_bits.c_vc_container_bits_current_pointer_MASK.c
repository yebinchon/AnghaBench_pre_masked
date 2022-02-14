
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int bits; int * buffer; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (int) ;

const uint8_t *FUNC_1(const VC_CONTAINER_BITS_T *VAR_0)
{
   const uint8_t *VAR_1 = VAR_0->buffer;


   FUNC_0(!VAR_0->bits);

   return VAR_1 ? (VAR_1 + 1) : ((void*)0);
}
