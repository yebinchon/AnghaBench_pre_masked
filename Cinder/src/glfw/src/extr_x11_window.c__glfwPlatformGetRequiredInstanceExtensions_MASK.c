
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ handle; } ;
struct TYPE_7__ {TYPE_2__ x11xcb; } ;
struct TYPE_5__ {scalar_t__ KHR_xcb_surface; int KHR_xlib_surface; } ;
struct TYPE_8__ {TYPE_3__ x11; TYPE_1__ vk; } ;


 TYPE_4__ VAR_0 ;
 char** FUNC_0 (int,int) ;
 char* FUNC_1 (char*) ;

char** FUNC_2(uint32_t* VAR_1)
{
    char** VAR_2;

    *VAR_1 = 0;

    if (!VAR_0.vk.KHR_xcb_surface || !VAR_0.x11.x11xcb.handle)
    {
        if (!VAR_0.vk.KHR_xlib_surface)
            return ((void*)0);
    }

    VAR_2 = FUNC_0(2, sizeof(char*));
    VAR_2[0] = FUNC_1("VK_KHR_surface");

    if (VAR_0.vk.KHR_xcb_surface && VAR_0.x11.x11xcb.handle)
        VAR_2[1] = FUNC_1("VK_KHR_xcb_surface");
    else
        VAR_2[1] = FUNC_1("VK_KHR_xlib_surface");

    *VAR_1 = 2;
    return VAR_2;
}
