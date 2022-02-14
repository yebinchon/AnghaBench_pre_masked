
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
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_21__ {int client; int config; int surface; int handle; } ;
struct TYPE_22__ {int destroy; int getProcAddress; int extensionSupported; int swapInterval; int swapBuffers; int makeCurrent; TYPE_5__ egl; } ;
struct TYPE_23__ {TYPE_6__ context; } ;
typedef TYPE_7__ _GLFWwindow ;
struct TYPE_24__ {scalar_t__ sRGB; } ;
typedef TYPE_8__ _GLFWfbconfig ;
struct TYPE_25__ {scalar_t__ client; scalar_t__ profile; scalar_t__ robustness; int major; int minor; scalar_t__ debug; scalar_t__ noerror; scalar_t__ forward; TYPE_3__* share; } ;
typedef TYPE_9__ _GLFWctxconfig ;
struct TYPE_20__ {int prefix; int display; scalar_t__ KHR_gl_colorspace; scalar_t__ KHR_create_context_no_error; scalar_t__ KHR_create_context; } ;
struct TYPE_17__ {int * handle; } ;
struct TYPE_18__ {TYPE_1__ egl; } ;
struct TYPE_19__ {TYPE_2__ context; } ;
struct TYPE_16__ {TYPE_4__ egl; } ;
typedef int GLFWbool ;
typedef int EGLint ;
typedef int * EGLContext ;
typedef int EGLConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
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
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 TYPE_15__ VAR_34 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_9__ const*,TYPE_8__ const*,int *) ;
 int VAR_35 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 () ;
 int VAR_36 ;
 int FUNC_7 (int ) ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;
 int VAR_39 ;
 int VAR_40 ;

GLFWbool FUNC_10(_GLFWwindow* VAR_41,
                               const _GLFWctxconfig* VAR_42,
                               const _GLFWfbconfig* VAR_43)
{
    EGLint VAR_44[40];
    EGLConfig VAR_45;
    EGLContext VAR_46 = ((void*)0);

    if (!VAR_34.egl.display)
    {
        FUNC_0(VAR_21, "EGL: API not available");
        return VAR_22;
    }

    if (VAR_42->share)
        VAR_46 = VAR_42->share->context.egl.handle;

    if (!FUNC_2(VAR_42, VAR_43, &VAR_45))
    {
        FUNC_0(VAR_23,
                        "EGL: Failed to find a suitable EGLConfig");
        return VAR_22;
    }

    if (VAR_42->client == VAR_29)
    {
        if (!FUNC_3(VAR_20))
        {
            FUNC_0(VAR_21,
                            "EGL: Failed to bind OpenGL ES: %s",
                            FUNC_7(FUNC_6()));
            return VAR_22;
        }
    }
    else
    {
        if (!FUNC_3(VAR_19))
        {
            FUNC_0(VAR_21,
                            "EGL: Failed to bind OpenGL: %s",
                            FUNC_7(FUNC_6()));
            return VAR_22;
        }
    }

    if (VAR_34.egl.KHR_create_context)
    {
        int VAR_47 = 0, VAR_48 = 0, VAR_49 = 0;

        if (VAR_42->client == VAR_26)
        {
            if (VAR_42->forward)
                VAR_49 |= VAR_7;

            if (VAR_42->profile == VAR_28)
                VAR_48 |= VAR_5;
            else if (VAR_42->profile == VAR_27)
                VAR_48 |= VAR_4;

            if (VAR_34.egl.KHR_create_context_no_error)
            {
                if (VAR_42->noerror)
                    VAR_49 |= VAR_8;
            }
        }

        if (VAR_42->debug)
            VAR_49 |= VAR_6;

        if (VAR_42->robustness)
        {
            if (VAR_42->robustness == VAR_25)
            {
                FUNC_8(VAR_10,
                             VAR_17);
            }
            else if (VAR_42->robustness == VAR_24)
            {
                FUNC_8(VAR_10,
                             VAR_14);
            }

            VAR_49 |= VAR_11;
        }

        if (VAR_42->major != 1 || VAR_42->minor != 0)
        {
            FUNC_8(VAR_2, VAR_42->major);
            FUNC_8(VAR_3, VAR_42->minor);
        }

        if (VAR_48)
            FUNC_8(VAR_9, VAR_48);

        if (VAR_49)
            FUNC_8(VAR_1, VAR_49);

        FUNC_8(VAR_15, VAR_15);
    }
    else
    {
        int VAR_50 = 0;

        if (VAR_42->client == VAR_29)
            FUNC_8(VAR_0, VAR_42->major);

        FUNC_8(VAR_15, VAR_15);
    }




    VAR_41->context.egl.handle = FUNC_4(VAR_34.egl.display,
                                                  VAR_45, VAR_46, VAR_44);

    if (VAR_41->context.egl.handle == VAR_16)
    {
        FUNC_0(VAR_32,
                        "EGL: Failed to create context: %s",
                        FUNC_7(FUNC_6()));
        return VAR_22;
    }


    {
        int VAR_51 = 0;

        if (VAR_43->sRGB)
        {
            if (VAR_34.egl.KHR_gl_colorspace)
            {
                FUNC_8(VAR_12, VAR_13);
            }
        }

        FUNC_8(VAR_15, VAR_15);
    }

    VAR_41->context.egl.surface =
        FUNC_5(VAR_34.egl.display,
                               VAR_45,
                               VAR_33,
                               VAR_44);
    if (VAR_41->context.egl.surface == VAR_18)
    {
        FUNC_0(VAR_30,
                        "EGL: Failed to create window surface: %s",
                        FUNC_7(FUNC_6()));
        return VAR_22;
    }

    VAR_41->context.egl.config = VAR_45;


    {
        int VAR_52;
        const char** VAR_53;
        const char* VAR_54[] =
        {






            "libGLESv1_CM.so.1",
            "libGLES_CM.so.1",

            ((void*)0)
        };
        const char* VAR_55[] =
        {






            "libGLESv2.so.2",

            ((void*)0)
        };
        const char* VAR_56[] =
        {



            "libGL.so.1",

            ((void*)0)
        };

        if (VAR_42->client == VAR_29)
        {
            if (VAR_42->major == 1)
                VAR_53 = VAR_54;
            else
                VAR_53 = VAR_55;
        }
        else
            VAR_53 = VAR_56;

        for (VAR_52 = 0; VAR_53[VAR_52]; VAR_52++)
        {


            if (VAR_34.egl.prefix != (FUNC_9(VAR_53[VAR_52], "lib", 3) == 0))
                continue;

            VAR_41->context.egl.client = FUNC_1(VAR_53[VAR_52]);
            if (VAR_41->context.egl.client)
                break;
        }

        if (!VAR_41->context.egl.client)
        {
            FUNC_0(VAR_21,
                            "EGL: Failed to load client library");
            return VAR_22;
        }
    }

    VAR_41->context.makeCurrent = VAR_38;
    VAR_41->context.swapBuffers = VAR_39;
    VAR_41->context.swapInterval = VAR_40;
    VAR_41->context.extensionSupported = VAR_36;
    VAR_41->context.getProcAddress = VAR_37;
    VAR_41->context.destroy = VAR_35;

    return VAR_31;
}
