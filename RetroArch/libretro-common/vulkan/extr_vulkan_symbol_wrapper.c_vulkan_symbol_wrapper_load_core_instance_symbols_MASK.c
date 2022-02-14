
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VkInstance ;
typedef int VkBool32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

VkBool32 FUNC_1(VkInstance VAR_15)
{
    if (!FUNC_0(VAR_15, "vkDestroyInstance", VAR_3)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkEnumeratePhysicalDevices", VAR_6)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceFeatures", VAR_8)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceFormatProperties", VAR_9)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceImageFormatProperties", VAR_10)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceProperties", VAR_12)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceQueueFamilyProperties", VAR_13)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceMemoryProperties", VAR_11)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetDeviceProcAddr", VAR_7)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkCreateDevice", VAR_2)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkEnumerateDeviceExtensionProperties", VAR_4)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkEnumerateDeviceLayerProperties", VAR_5)) return VAR_0;
    if (!FUNC_0(VAR_15, "vkGetPhysicalDeviceSparseImageFormatProperties", VAR_14)) return VAR_0;
    return VAR_1;
}
