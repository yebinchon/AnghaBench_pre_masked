
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_wrap_type { ____Placeholder_gfx_wrap_type } gfx_wrap_type ;







__attribute__((used)) static const char *FUNC_0(enum gfx_wrap_type VAR_0)
{
   switch (VAR_0)
   {
      case 131:
         return "clamp_to_border";
      case 130:
         return "clamp_to_edge";
      case 128:
         return "repeat";
      case 129:
         return "mirrored_repeat";
      default:
         break;
   }

   return "???";
}
