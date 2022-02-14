
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct wl_output {int dummy; } ;
struct TYPE_9__ {int modesCount; int modesSize; TYPE_4__* modes; } ;
struct _GLFWmonitor {TYPE_3__ wl; } ;
typedef int int32_t ;
struct TYPE_8__ {int width; int height; int refreshRate; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_10__ {int flags; TYPE_2__ base; TYPE_1__ member_0; } ;
typedef TYPE_4__ _GLFWvidmodeWayland ;


 TYPE_4__* FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_1(void* VAR_0,
                 struct wl_output* VAR_1,
                 uint32_t VAR_2,
                 int32_t VAR_3,
                 int32_t VAR_4,
                 int32_t VAR_5)
{
    struct _GLFWmonitor *VAR_6 = VAR_0;
    _GLFWvidmodeWayland VAR_7 = { 0 , };

    VAR_7.base.width = VAR_3;
    VAR_7.base.height = VAR_4;
    VAR_7.base.refreshRate = VAR_5 / 1000;
    VAR_7.flags = VAR_2;

    if (VAR_6->wl.modesCount + 1 >= VAR_6->wl.modesSize)
    {
        int VAR_8 = VAR_6->wl.modesSize * 2;
        _GLFWvidmodeWayland* VAR_9 =
            FUNC_0(VAR_6->wl.modes,
                    VAR_8 * sizeof(_GLFWvidmodeWayland));
        VAR_6->wl.modes = VAR_9;
        VAR_6->wl.modesSize = VAR_8;
    }

    VAR_6->wl.modes[VAR_6->wl.modesCount++] = VAR_7;
}
