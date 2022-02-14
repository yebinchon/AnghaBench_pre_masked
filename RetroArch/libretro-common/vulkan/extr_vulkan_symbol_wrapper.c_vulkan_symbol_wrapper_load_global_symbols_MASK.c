
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VkBool32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

VkBool32 FUNC_1(void)
{
    if (!FUNC_0(((void*)0), "vkCreateInstance", VAR_2)) return VAR_0;
    if (!FUNC_0(((void*)0), "vkEnumerateInstanceExtensionProperties", VAR_3)) return VAR_0;
    if (!FUNC_0(((void*)0), "vkEnumerateInstanceLayerProperties", VAR_4)) return VAR_0;
    return VAR_1;
}
