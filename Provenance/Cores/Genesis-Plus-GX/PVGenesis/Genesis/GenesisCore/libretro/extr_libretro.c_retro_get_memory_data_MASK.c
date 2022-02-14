
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* sram; int on; } ;



 TYPE_1__ VAR_0 ;

void *FUNC_0(unsigned VAR_1)
{
   if (!VAR_0.on)
      return ((void*)0);

   switch (VAR_1)
   {
      case 128:
         return VAR_0.sram;

      default:
         return ((void*)0);
   }
}
