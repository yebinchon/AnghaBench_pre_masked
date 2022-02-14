
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int bytes; scalar_t__ bits; int buffer; } ;
typedef TYPE_1__ VC_CONTAINER_BITS_T ;



uint32_t FUNC_0(const VC_CONTAINER_BITS_T *VAR_0)
{
   if (!VAR_0->buffer)
      return 0;
   return (VAR_0->bytes << 3) + VAR_0->bits;
}
