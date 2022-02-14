
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resampler_data {int dummy; } ;
struct TYPE_2__ {int (* process ) (void*,struct resampler_data*) ;} ;
typedef TYPE_1__ rarch_CC_resampler_t ;


 int FUNC_0 (void*,struct resampler_data*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct resampler_data *VAR_1)
{
   rarch_CC_resampler_t *VAR_2 = (rarch_CC_resampler_t*)VAR_0;
   if (VAR_2)
      VAR_2->process(VAR_0, VAR_1);
}
