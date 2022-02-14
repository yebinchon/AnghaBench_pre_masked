
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zwp_relative_pointer_v1 {int dummy; } ;
struct zwp_locked_pointer_v1 {int dummy; } ;
struct TYPE_5__ {struct zwp_locked_pointer_v1* lockedPointer; struct zwp_relative_pointer_v1* relativePointer; } ;
struct TYPE_6__ {TYPE_1__ pointerLock; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 int FUNC_0 (struct zwp_locked_pointer_v1*) ;
 int FUNC_1 (struct zwp_relative_pointer_v1*) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_0)
{
    struct zwp_relative_pointer_v1* VAR_1 =
        VAR_0->wl.pointerLock.relativePointer;
    struct zwp_locked_pointer_v1* VAR_2 =
        VAR_0->wl.pointerLock.lockedPointer;

    FUNC_1(VAR_1);
    FUNC_0(VAR_2);

    VAR_0->wl.pointerLock.relativePointer = ((void*)0);
    VAR_0->wl.pointerLock.lockedPointer = ((void*)0);
}
