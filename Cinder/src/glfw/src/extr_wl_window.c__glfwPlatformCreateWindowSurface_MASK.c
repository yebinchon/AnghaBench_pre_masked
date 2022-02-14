
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sci ;
struct TYPE_10__ {int surface; } ;
struct TYPE_11__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_12__ {int surface; int display; int sType; } ;
typedef TYPE_4__ VkWaylandSurfaceCreateInfoKHR ;
typedef int VkSurfaceKHR ;
typedef scalar_t__ VkResult ;
typedef int VkInstance ;
typedef int VkAllocationCallbacks ;
struct TYPE_9__ {int display; } ;
struct TYPE_13__ {TYPE_1__ wl; } ;
typedef scalar_t__ (* PFN_vkCreateWaylandSurfaceKHR ) (int ,TYPE_4__*,int const*,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_8__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_3 (int ,char*) ;

VkResult FUNC_4(VkInstance VAR_5,
                                          _GLFWwindow* VAR_6,
                                          const VkAllocationCallbacks* VAR_7,
                                          VkSurfaceKHR* VAR_8)
{
    VkResult VAR_9;
    VkWaylandSurfaceCreateInfoKHR VAR_10;
    PFN_vkCreateWaylandSurfaceKHR VAR_11;

    VAR_11 = (PFN_vkCreateWaylandSurfaceKHR)
        FUNC_3(VAR_5, "vkCreateWaylandSurfaceKHR");
    if (!VAR_11)
    {
        FUNC_1(VAR_0,
                        "Wayland: Vulkan instance missing VK_KHR_wayland_surface extension");
        return VAR_2;
    }

    FUNC_2(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.sType = VAR_3;
    VAR_10.display = VAR_4.wl.display;
    VAR_10.surface = VAR_6->wl.surface;

    VAR_9 = VAR_11(VAR_5, &VAR_10, VAR_7, VAR_8);
    if (VAR_9)
    {
        FUNC_1(VAR_1,
                        "Wayland: Failed to create Vulkan surface: %s",
                        FUNC_0(VAR_9));
    }

    return VAR_9;
}
