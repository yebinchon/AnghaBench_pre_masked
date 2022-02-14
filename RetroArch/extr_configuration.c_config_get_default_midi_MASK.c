
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum midi_driver_enum { ____Placeholder_midi_driver_enum } midi_driver_enum ;



 int VAR_0 ;



const char *FUNC_0(void)
{
   enum midi_driver_enum VAR_1 = VAR_0;

   switch (VAR_1)
   {
      case 128:
         return "winmm";
      case 130:
         return "alsa";
      case 129:
         break;
   }

   return "null";
}
