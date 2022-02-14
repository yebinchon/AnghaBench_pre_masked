
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ has_iend; scalar_t__ has_idat; scalar_t__ has_ihdr; } ;
typedef TYPE_1__ rpng_t ;



bool FUNC_0(rpng_t *VAR_0)
{


   if (VAR_0 && VAR_0->has_ihdr && VAR_0->has_idat && VAR_0->has_iend)
      return 1;

   return 0;
}
