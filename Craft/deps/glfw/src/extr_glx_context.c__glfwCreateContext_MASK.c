
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_17__ {void* context; int visual; } ;
struct TYPE_18__ {TYPE_5__ glx; } ;
typedef TYPE_6__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_19__ {scalar_t__ api; int forward; scalar_t__ profile; scalar_t__ robustness; scalar_t__ release; int major; int minor; scalar_t__ debug; TYPE_2__* share; } ;
typedef TYPE_7__ _GLFWctxconfig ;
struct TYPE_16__ {scalar_t__ errorBase; void* (* CreateContextAttribsARB ) (int ,int *,int *,int ,int*) ;scalar_t__ ARB_context_flush_control; scalar_t__ ARB_create_context_robustness; scalar_t__ ARB_create_context; int ARB_create_context_profile; int EXT_create_context_es2_profile; } ;
struct TYPE_15__ {scalar_t__ errorCode; int display; } ;
struct TYPE_13__ {int * context; } ;
struct TYPE_14__ {TYPE_1__ glx; } ;
struct TYPE_12__ {TYPE_4__ glx; TYPE_3__ x11; } ;
typedef int * GLXFBConfig ;
typedef int * GLXContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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
 TYPE_11__ VAR_34 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int const*,int **) ;
 void* FUNC_6 (TYPE_6__*,int *,int *) ;
 int FUNC_7 (int,int) ;
 void* FUNC_8 (int ,int *,int *,int ,int*) ;

int FUNC_9(_GLFWwindow* VAR_35,
                       const _GLFWctxconfig* VAR_36,
                       const _GLFWfbconfig* VAR_37)
{
    int VAR_38[40];
    GLXFBConfig VAR_39 = ((void*)0);
    GLXContext VAR_40 = ((void*)0);

    if (VAR_36->share)
        VAR_40 = VAR_36->share->glx.context;

    if (!FUNC_5(VAR_37, &VAR_39))
    {
        FUNC_1(VAR_1,
                        "GLX: Failed to find a suitable GLXFBConfig");
        return VAR_30;
    }

    VAR_35->glx.visual = FUNC_4(VAR_34.x11.display,
                                                        VAR_39);
    if (!VAR_35->glx.visual)
    {
        FUNC_1(VAR_9,
                        "GLX: Failed to retrieve visual for GLXFBConfig");
        return VAR_30;
    }

    if (VAR_36->api == VAR_8)
    {
        if (!VAR_34.glx.ARB_create_context ||
            !VAR_34.glx.ARB_create_context_profile ||
            !VAR_34.glx.EXT_create_context_es2_profile)
        {
            FUNC_1(VAR_0,
                            "GLX: OpenGL ES requested but GLX_EXT_create_context_es2_profile is unavailable");
            return VAR_30;
        }
    }

    if (VAR_36->forward)
    {
        if (!VAR_34.glx.ARB_create_context)
        {
            FUNC_1(VAR_12,
                            "GLX: Forward compatibility requested but GLX_ARB_create_context_profile is unavailable");
            return VAR_30;
        }
    }

    if (VAR_36->profile)
    {
        if (!VAR_34.glx.ARB_create_context ||
            !VAR_34.glx.ARB_create_context_profile)
        {
            FUNC_1(VAR_12,
                            "GLX: An OpenGL profile requested but GLX_ARB_create_context_profile is unavailable");
            return VAR_30;
        }
    }

    FUNC_0();

    if (VAR_34.glx.ARB_create_context)
    {
        int VAR_41 = 0, VAR_42 = 0, VAR_43 = 0;

        if (VAR_36->api == VAR_5)
        {
            if (VAR_36->forward)
                VAR_43 |= VAR_19;

            if (VAR_36->profile == VAR_7)
                VAR_42 |= VAR_15;
            else if (VAR_36->profile == VAR_6)
                VAR_42 |= VAR_14;
        }
        else
            VAR_42 |= VAR_17;

        if (VAR_36->debug)
            VAR_43 |= VAR_16;

        if (VAR_36->robustness)
        {
            if (VAR_34.glx.ARB_create_context_robustness)
            {
                if (VAR_36->robustness == VAR_3)
                {
                    FUNC_7(VAR_26,
                                 VAR_29);
                }
                else if (VAR_36->robustness == VAR_2)
                {
                    FUNC_7(VAR_26,
                                 VAR_28);
                }

                VAR_43 |= VAR_27;
            }
        }

        if (VAR_36->release)
        {
            if (VAR_34.glx.ARB_context_flush_control)
            {
                if (VAR_36->release == VAR_11)
                {
                    FUNC_7(VAR_23,
                                 VAR_25);
                }
                else if (VAR_36->release == VAR_10)
                {
                    FUNC_7(VAR_23,
                                 VAR_24);
                }
            }
        }




        if (VAR_36->major != 1 || VAR_36->minor != 0)
        {
            FUNC_7(VAR_20, VAR_36->major);
            FUNC_7(VAR_21, VAR_36->minor);
        }

        if (VAR_42)
            FUNC_7(VAR_22, VAR_42);

        if (VAR_43)
            FUNC_7(VAR_18, VAR_43);

        FUNC_7(VAR_32, VAR_32);

        VAR_35->glx.context =
            VAR_34.glx.CreateContextAttribsARB(VAR_34.x11.display,
                                              VAR_39,
                                              VAR_40,
                                              VAR_33,
                                              VAR_38);





        if (!VAR_35->glx.context)
        {
            if (VAR_34.x11.errorCode == VAR_34.glx.errorBase + VAR_13 &&
                VAR_36->api == VAR_5 &&
                VAR_36->profile == VAR_4 &&
                VAR_36->forward == VAR_30)
            {
                VAR_35->glx.context = FUNC_6(VAR_35, VAR_39, VAR_40);
            }
        }
    }
    else
        VAR_35->glx.context = FUNC_6(VAR_35, VAR_39, VAR_40);

    FUNC_3();

    if (!VAR_35->glx.context)
    {
        FUNC_2(VAR_12, "GLX: Failed to create context");
        return VAR_30;
    }

    return VAR_31;
}
