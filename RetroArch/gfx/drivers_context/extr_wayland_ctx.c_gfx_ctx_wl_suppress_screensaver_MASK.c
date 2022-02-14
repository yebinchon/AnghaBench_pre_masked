
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zwp_idle_inhibit_manager_v1 {int dummy; } ;
struct TYPE_2__ {int * idle_inhibitor; int surface; struct zwp_idle_inhibit_manager_v1* idle_inhibit_manager; } ;
typedef TYPE_1__ gfx_ctx_wayland_data_t ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (struct zwp_idle_inhibit_manager_v1*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, bool VAR_1)
{
 (void)VAR_0;

 gfx_ctx_wayland_data_t *VAR_2 = (gfx_ctx_wayland_data_t*)VAR_0;

    if (!VAR_2->idle_inhibit_manager)
        return 0;
    if (VAR_1 == (!!VAR_2->idle_inhibitor))
        return 1;
    if (VAR_1)
    {
        FUNC_0("[Wayland]: Enabling idle inhibitor\n");
        struct zwp_idle_inhibit_manager_v1 *VAR_3 = VAR_2->idle_inhibit_manager;
        VAR_2->idle_inhibitor = FUNC_1(VAR_3, VAR_2->surface);
    }
    else
    {
        FUNC_0("[Wayland]: Disabling the idle inhibitor\n");
        FUNC_2(VAR_2->idle_inhibitor);
        VAR_2->idle_inhibitor = ((void*)0);
    }
    return 1;
}
