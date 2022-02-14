
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lockedPointer; } ;
struct TYPE_7__ {int surface; TYPE_1__ pointerLock; } ;
struct TYPE_8__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWwindow ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (double) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(_GLFWwindow* VAR_0, double VAR_1, double VAR_2)
{
    if (FUNC_0(VAR_0))
    {
        FUNC_3(
            VAR_0->wl.pointerLock.lockedPointer,
            FUNC_1(VAR_1), FUNC_1(VAR_2));
        FUNC_2(VAR_0->wl.surface);
    }
}
