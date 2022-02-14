
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int bits; int buffer; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const*) ;

uint32_t FUNC_2(const VC_CONTAINER_BITS_T *VAR_0)
{
   if (!VAR_0->buffer)
      return 0;

   FUNC_0(!VAR_0->bits);

   return FUNC_1(VAR_0) >> 3;
}
