
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int surface; } ;
struct TYPE_10__ {TYPE_2__ egl; } ;
struct TYPE_11__ {TYPE_3__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_8__ {int display; } ;
struct TYPE_12__ {TYPE_1__ egl; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_2)
{
    if (VAR_2 != FUNC_1())
    {
        FUNC_0(VAR_0,
                        "EGL: The context must be current on the calling thread when swapping buffers");
        return;
    }

    FUNC_2(VAR_1.egl.display, VAR_2->context.egl.surface);
}
