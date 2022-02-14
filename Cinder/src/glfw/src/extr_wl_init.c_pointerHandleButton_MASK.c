
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_pointer {int dummy; } ;
typedef int _GLFWwindow ;
struct TYPE_4__ {int modifiers; } ;
struct TYPE_5__ {TYPE_1__ xkb; int * pointerFocus; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(void* VAR_5,
                                struct wl_pointer* VAR_6,
                                uint32_t VAR_7,
                                uint32_t VAR_8,
                                uint32_t VAR_9,
                                uint32_t VAR_10)
{
    _GLFWwindow* VAR_11 = VAR_4.wl.pointerFocus;
    int VAR_12;

    if (!VAR_11)
        return;



    VAR_12 = VAR_9 - VAR_0;

    FUNC_0(VAR_11,
                         VAR_12,
                         VAR_10 == VAR_3
                                ? VAR_1
                                : VAR_2,
                         VAR_4.wl.xkb.modifiers);
}
