
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_19__ {int client; int config; int context; int visual; } ;
struct TYPE_20__ {TYPE_5__ egl; } ;
typedef TYPE_6__ _GLFWwindow ;
typedef int _GLFWfbconfig ;
struct TYPE_21__ {scalar_t__ api; scalar_t__ profile; scalar_t__ robustness; int major; int minor; scalar_t__ debug; scalar_t__ forward; TYPE_2__* share; } ;
typedef TYPE_7__ _GLFWctxconfig ;
struct TYPE_22__ {void* depth; void* visualid; int screen; } ;
typedef TYPE_8__ XVisualInfo ;
struct TYPE_18__ {int display; scalar_t__ KHR_create_context; } ;
struct TYPE_17__ {int display; int screen; } ;
struct TYPE_15__ {int * context; } ;
struct TYPE_16__ {TYPE_1__ egl; } ;
struct TYPE_14__ {TYPE_4__ egl; TYPE_3__ x11; } ;
typedef void* EGLint ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (int ,int,TYPE_8__*,void**) ;
 TYPE_12__ VAR_37 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int*) ;
 int FUNC_5 (int ,int ,int ,void**) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_7__ const*,int const*,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;

int FUNC_10(_GLFWwindow* VAR_38,
                       const _GLFWctxconfig* VAR_39,
                       const _GLFWfbconfig* VAR_40)
{
    int VAR_41[40];
    EGLConfig VAR_42;
    EGLContext VAR_43 = ((void*)0);

    if (VAR_39->share)
        VAR_43 = VAR_39->share->egl.context;

    if (!FUNC_7(VAR_39, VAR_40, &VAR_42))
    {
        FUNC_1(VAR_23,
                        "EGL: Failed to find a suitable EGLConfig");
        return VAR_32;
    }
    if (VAR_39->api == VAR_29)
    {
        if (!FUNC_3(VAR_20))
        {
            FUNC_1(VAR_22,
                            "EGL: Failed to bind OpenGL ES: %s",
                            FUNC_8(FUNC_6()));
            return VAR_32;
        }
    }
    else
    {
        if (!FUNC_3(VAR_19))
        {
            FUNC_1(VAR_22,
                            "EGL: Failed to bind OpenGL: %s",
                            FUNC_8(FUNC_6()));
            return VAR_32;
        }
    }

    if (VAR_37.egl.KHR_create_context)
    {
        int VAR_44 = 0, VAR_45 = 0, VAR_46 = 0;

        if (VAR_39->api == VAR_26)
        {
            if (VAR_39->forward)
                VAR_46 |= VAR_9;

            if (VAR_39->profile == VAR_28)
                VAR_45 |= VAR_7;
            else if (VAR_39->profile == VAR_27)
                VAR_45 |= VAR_6;
        }

        if (VAR_39->debug)
            VAR_46 |= VAR_8;

        if (VAR_39->robustness)
        {
            if (VAR_39->robustness == VAR_25)
            {
                FUNC_9(VAR_11,
                             VAR_18);
            }
            else if (VAR_39->robustness == VAR_24)
            {
                FUNC_9(VAR_11,
                             VAR_14);
            }

            VAR_46 |= VAR_12;
        }

        if (VAR_39->major != 1 || VAR_39->minor != 0)
        {
            FUNC_9(VAR_4, VAR_39->major);
            FUNC_9(VAR_5, VAR_39->minor);
        }

        if (VAR_45)
            FUNC_9(VAR_10, VAR_45);

        if (VAR_46)
            FUNC_9(VAR_3, VAR_46);

        FUNC_9(VAR_16, VAR_16);
    }
    else
    {
        int VAR_47 = 0;

        if (VAR_39->api == VAR_29)
            FUNC_9(VAR_2, VAR_39->major);

        FUNC_9(VAR_16, VAR_16);
    }




    VAR_38->egl.context = FUNC_4(VAR_37.egl.display,
                                                 VAR_42, VAR_43, VAR_41);

    if (VAR_38->egl.context == VAR_17)
    {
        FUNC_1(VAR_31,
                        "EGL: Failed to create context: %s",
                        FUNC_8(FUNC_6()));
        return VAR_32;
    }

    VAR_38->egl.config = VAR_42;


    {
        int VAR_48;
        const char** VAR_49;
        const char* VAR_50[] =
        {






            "libGLESv1_CM.so.1",
            "libGLES_CM.so.1",

            ((void*)0)
        };
        const char* VAR_51[] =
        {






            "libGLESv2.so.2",

            ((void*)0)
        };
        const char* VAR_52[] =
        {



            "libGL.so.1",

            ((void*)0)
        };

        if (VAR_39->api == VAR_29)
        {
            if (VAR_39->major == 1)
                VAR_49 = VAR_50;
            else
                VAR_49 = VAR_51;
        }
        else
            VAR_49 = VAR_52;

        for (VAR_48 = 0; VAR_49[VAR_48]; VAR_48++)
        {
            VAR_38->egl.client = FUNC_2(VAR_49[VAR_48]);
            if (VAR_38->egl.client)
                break;
        }

        if (!VAR_38->egl.client)
        {
            FUNC_1(VAR_22,
                            "EGL: Failed to load client library");
            return VAR_32;
        }
    }

    return VAR_33;
}
