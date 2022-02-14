
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int pfd ;
struct TYPE_15__ {scalar_t__ context; int dc; scalar_t__ (* CreateContextAttribsARB ) (int ,int *,int*) ;scalar_t__ ARB_context_flush_control; scalar_t__ ARB_create_context_robustness; scalar_t__ ARB_create_context; } ;
struct TYPE_14__ {int handle; } ;
struct TYPE_16__ {TYPE_4__ wgl; TYPE_3__ win32; } ;
typedef TYPE_5__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_17__ {scalar_t__ api; scalar_t__ profile; scalar_t__ robustness; scalar_t__ release; int major; int minor; scalar_t__ debug; scalar_t__ forward; TYPE_2__* share; } ;
typedef TYPE_6__ _GLFWctxconfig ;
struct TYPE_12__ {int * context; } ;
struct TYPE_13__ {TYPE_1__ wgl; } ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int * HGLRC ;


 int FUNC_0 (int ,int,int,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
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
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_5__*,int const*,int*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int *,int*) ;

int FUNC_11(_GLFWwindow* VAR_27,
                       const _GLFWctxconfig* VAR_28,
                       const _GLFWfbconfig* VAR_29)
{
    int VAR_30[40];
    int VAR_31 = 0;
    PIXELFORMATDESCRIPTOR VAR_32;
    HGLRC VAR_33 = ((void*)0);

    if (VAR_28->share)
        VAR_33 = VAR_28->share->wgl.context;

    VAR_27->wgl.dc = FUNC_1(VAR_27->win32.handle);
    if (!VAR_27->wgl.dc)
    {
        FUNC_3(VAR_5,
                        "WGL: Failed to retrieve DC for window");
        return VAR_9;
    }

    if (!FUNC_7(VAR_27, VAR_29, &VAR_31))
        return VAR_9;

    if (!FUNC_0(VAR_27->wgl.dc, VAR_31, sizeof(VAR_32), &VAR_32))
    {
        FUNC_3(VAR_5,
                        "WGL: Failed to retrieve PFD for selected pixel format");
        return VAR_9;
    }

    if (!FUNC_2(VAR_27->wgl.dc, VAR_31, &VAR_32))
    {
        FUNC_3(VAR_5,
                        "WGL: Failed to set selected pixel format");
        return VAR_9;
    }

    if (VAR_27->wgl.ARB_create_context)
    {
        int VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;

        if (VAR_28->api == VAR_2)
        {
            if (VAR_28->forward)
                VAR_36 |= VAR_16;

            if (VAR_28->profile == VAR_4)
                VAR_35 |= VAR_12;
            else if (VAR_28->profile == VAR_3)
                VAR_35 |= VAR_11;
        }
        else
            VAR_35 |= VAR_14;

        if (VAR_28->debug)
            VAR_36 |= VAR_13;

        if (VAR_28->robustness)
        {
            if (VAR_27->wgl.ARB_create_context_robustness)
            {
                if (VAR_28->robustness == VAR_1)
                {
                    FUNC_9(VAR_23,
                                 VAR_26);
                }
                else if (VAR_28->robustness == VAR_0)
                {
                    FUNC_9(VAR_23,
                                 VAR_25);
                }

                VAR_36 |= VAR_24;
            }
        }

        if (VAR_28->release)
        {
            if (VAR_27->wgl.ARB_context_flush_control)
            {
                if (VAR_28->release == VAR_7)
                {
                    FUNC_9(VAR_20,
                                 VAR_22);
                }
                else if (VAR_28->release == VAR_6)
                {
                    FUNC_9(VAR_20,
                                 VAR_21);
                }
            }
        }




        if (VAR_28->major != 1 || VAR_28->minor != 0)
        {
            FUNC_9(VAR_17, VAR_28->major);
            FUNC_9(VAR_18, VAR_28->minor);
        }

        if (VAR_36)
            FUNC_9(VAR_15, VAR_36);

        if (VAR_35)
            FUNC_9(VAR_19, VAR_35);

        FUNC_9(0, 0);

        VAR_27->wgl.context = VAR_27->wgl.CreateContextAttribsARB(VAR_27->wgl.dc,
                                                                  VAR_33,
                                                                  VAR_30);
        if (!VAR_27->wgl.context)
        {
            FUNC_3(VAR_8,
                            "WGL: Failed to create OpenGL context");
            return VAR_9;
        }
    }
    else
    {
        VAR_27->wgl.context = FUNC_5(VAR_27->wgl.dc);
        if (!VAR_27->wgl.context)
        {
            FUNC_3(VAR_8,
                            "WGL: Failed to create OpenGL context");
            return VAR_9;
        }

        if (VAR_33)
        {
            if (!FUNC_6(VAR_33, VAR_27->wgl.context))
            {
                FUNC_3(VAR_5,
                                "WGL: Failed to enable sharing with specified OpenGL context");
                return VAR_9;
            }
        }
    }

    FUNC_4(VAR_27);
    FUNC_8(VAR_27);

    return VAR_10;
}
