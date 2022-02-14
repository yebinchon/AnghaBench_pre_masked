
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int handle; int surface; } ;
struct TYPE_9__ {TYPE_1__ egl; } ;
struct TYPE_11__ {TYPE_2__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_10__ {int display; } ;
struct TYPE_12__ {TYPE_3__ egl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_4)
{
    if (VAR_4)
    {
        if (!FUNC_3(VAR_3.egl.display,
                            VAR_4->context.egl.surface,
                            VAR_4->context.egl.surface,
                            VAR_4->context.egl.handle))
        {
            FUNC_0(VAR_2,
                            "EGL: Failed to make context current: %s",
                            FUNC_4(FUNC_2()));
            return;
        }
    }
    else
    {
        if (!FUNC_3(VAR_3.egl.display,
                            VAR_1,
                            VAR_1,
                            VAR_0))
        {
            FUNC_0(VAR_2,
                            "EGL: Failed to clear current context: %s",
                            FUNC_4(FUNC_2()));
            return;
        }
    }

    FUNC_1(VAR_4);
}
