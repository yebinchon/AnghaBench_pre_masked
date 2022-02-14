
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prefix; scalar_t__ display; void* KHR_gl_colorspace; void* KHR_create_context_no_error; void* KHR_create_context; int minor; int major; scalar_t__ GetProcAddress; scalar_t__ QueryString; scalar_t__ SwapInterval; scalar_t__ SwapBuffers; scalar_t__ MakeCurrent; scalar_t__ CreateWindowSurface; scalar_t__ DestroyContext; scalar_t__ DestroySurface; scalar_t__ CreateContext; scalar_t__ BindAPI; scalar_t__ Terminate; scalar_t__ Initialize; scalar_t__ GetError; scalar_t__ GetDisplay; scalar_t__ GetConfigs; scalar_t__ GetConfigAttrib; scalar_t__ handle; } ;
struct TYPE_4__ {TYPE_1__ egl; } ;
typedef scalar_t__ PFNEGLTERMINATEPROC ;
typedef scalar_t__ PFNEGLSWAPINTERVALPROC ;
typedef scalar_t__ PFNEGLSWAPBUFFERSPROC ;
typedef scalar_t__ PFNEGLQUERYSTRINGPROC ;
typedef scalar_t__ PFNEGLMAKECURRENTPROC ;
typedef scalar_t__ PFNEGLINITIALIZEPROC ;
typedef scalar_t__ PFNEGLGETPROCADDRESSPROC ;
typedef scalar_t__ PFNEGLGETERRORPROC ;
typedef scalar_t__ PFNEGLGETDISPLAYPROC ;
typedef scalar_t__ PFNEGLGETCONFIGSPROC ;
typedef scalar_t__ PFNEGLGETCONFIGATTRIBPROC ;
typedef scalar_t__ PFNEGLDESTROYSURFACEPROC ;
typedef scalar_t__ PFNEGLDESTROYCONTEXTPROC ;
typedef scalar_t__ PFNEGLCREATEWINDOWSURFACEPROC ;
typedef scalar_t__ PFNEGLCREATECONTEXTPROC ;
typedef scalar_t__ PFNEGLBINDAPIPROC ;
typedef int GLFWbool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;

GLFWbool FUNC_10(void)
{
    int VAR_7;
    const char* VAR_8[] =
    {






        "libEGL.so.1",

        ((void*)0)
    };

    if (VAR_6.egl.handle)
        return VAR_4;

    for (VAR_7 = 0; VAR_8[VAR_7]; VAR_7++)
    {
        VAR_6.egl.handle = FUNC_2(VAR_8[VAR_7]);
        if (VAR_6.egl.handle)
            break;
    }

    if (!VAR_6.egl.handle)
    {
        FUNC_0(VAR_1, "EGL: Library not found");
        return VAR_2;
    }

    VAR_6.egl.prefix = (FUNC_9(VAR_8[VAR_7], "lib", 3) == 0);

    VAR_6.egl.GetConfigAttrib = (PFNEGLGETCONFIGATTRIBPROC)
        FUNC_3(VAR_6.egl.handle, "eglGetConfigAttrib");
    VAR_6.egl.GetConfigs = (PFNEGLGETCONFIGSPROC)
        FUNC_3(VAR_6.egl.handle, "eglGetConfigs");
    VAR_6.egl.GetDisplay = (PFNEGLGETDISPLAYPROC)
        FUNC_3(VAR_6.egl.handle, "eglGetDisplay");
    VAR_6.egl.GetError = (PFNEGLGETERRORPROC)
        FUNC_3(VAR_6.egl.handle, "eglGetError");
    VAR_6.egl.Initialize = (PFNEGLINITIALIZEPROC)
        FUNC_3(VAR_6.egl.handle, "eglInitialize");
    VAR_6.egl.Terminate = (PFNEGLTERMINATEPROC)
        FUNC_3(VAR_6.egl.handle, "eglTerminate");
    VAR_6.egl.BindAPI = (PFNEGLBINDAPIPROC)
        FUNC_3(VAR_6.egl.handle, "eglBindAPI");
    VAR_6.egl.CreateContext = (PFNEGLCREATECONTEXTPROC)
        FUNC_3(VAR_6.egl.handle, "eglCreateContext");
    VAR_6.egl.DestroySurface = (PFNEGLDESTROYSURFACEPROC)
        FUNC_3(VAR_6.egl.handle, "eglDestroySurface");
    VAR_6.egl.DestroyContext = (PFNEGLDESTROYCONTEXTPROC)
        FUNC_3(VAR_6.egl.handle, "eglDestroyContext");
    VAR_6.egl.CreateWindowSurface = (PFNEGLCREATEWINDOWSURFACEPROC)
        FUNC_3(VAR_6.egl.handle, "eglCreateWindowSurface");
    VAR_6.egl.MakeCurrent = (PFNEGLMAKECURRENTPROC)
        FUNC_3(VAR_6.egl.handle, "eglMakeCurrent");
    VAR_6.egl.SwapBuffers = (PFNEGLSWAPBUFFERSPROC)
        FUNC_3(VAR_6.egl.handle, "eglSwapBuffers");
    VAR_6.egl.SwapInterval = (PFNEGLSWAPINTERVALPROC)
        FUNC_3(VAR_6.egl.handle, "eglSwapInterval");
    VAR_6.egl.QueryString = (PFNEGLQUERYSTRINGPROC)
        FUNC_3(VAR_6.egl.handle, "eglQueryString");
    VAR_6.egl.GetProcAddress = (PFNEGLGETPROCADDRESSPROC)
        FUNC_3(VAR_6.egl.handle, "eglGetProcAddress");

    if (!VAR_6.egl.GetConfigAttrib ||
        !VAR_6.egl.GetConfigs ||
        !VAR_6.egl.GetDisplay ||
        !VAR_6.egl.GetError ||
        !VAR_6.egl.Initialize ||
        !VAR_6.egl.Terminate ||
        !VAR_6.egl.BindAPI ||
        !VAR_6.egl.CreateContext ||
        !VAR_6.egl.DestroySurface ||
        !VAR_6.egl.DestroyContext ||
        !VAR_6.egl.CreateWindowSurface ||
        !VAR_6.egl.MakeCurrent ||
        !VAR_6.egl.SwapBuffers ||
        !VAR_6.egl.SwapInterval ||
        !VAR_6.egl.QueryString ||
        !VAR_6.egl.GetProcAddress)
    {
        FUNC_0(VAR_3,
                        "EGL: Failed to load required entry points");

        FUNC_1();
        return VAR_2;
    }

    VAR_6.egl.display = FUNC_4(VAR_5);
    if (VAR_6.egl.display == VAR_0)
    {
        FUNC_0(VAR_1,
                        "EGL: Failed to get EGL display: %s",
                        FUNC_8(FUNC_5()));

        FUNC_1();
        return VAR_2;
    }

    if (!FUNC_6(VAR_6.egl.display, &VAR_6.egl.major, &VAR_6.egl.minor))
    {
        FUNC_0(VAR_1,
                        "EGL: Failed to initialize EGL: %s",
                        FUNC_8(FUNC_5()));

        FUNC_1();
        return VAR_2;
    }

    VAR_6.egl.KHR_create_context =
        FUNC_7("EGL_KHR_create_context");
    VAR_6.egl.KHR_create_context_no_error =
        FUNC_7("EGL_KHR_create_context_no_error");
    VAR_6.egl.KHR_gl_colorspace =
        FUNC_7("EGL_KHR_gl_colorspace");

    return VAR_4;
}
