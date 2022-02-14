
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int pfd ;
struct TYPE_20__ {int handle; int dc; } ;
struct TYPE_21__ {int destroy; int getProcAddress; int extensionSupported; int swapInterval; int swapBuffers; int makeCurrent; TYPE_6__ wgl; } ;
struct TYPE_18__ {int handle; } ;
struct TYPE_22__ {TYPE_7__ context; TYPE_4__ win32; } ;
typedef TYPE_8__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_23__ {scalar_t__ client; scalar_t__ profile; scalar_t__ robustness; scalar_t__ release; int major; int minor; scalar_t__ noerror; scalar_t__ debug; scalar_t__ forward; TYPE_3__* share; } ;
typedef TYPE_9__ _GLFWctxconfig ;
struct TYPE_19__ {int (* CreateContextAttribsARB ) (int ,int *,int*) ;scalar_t__ ARB_context_flush_control; scalar_t__ ARB_create_context_robustness; scalar_t__ ARB_create_context; int EXT_create_context_es2_profile; int ARB_create_context_profile; int extensionsLoaded; } ;
struct TYPE_15__ {int * handle; } ;
struct TYPE_16__ {TYPE_1__ wgl; } ;
struct TYPE_17__ {TYPE_2__ context; } ;
struct TYPE_14__ {TYPE_5__ wgl; } ;
typedef int PIXELFORMATDESCRIPTOR ;
typedef int * HGLRC ;
typedef int GLFWbool ;
typedef int DWORD ;


 int FUNC_0 (int ,int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int *) ;
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
 TYPE_13__ VAR_31 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_8__*,int const*) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_6 () ;
 int VAR_35 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *,int*) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;

GLFWbool FUNC_11(_GLFWwindow* VAR_38,
                               const _GLFWctxconfig* VAR_39,
                               const _GLFWfbconfig* VAR_40)
{
    int VAR_41[40];
    int VAR_42;
    PIXELFORMATDESCRIPTOR VAR_43;
    HGLRC VAR_44 = ((void*)0);

    if (!VAR_31.wgl.extensionsLoaded)
        FUNC_6();

    if (VAR_39->share)
        VAR_44 = VAR_39->share->context.wgl.handle;

    VAR_38->context.wgl.dc = FUNC_1(VAR_38->win32.handle);
    if (!VAR_38->context.wgl.dc)
    {
        FUNC_4(VAR_9,
                        "WGL: Failed to retrieve DC for window");
        return VAR_3;
    }

    VAR_42 = FUNC_5(VAR_38, VAR_40);
    if (!VAR_42)
        return VAR_3;

    if (!FUNC_0(VAR_38->context.wgl.dc,
                             VAR_42, sizeof(VAR_43), &VAR_43))
    {
        FUNC_4(VAR_9,
                        "WGL: Failed to retrieve PFD for selected pixel format");
        return VAR_3;
    }

    if (!FUNC_3(VAR_38->context.wgl.dc, VAR_42, &VAR_43))
    {
        FUNC_4(VAR_9,
                        "WGL: Failed to set selected pixel format");
        return VAR_3;
    }

    if (VAR_39->client == VAR_6)
    {
        if (VAR_39->forward)
        {
            if (!VAR_31.wgl.ARB_create_context)
            {
                FUNC_4(VAR_13,
                                "WGL: A forward compatible OpenGL context requested but WGL_ARB_create_context is unavailable");
                return VAR_3;
            }
        }

        if (VAR_39->profile)
        {
            if (!VAR_31.wgl.ARB_create_context_profile)
            {
                FUNC_4(VAR_13,
                                "WGL: OpenGL profile requested but WGL_ARB_create_context_profile is unavailable");
                return VAR_3;
            }
        }
    }
    else
    {
        if (!VAR_31.wgl.ARB_create_context ||
            !VAR_31.wgl.ARB_create_context_profile ||
            !VAR_31.wgl.EXT_create_context_es2_profile)
        {
            FUNC_4(VAR_2,
                            "WGL: OpenGL ES requested but WGL_ARB_create_context_es2_profile is unavailable");
            return VAR_3;
        }
    }

    if (VAR_31.wgl.ARB_create_context)
    {
        int VAR_45 = 0, VAR_46 = 0, VAR_47 = 0;

        if (VAR_39->client == VAR_6)
        {
            if (VAR_39->forward)
                VAR_47 |= VAR_20;

            if (VAR_39->profile == VAR_8)
                VAR_46 |= VAR_16;
            else if (VAR_39->profile == VAR_7)
                VAR_46 |= VAR_15;
        }
        else
            VAR_46 |= VAR_18;

        if (VAR_39->debug)
            VAR_47 |= VAR_17;
        if (VAR_39->noerror)
            VAR_47 |= VAR_14;

        if (VAR_39->robustness)
        {
            if (VAR_31.wgl.ARB_create_context_robustness)
            {
                if (VAR_39->robustness == VAR_5)
                {
                    FUNC_7(VAR_27,
                                 VAR_30);
                }
                else if (VAR_39->robustness == VAR_4)
                {
                    FUNC_7(VAR_27,
                                 VAR_29);
                }

                VAR_47 |= VAR_28;
            }
        }

        if (VAR_39->release)
        {
            if (VAR_31.wgl.ARB_context_flush_control)
            {
                if (VAR_39->release == VAR_11)
                {
                    FUNC_7(VAR_24,
                                 VAR_26);
                }
                else if (VAR_39->release == VAR_10)
                {
                    FUNC_7(VAR_24,
                                 VAR_25);
                }
            }
        }




        if (VAR_39->major != 1 || VAR_39->minor != 0)
        {
            FUNC_7(VAR_21, VAR_39->major);
            FUNC_7(VAR_22, VAR_39->minor);
        }

        if (VAR_47)
            FUNC_7(VAR_19, VAR_47);

        if (VAR_46)
            FUNC_7(VAR_23, VAR_46);

        FUNC_7(0, 0);

        VAR_38->context.wgl.handle =
            VAR_31.wgl.CreateContextAttribsARB(VAR_38->context.wgl.dc,
                                              VAR_44, VAR_41);
        if (!VAR_38->context.wgl.handle)
        {
            const DWORD VAR_48 = FUNC_2();

            if (VAR_48 == (0xc0070000 | VAR_1))
            {
                if (VAR_39->client == VAR_6)
                {
                    FUNC_4(VAR_13,
                                    "WGL: Driver does not support OpenGL version %i.%i",
                                    VAR_39->major,
                                    VAR_39->minor);
                }
                else
                {
                    FUNC_4(VAR_13,
                                    "WGL: Driver does not support OpenGL ES version %i.%i",
                                    VAR_39->major,
                                    VAR_39->minor);
                }
            }
            else if (VAR_48 == (0xc0070000 | VAR_0))
            {
                FUNC_4(VAR_13,
                                "WGL: Driver does not support the requested OpenGL profile");
            }
            else
            {
                if (VAR_39->client == VAR_6)
                {
                    FUNC_4(VAR_13,
                                    "WGL: Failed to create OpenGL context");
                }
                else
                {
                    FUNC_4(VAR_13,
                                    "WGL: Failed to create OpenGL ES context");
                }
            }

            return VAR_3;
        }
    }
    else
    {
        VAR_38->context.wgl.handle = FUNC_9(VAR_38->context.wgl.dc);
        if (!VAR_38->context.wgl.handle)
        {
            FUNC_4(VAR_13,
                            "WGL: Failed to create OpenGL context");
            return VAR_3;
        }

        if (VAR_44)
        {
            if (!FUNC_10(VAR_44, VAR_38->context.wgl.handle))
            {
                FUNC_4(VAR_9,
                                "WGL: Failed to enable sharing with specified OpenGL context");
                return VAR_3;
            }
        }
    }

    VAR_38->context.makeCurrent = VAR_35;
    VAR_38->context.swapBuffers = VAR_36;
    VAR_38->context.swapInterval = VAR_37;
    VAR_38->context.extensionSupported = VAR_33;
    VAR_38->context.getProcAddress = VAR_34;
    VAR_38->context.destroy = VAR_32;

    return VAR_12;
}
