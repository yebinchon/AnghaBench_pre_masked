
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_23__ {int window; void* handle; } ;
struct TYPE_24__ {int destroy; int getProcAddress; int extensionSupported; int swapInterval; int swapBuffers; int makeCurrent; TYPE_7__ glx; } ;
struct TYPE_22__ {int handle; } ;
struct TYPE_25__ {TYPE_8__ context; TYPE_6__ x11; } ;
typedef TYPE_9__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_15__ {scalar_t__ client; scalar_t__ forward; scalar_t__ profile; scalar_t__ robustness; scalar_t__ release; int major; int minor; scalar_t__ noerror; scalar_t__ debug; TYPE_3__* share; } ;
typedef TYPE_10__ _GLFWctxconfig ;
struct TYPE_21__ {scalar_t__ errorCode; int display; } ;
struct TYPE_20__ {scalar_t__ errorBase; void* (* CreateContextAttribsARB ) (int ,int *,int *,int ,int*) ;scalar_t__ ARB_context_flush_control; scalar_t__ ARB_create_context_robustness; scalar_t__ ARB_create_context; int ARB_create_context_profile; int EXT_create_context_es2_profile; } ;
struct TYPE_17__ {int * handle; } ;
struct TYPE_18__ {TYPE_1__ glx; } ;
struct TYPE_19__ {TYPE_2__ context; } ;
struct TYPE_16__ {TYPE_5__ x11; TYPE_4__ glx; } ;
typedef int * GLXFBConfig ;
typedef int * GLXContext ;
typedef scalar_t__ GLFWbool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 TYPE_14__ VAR_35 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int const*,int **) ;
 void* FUNC_5 (TYPE_9__*,int *,int *) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int VAR_39 ;
 int FUNC_7 (int,int) ;
 void* FUNC_8 (int ,int *,int *,int ,int*) ;
 int VAR_40 ;
 int VAR_41 ;

GLFWbool FUNC_9(_GLFWwindow* VAR_42,
                               const _GLFWctxconfig* VAR_43,
                               const _GLFWfbconfig* VAR_44)
{
    int VAR_45[40];
    GLXFBConfig VAR_46 = ((void*)0);
    GLXContext VAR_47 = ((void*)0);

    if (VAR_43->share)
        VAR_47 = VAR_43->share->context.glx.handle;

    if (!FUNC_4(VAR_44, &VAR_46))
    {
        FUNC_1(VAR_2,
                        "GLX: Failed to find a suitable GLXFBConfig");
        return VAR_1;
    }

    if (VAR_43->client == VAR_9)
    {
        if (!VAR_35.glx.ARB_create_context ||
            !VAR_35.glx.ARB_create_context_profile ||
            !VAR_35.glx.EXT_create_context_es2_profile)
        {
            FUNC_1(VAR_0,
                            "GLX: OpenGL ES requested but GLX_EXT_create_context_es2_profile is unavailable");
            return VAR_1;
        }
    }

    if (VAR_43->forward)
    {
        if (!VAR_35.glx.ARB_create_context)
        {
            FUNC_1(VAR_14,
                            "GLX: Forward compatibility requested but GLX_ARB_create_context_profile is unavailable");
            return VAR_1;
        }
    }

    if (VAR_43->profile)
    {
        if (!VAR_35.glx.ARB_create_context ||
            !VAR_35.glx.ARB_create_context_profile)
        {
            FUNC_1(VAR_14,
                            "GLX: An OpenGL profile requested but GLX_ARB_create_context_profile is unavailable");
            return VAR_1;
        }
    }

    FUNC_0();

    if (VAR_35.glx.ARB_create_context)
    {
        int VAR_48 = 0, VAR_49 = 0, VAR_50 = 0;

        if (VAR_43->client == VAR_6)
        {
            if (VAR_43->forward)
                VAR_50 |= VAR_21;

            if (VAR_43->profile == VAR_8)
                VAR_49 |= VAR_17;
            else if (VAR_43->profile == VAR_7)
                VAR_49 |= VAR_16;
        }
        else
            VAR_49 |= VAR_19;

        if (VAR_43->debug)
            VAR_50 |= VAR_18;
        if (VAR_43->noerror)
            VAR_50 |= VAR_32;

        if (VAR_43->robustness)
        {
            if (VAR_35.glx.ARB_create_context_robustness)
            {
                if (VAR_43->robustness == VAR_4)
                {
                    FUNC_7(VAR_28,
                                 VAR_31);
                }
                else if (VAR_43->robustness == VAR_3)
                {
                    FUNC_7(VAR_28,
                                 VAR_30);
                }

                VAR_50 |= VAR_29;
            }
        }

        if (VAR_43->release)
        {
            if (VAR_35.glx.ARB_context_flush_control)
            {
                if (VAR_43->release == VAR_12)
                {
                    FUNC_7(VAR_25,
                                 VAR_27);
                }
                else if (VAR_43->release == VAR_11)
                {
                    FUNC_7(VAR_25,
                                 VAR_26);
                }
            }
        }




        if (VAR_43->major != 1 || VAR_43->minor != 0)
        {
            FUNC_7(VAR_22, VAR_43->major);
            FUNC_7(VAR_23, VAR_43->minor);
        }

        if (VAR_49)
            FUNC_7(VAR_24, VAR_49);

        if (VAR_50)
            FUNC_7(VAR_20, VAR_50);

        FUNC_7(VAR_33, VAR_33);

        VAR_42->context.glx.handle =
            VAR_35.glx.CreateContextAttribsARB(VAR_35.x11.display,
                                              VAR_46,
                                              VAR_47,
                                              VAR_34,
                                              VAR_45);





        if (!VAR_42->context.glx.handle)
        {
            if (VAR_35.x11.errorCode == VAR_35.glx.errorBase + VAR_15 &&
                VAR_43->client == VAR_6 &&
                VAR_43->profile == VAR_5 &&
                VAR_43->forward == VAR_1)
            {
                VAR_42->context.glx.handle =
                    FUNC_5(VAR_42, VAR_46, VAR_47);
            }
        }
    }
    else
    {
        VAR_42->context.glx.handle =
            FUNC_5(VAR_42, VAR_46, VAR_47);
    }

    FUNC_3();

    if (!VAR_42->context.glx.handle)
    {
        FUNC_2(VAR_14, "GLX: Failed to create context");
        return VAR_1;
    }

    VAR_42->context.glx.window =
        FUNC_6(VAR_35.x11.display, VAR_46, VAR_42->x11.handle, ((void*)0));
    if (!VAR_42->context.glx.window)
    {
        FUNC_1(VAR_10, "GLX: Failed to create window");
        return VAR_1;
    }

    VAR_42->context.makeCurrent = VAR_39;
    VAR_42->context.swapBuffers = VAR_40;
    VAR_42->context.swapInterval = VAR_41;
    VAR_42->context.extensionSupported = VAR_37;
    VAR_42->context.getProcAddress = VAR_38;
    VAR_42->context.destroy = VAR_36;

    return VAR_13;
}
