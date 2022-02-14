
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int VkPhysicalDevice ;
typedef int VkExtensionProperties ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (void*,char const**,unsigned int) ;
 scalar_t__ FUNC_4 (int ,int *,int*,int *) ;
 scalar_t__ FUNC_5 (char const**,int,int *,int) ;

__attribute__((used)) static bool FUNC_6(VkPhysicalDevice VAR_1,
      const char **VAR_2, unsigned *VAR_3,
      const char **VAR_4, unsigned VAR_5,
      const char **VAR_6, unsigned VAR_7)
{
   uint32_t VAR_8;
   unsigned VAR_9;
   bool VAR_10 = 1;
   VkExtensionProperties *VAR_11 = ((void*)0);

   if (FUNC_4(VAR_1, ((void*)0), &VAR_8, ((void*)0)) != VAR_0)
      return 0;

   VAR_11 = (VkExtensionProperties*)FUNC_2(VAR_8 * sizeof(*VAR_11));
   if (!VAR_11)
   {
      VAR_10 = 0;
      goto end;
   }

   if (FUNC_4(VAR_1, ((void*)0), &VAR_8, VAR_11) != VAR_0)
   {
      VAR_10 = 0;
      goto end;
   }

   if (!FUNC_5(VAR_4, VAR_5, VAR_11, VAR_8))
   {
      FUNC_0("[Vulkan]: Could not find device extension. Will attempt without it.\n");
      VAR_10 = 0;
      goto end;
   }

   FUNC_3((void*)VAR_2, VAR_4, VAR_5 * sizeof(*VAR_4));
   *VAR_3 = VAR_5;

   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
      if (FUNC_5(&VAR_6[VAR_9], 1, VAR_11, VAR_8))
         VAR_2[(*VAR_3)++] = VAR_6[VAR_9];

end:
   FUNC_1(VAR_11);
   return VAR_10;
}
