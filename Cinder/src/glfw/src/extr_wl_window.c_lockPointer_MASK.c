
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct zwp_relative_pointer_v1 {int dummy; } ;
struct zwp_locked_pointer_v1 {int dummy; } ;
struct TYPE_9__ {struct zwp_locked_pointer_v1* lockedPointer; struct zwp_relative_pointer_v1* relativePointer; } ;
struct TYPE_10__ {TYPE_1__ pointerLock; int surface; } ;
struct TYPE_12__ {TYPE_2__ wl; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_11__ {int pointerSerial; int pointer; int pointerConstraints; int relativePointerManager; } ;
struct TYPE_13__ {TYPE_3__ wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct zwp_locked_pointer_v1*,int *,TYPE_4__*) ;
 struct zwp_locked_pointer_v1* FUNC_3 (int ,int ,int ,int *,int ) ;
 struct zwp_relative_pointer_v1* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct zwp_relative_pointer_v1*,int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(_GLFWwindow* VAR_5)
{
    struct zwp_relative_pointer_v1* VAR_6;
    struct zwp_locked_pointer_v1* VAR_7;

    if (!VAR_2.wl.relativePointerManager)
    {
        FUNC_0(VAR_0,
                        "Wayland: no relative pointer manager");
        return;
    }

    VAR_6 =
        FUNC_4(
            VAR_2.wl.relativePointerManager,
            VAR_2.wl.pointer);
    FUNC_5(VAR_6,
                                         &VAR_4,
                                         VAR_5);

    VAR_7 =
        FUNC_3(
            VAR_2.wl.pointerConstraints,
            VAR_5->wl.surface,
            VAR_2.wl.pointer,
            ((void*)0),
            VAR_1);
    FUNC_2(VAR_7,
                                       &VAR_3,
                                       VAR_5);

    VAR_5->wl.pointerLock.relativePointer = VAR_6;
    VAR_5->wl.pointerLock.lockedPointer = VAR_7;

    FUNC_1(VAR_2.wl.pointer, VAR_2.wl.pointerSerial,
                          ((void*)0), 0, 0);
}
