
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VkExtensionProperties ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int*,int *) ;
 int FUNC_4 (char const**,unsigned int,int *,int) ;

__attribute__((used)) static bool FUNC_5(const char **VAR_1, unsigned VAR_2)
{
   uint32_t VAR_3;
   bool VAR_4 = 1;
   VkExtensionProperties *VAR_5 = ((void*)0);

   if (FUNC_3(((void*)0), &VAR_3, ((void*)0)) != VAR_0)
      return 0;

   VAR_5 = (VkExtensionProperties*)FUNC_2(VAR_3 * sizeof(*VAR_5));
   if (!VAR_5)
   {
      VAR_4 = 0;
      goto end;
   }

   if (FUNC_3(((void*)0), &VAR_3, VAR_5) != VAR_0)
   {
      VAR_4 = 0;
      goto end;
   }

   if (!FUNC_4(VAR_1, VAR_2, VAR_5, VAR_3))
   {
      FUNC_0("[Vulkan]: Could not find instance extensions. Will attempt without them.\n");
      VAR_4 = 0;
      goto end;
   }

end:
   FUNC_1(VAR_5);
   return VAR_4;
}
