
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int retro_resampler_t ;


 int FUNC_0 (char const*) ;
 int const** VAR_0 ;

__attribute__((used)) static const retro_resampler_t *FUNC_1(const char *VAR_1)
{
   int VAR_2 = FUNC_0(VAR_1);

   if (VAR_2 >= 0)
      return VAR_0[VAR_2];

   return VAR_0[0];
}
