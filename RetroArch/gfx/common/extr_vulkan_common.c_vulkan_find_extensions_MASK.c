
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extensionName; } ;
typedef TYPE_1__ VkExtensionProperties ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static bool FUNC_1(const char **VAR_0, unsigned VAR_1,
      const VkExtensionProperties *VAR_2, unsigned VAR_3)
{
   unsigned VAR_4, VAR_5;
   bool VAR_6;
   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      VAR_6 = 0;
      for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
      {
         if (FUNC_0(VAR_0[VAR_5], VAR_2[VAR_4].extensionName))
         {
            VAR_6 = 1;
            break;
         }
      }

      if (!VAR_6)
         return 0;
   }
   return 1;
}
