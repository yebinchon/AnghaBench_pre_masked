
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ surface; int context; int config; } ;
struct TYPE_9__ {TYPE_2__ egl; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_7__ {int display; } ;
struct TYPE_10__ {TYPE_1__ egl; } ;
typedef int EGLNativeWindowType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(_GLFWwindow* VAR_5)
{
    if (VAR_5)
    {
        if (VAR_5->egl.surface == VAR_1)
        {
            VAR_5->egl.surface =
                FUNC_2(VAR_4.egl.display,
                                             VAR_5->egl.config,
                                             (EGLNativeWindowType)VAR_3,
                                             ((void*)0));
            if (VAR_5->egl.surface == VAR_1)
            {
                FUNC_0(VAR_2,
                                "EGL: Failed to create window surface: %s",
                                FUNC_5(FUNC_3()));
            }
        }

        FUNC_4(VAR_4.egl.display,
                             VAR_5->egl.surface,
                             VAR_5->egl.surface,
                             VAR_5->egl.context);
    }
    else
    {
        FUNC_4(VAR_4.egl.display,
                             VAR_1,
                             VAR_1,
                             VAR_0);
    }

    FUNC_1(VAR_5);
}
