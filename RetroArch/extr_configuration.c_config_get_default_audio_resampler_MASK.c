
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum audio_resampler_driver_enum { ____Placeholder_audio_resampler_driver_enum } audio_resampler_driver_enum ;


 int VAR_0 ;





const char *FUNC_0(void)
{
   enum audio_resampler_driver_enum VAR_1 = VAR_0;

   switch (VAR_1)
   {
      case 131:
         return "cc";
      case 128:
         return "sinc";
      case 130:
         return "nearest";
      case 129:
         break;
   }

   return "null";
}
