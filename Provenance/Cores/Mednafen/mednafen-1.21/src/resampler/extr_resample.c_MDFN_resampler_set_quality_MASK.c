
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int quality; scalar_t__ initialised; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(SpeexResamplerState *VAR_2, int VAR_3)
{
   if (VAR_3 > 10 || VAR_3 < 0)
      return VAR_0;
   if (VAR_2->quality == VAR_3)
      return VAR_1;
   VAR_2->quality = VAR_3;
   if (VAR_2->initialised)
      FUNC_0(VAR_2);
   return VAR_1;
}
