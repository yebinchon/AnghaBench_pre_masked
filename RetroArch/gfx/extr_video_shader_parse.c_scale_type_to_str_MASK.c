
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum gfx_scale_type { ____Placeholder_gfx_scale_type } gfx_scale_type ;






__attribute__((used)) static const char *FUNC_0(enum gfx_scale_type VAR_0)
{
   switch (VAR_0)
   {
      case 129:
         return "source";
      case 128:
         return "viewport";
      case 130:
         return "absolute";
      default:
         break;
   }

   return "?";
}
