
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum retro_hw_context_type { ____Placeholder_retro_hw_context_type } retro_hw_context_type ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
__attribute__((used)) static bool FUNC_2(enum retro_hw_context_type VAR_0,
      unsigned VAR_1, unsigned VAR_2)
{
   switch (VAR_0)
   {
      case 134:
         FUNC_1("Requesting no HW context.\n");
         break;

      case 128:




         FUNC_0("Requesting Vulkan context, but RetroArch is not compiled against Vulkan. Cannot use HW context.\n");
         return 0;
      default:
         FUNC_1("Requesting unknown context.\n");
         return 0;
   }

   return 1;
}
