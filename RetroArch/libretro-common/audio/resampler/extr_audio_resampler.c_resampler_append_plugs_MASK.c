
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* init ) (int *,double,int,int ) ;} ;
typedef TYPE_1__ retro_resampler_t ;
typedef int resampler_simd_mask_t ;
typedef enum resampler_quality { ____Placeholder_resampler_quality } resampler_quality ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int *,double,int,int ) ;

__attribute__((used)) static bool FUNC_2(void **VAR_1,
      const retro_resampler_t **VAR_2,
      enum resampler_quality VAR_3,
      double VAR_4)
{
   resampler_simd_mask_t VAR_5 = (resampler_simd_mask_t)FUNC_0();

   if (*VAR_2)
      *VAR_1 = (*VAR_2)->init(&VAR_0, VAR_4, VAR_3, VAR_5);

   if (!*VAR_1)
      return 0;
   return 1;
}
