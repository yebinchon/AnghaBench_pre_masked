
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * buff_data; } ;
typedef TYPE_1__ rbmp_t ;



bool FUNC_0(rbmp_t *VAR_0, void *VAR_1)
{
   if (!VAR_0)
      return 0;

   VAR_0->buff_data = (uint8_t*)VAR_1;

   return 1;
}
