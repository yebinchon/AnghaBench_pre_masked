
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float clock; float htotal; float vtotal; } ;


 TYPE_1__* VAR_0 ;

float FUNC_0(void *VAR_1)
{
   float VAR_2 = 0.0f;

   if (VAR_0)
   {
      VAR_2 = VAR_0->clock * 1000.0f / VAR_0->htotal / VAR_0->vtotal;
   }

   return VAR_2;
}
