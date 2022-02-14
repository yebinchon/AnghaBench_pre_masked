
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ client; int major; int minor; int (* swapBuffers ) (TYPE_2__*) ;scalar_t__ (* getProcAddress ) (char*) ;int release; int (* GetIntegerv ) (int ,int*) ;void* robustness; void* profile; void* noerror; void* debug; void* forward; scalar_t__ GetStringi; int revision; scalar_t__ (* GetString ) (int ) ;int source; } ;
struct TYPE_8__ {TYPE_1__ context; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_9__ {scalar_t__ client; int major; int minor; scalar_t__ debug; int source; } ;
typedef TYPE_3__ _GLFWctxconfig ;
typedef scalar_t__ (* PFNGLGETSTRINGPROC ) (int ) ;
typedef scalar_t__ PFNGLGETSTRINGIPROC ;
typedef int (* PFNGLGETINTEGERVPROC ) (int ,int*) ;
typedef int (* PFNGLCLEARPROC ) (int ) ;
typedef int GLint ;
typedef void* GLFWbool ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
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
 int FUNC_0 (int ,char*,...) ;
 TYPE_2__* FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char const*,char*,int*,int*,int *) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,size_t const) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,int*) ;
 int FUNC_14 (int ,int*) ;
 int FUNC_15 (int ,int*) ;
 int FUNC_16 (int ,int*) ;

GLFWbool FUNC_17(const _GLFWctxconfig* VAR_27)
{
    int VAR_28;
    _GLFWwindow* VAR_29;
    const char* VAR_30;
    const char* VAR_31[] =
    {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        ((void*)0)
    };

    VAR_29 = FUNC_1();

    VAR_29->context.source = VAR_27->source;
    VAR_29->context.client = VAR_3;

    VAR_29->context.GetIntegerv = (PFNGLGETINTEGERVPROC)
        VAR_29->context.getProcAddress("glGetIntegerv");
    VAR_29->context.GetString = (PFNGLGETSTRINGPROC)
        VAR_29->context.getProcAddress("glGetString");
    if (!VAR_29->context.GetIntegerv || !VAR_29->context.GetString)
    {
        FUNC_0(VAR_7, "Entry point retrieval is broken");
        return VAR_0;
    }

    VAR_30 = (const char*) VAR_29->context.GetString(VAR_26);
    if (!VAR_30)
    {
        if (VAR_27->client == VAR_3)
        {
            FUNC_0(VAR_7,
                            "OpenGL version string retrieval is broken");
        }
        else
        {
            FUNC_0(VAR_7,
                            "OpenGL ES version string retrieval is broken");
        }

        return VAR_0;
    }

    for (VAR_28 = 0; VAR_31[VAR_28]; VAR_28++)
    {
        const size_t VAR_32 = FUNC_4(VAR_31[VAR_28]);

        if (FUNC_5(VAR_30, VAR_31[VAR_28], VAR_32) == 0)
        {
            VAR_30 += VAR_32;
            VAR_29->context.client = VAR_6;
            break;
        }
    }

    if (!FUNC_3(VAR_30, "%d.%d.%d",
                &VAR_29->context.major,
                &VAR_29->context.minor,
                &VAR_29->context.revision))
    {
        if (VAR_29->context.client == VAR_3)
        {
            FUNC_0(VAR_7,
                            "No version found in OpenGL version string");
        }
        else
        {
            FUNC_0(VAR_7,
                            "No version found in OpenGL ES version string");
        }

        return VAR_0;
    }

    if (VAR_29->context.major < VAR_27->major ||
        (VAR_29->context.major == VAR_27->major &&
         VAR_29->context.minor < VAR_27->minor))
    {







        if (VAR_29->context.client == VAR_3)
        {
            FUNC_0(VAR_11,
                            "Requested OpenGL version %i.%i, got version %i.%i",
                            VAR_27->major, VAR_27->minor,
                            VAR_29->context.major, VAR_29->context.minor);
        }
        else
        {
            FUNC_0(VAR_11,
                            "Requested OpenGL ES version %i.%i, got version %i.%i",
                            VAR_27->major, VAR_27->minor,
                            VAR_29->context.major, VAR_29->context.minor);
        }

        return VAR_0;
    }

    if (VAR_29->context.major >= 3)
    {




        VAR_29->context.GetStringi = (PFNGLGETSTRINGIPROC)
            VAR_29->context.getProcAddress("glGetStringi");
        if (!VAR_29->context.GetStringi)
        {
            FUNC_0(VAR_7,
                            "Entry point retrieval is broken");
            return VAR_0;
        }
    }

    if (VAR_29->context.client == VAR_3)
    {

        if (VAR_29->context.major >= 3)
        {
            GLint VAR_33;
            VAR_29->context.GetIntegerv(VAR_15, &VAR_33);

            if (VAR_33 & VAR_17)
                VAR_29->context.forward = VAR_10;

            if (VAR_33 & VAR_16)
                VAR_29->context.debug = VAR_10;
            else if (FUNC_2("GL_ARB_debug_output") &&
                     VAR_27->debug)
            {



                VAR_29->context.debug = VAR_10;
            }

            if (VAR_33 & VAR_18)
                VAR_29->context.noerror = VAR_10;
        }


        if (VAR_29->context.major >= 4 ||
            (VAR_29->context.major == 3 && VAR_29->context.minor >= 2))
        {
            GLint VAR_34;
            VAR_29->context.GetIntegerv(VAR_19, &VAR_34);

            if (VAR_34 & VAR_13)
                VAR_29->context.profile = VAR_4;
            else if (VAR_34 & VAR_14)
                VAR_29->context.profile = VAR_5;
            else if (FUNC_2("GL_ARB_compatibility"))
            {




                VAR_29->context.profile = VAR_4;
            }
        }


        if (FUNC_2("GL_ARB_robustness"))
        {



            GLint VAR_35;
            VAR_29->context.GetIntegerv(VAR_25,
                                        &VAR_35);

            if (VAR_35 == VAR_22)
                VAR_29->context.robustness = VAR_1;
            else if (VAR_35 == VAR_24)
                VAR_29->context.robustness = VAR_2;
        }
    }
    else
    {

        if (FUNC_2("GL_EXT_robustness"))
        {



            GLint VAR_36;
            VAR_29->context.GetIntegerv(VAR_25,
                                        &VAR_36);

            if (VAR_36 == VAR_22)
                VAR_29->context.robustness = VAR_1;
            else if (VAR_36 == VAR_24)
                VAR_29->context.robustness = VAR_2;
        }
    }

    if (FUNC_2("GL_KHR_context_flush_control"))
    {
        GLint VAR_37;
        VAR_29->context.GetIntegerv(VAR_20, &VAR_37);

        if (VAR_37 == VAR_23)
            VAR_29->context.release = VAR_9;
        else if (VAR_37 == VAR_21)
            VAR_29->context.release = VAR_8;
    }



    {
        PFNGLCLEARPROC VAR_38 = (PFNGLCLEARPROC)
            VAR_29->context.getProcAddress("glClear");
        VAR_38(VAR_12);
        VAR_29->context.swapBuffers(VAR_29);
    }

    return VAR_10;
}
