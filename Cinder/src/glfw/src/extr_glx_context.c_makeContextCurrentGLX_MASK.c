
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * handle; int window; } ;
struct TYPE_9__ {TYPE_1__ glx; } ;
struct TYPE_11__ {TYPE_2__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_10__ {int display; } ;
struct TYPE_12__ {TYPE_3__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(_GLFWwindow* VAR_3)
{
    if (VAR_3)
    {
        if (!FUNC_2(VAR_2.x11.display,
                            VAR_3->context.glx.window,
                            VAR_3->context.glx.handle))
        {
            FUNC_0(VAR_0,
                            "GLX: Failed to make context current");
            return;
        }
    }
    else
    {
        if (!FUNC_2(VAR_2.x11.display, VAR_1, ((void*)0)))
        {
            FUNC_0(VAR_0,
                            "GLX: Failed to clear current context");
            return;
        }
    }

    FUNC_1(VAR_3);
}
