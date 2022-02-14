
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* free ) (void*) ;} ;
typedef TYPE_1__ retro_resampler_t ;
typedef enum resampler_quality { ____Placeholder_resampler_quality } resampler_quality ;


 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (void**,TYPE_1__ const**,int,double) ;
 int FUNC_2 (void*) ;

bool FUNC_3(void **VAR_0, const retro_resampler_t **VAR_1,
      const char *VAR_2, enum resampler_quality VAR_3, double VAR_4)
{
   if (*VAR_0 && *VAR_1)
      (*VAR_1)->free(*VAR_0);

   *VAR_0 = ((void*)0);
   *VAR_1 = FUNC_0(VAR_2);

   if (!FUNC_1(VAR_0, VAR_1, VAR_3, VAR_4))
   {
      if (!*VAR_0)
         *VAR_1 = ((void*)0);
      return 0;
   }

   return 1;
}
