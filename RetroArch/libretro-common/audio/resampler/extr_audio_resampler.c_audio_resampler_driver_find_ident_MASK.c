
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ident; } ;
typedef TYPE_1__ retro_resampler_t ;


 TYPE_1__** VAR_0 ;

const char *FUNC_0(int VAR_1)
{
   const retro_resampler_t *VAR_2 = VAR_0[VAR_1];
   if (!VAR_2)
      return ((void*)0);
   return VAR_2->ident;
}
