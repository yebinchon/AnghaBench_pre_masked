
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum menu_display_driver_type { ____Placeholder_menu_display_driver_type } menu_display_driver_type ;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(
      enum menu_display_driver_type VAR_0,
      bool VAR_1)
{
   const char *VAR_2 = FUNC_1();

   switch (VAR_0)
   {
      case 138:
         return 1;
      case 136:
         if (FUNC_0(VAR_2, "gl"))
            return 1;
         break;
      case 135:
         if (FUNC_0(VAR_2, "gl1"))
            return 1;
         break;
      case 134:
         if (FUNC_0(VAR_2, "glcore"))
            return 1;
         break;
      case 129:
         if (FUNC_0(VAR_2, "vulkan"))
            return 1;
         break;
      case 137:
         if (FUNC_0(VAR_2, "metal"))
            return 1;
         break;
      case 142:
         if (FUNC_0(VAR_2, "d3d8"))
            return 1;
         break;
      case 141:
         if (FUNC_0(VAR_2, "d3d9"))
            return 1;
         break;
      case 145:
         if (FUNC_0(VAR_2, "d3d10"))
            return 1;
         break;
      case 144:
         if (FUNC_0(VAR_2, "d3d11"))
            return 1;
         break;
      case 143:
         if (FUNC_0(VAR_2, "d3d12"))
            return 1;
         break;
      case 130:
         if (FUNC_0(VAR_2, "vita2d"))
            return 1;
         break;
      case 146:
         if (FUNC_0(VAR_2, "ctr"))
            return 1;
         break;
      case 128:
         if (FUNC_0(VAR_2, "gx2"))
            return 1;
         break;
      case 133:
         if (FUNC_0(VAR_2, "sixel"))
            return 1;
         break;
      case 147:
         if (FUNC_0(VAR_2, "caca"))
            return 1;
         break;
      case 139:
         if (FUNC_0(VAR_2, "gdi"))
            return 1;
         break;
      case 131:
         if (FUNC_0(VAR_2, "vga"))
            return 1;
         break;
      case 140:
         if (FUNC_0(VAR_2, "fpga"))
            return 1;
         break;
      case 132:
         if (FUNC_0(VAR_2, "switch"))
            return 1;
         break;
   }

   return 0;
}
