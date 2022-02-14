
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ display; int KHR_create_context; int minor; int major; scalar_t__ handle; void* GetProcAddress; void* QueryString; void* SwapInterval; void* SwapBuffers; void* MakeCurrent; void* CreateWindowSurface; void* DestroyContext; void* DestroySurface; void* CreateContext; void* BindAPI; void* Terminate; void* Initialize; void* GetError; void* GetDisplay; void* GetConfigs; void* GetConfigAttrib; } ;
struct TYPE_4__ {TYPE_1__ egl; } ;
typedef int EGLNativeDisplayType ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 void* FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int *,int *) ;
 int FUNC_8 (int ) ;

int FUNC_9(void)
{
    int VAR_6;
    const char* VAR_7[] =
    {






        "libEGL.so.1",

        ((void*)0)
    };

    if (!FUNC_0())
        return VAR_2;

    for (VAR_6 = 0; VAR_7[VAR_6]; VAR_6++)
    {
        VAR_5.egl.handle = FUNC_3(VAR_7[VAR_6]);
        if (VAR_5.egl.handle)
            break;
    }

    if (!VAR_5.egl.handle)
    {
        FUNC_1(VAR_1, "EGL: Failed to load EGL");
        return VAR_2;
    }

    VAR_5.egl.GetConfigAttrib =
        FUNC_4(VAR_5.egl.handle, "eglGetConfigAttrib");
    VAR_5.egl.GetConfigs =
        FUNC_4(VAR_5.egl.handle, "eglGetConfigs");
    VAR_5.egl.GetDisplay =
        FUNC_4(VAR_5.egl.handle, "eglGetDisplay");
    VAR_5.egl.GetError =
        FUNC_4(VAR_5.egl.handle, "eglGetError");
    VAR_5.egl.Initialize =
        FUNC_4(VAR_5.egl.handle, "eglInitialize");
    VAR_5.egl.Terminate =
        FUNC_4(VAR_5.egl.handle, "eglTerminate");
    VAR_5.egl.BindAPI =
        FUNC_4(VAR_5.egl.handle, "eglBindAPI");
    VAR_5.egl.CreateContext =
        FUNC_4(VAR_5.egl.handle, "eglCreateContext");
    VAR_5.egl.DestroySurface =
        FUNC_4(VAR_5.egl.handle, "eglDestroySurface");
    VAR_5.egl.DestroyContext =
        FUNC_4(VAR_5.egl.handle, "eglDestroyContext");
    VAR_5.egl.CreateWindowSurface =
        FUNC_4(VAR_5.egl.handle, "eglCreateWindowSurface");
    VAR_5.egl.MakeCurrent =
        FUNC_4(VAR_5.egl.handle, "eglMakeCurrent");
    VAR_5.egl.SwapBuffers =
        FUNC_4(VAR_5.egl.handle, "eglSwapBuffers");
    VAR_5.egl.SwapInterval =
        FUNC_4(VAR_5.egl.handle, "eglSwapInterval");
    VAR_5.egl.QueryString =
        FUNC_4(VAR_5.egl.handle, "eglQueryString");
    VAR_5.egl.GetProcAddress =
        FUNC_4(VAR_5.egl.handle, "eglGetProcAddress");

    VAR_5.egl.display =
        FUNC_5((EGLNativeDisplayType)VAR_4);
    if (VAR_5.egl.display == VAR_0)
    {
        FUNC_1(VAR_1,
                        "EGL: Failed to get EGL display: %s",
                        FUNC_8(FUNC_6()));
        return VAR_2;
    }

    if (!FUNC_7(VAR_5.egl.display,
                             &VAR_5.egl.major,
                             &VAR_5.egl.minor))
    {
        FUNC_1(VAR_1,
                        "EGL: Failed to initialize EGL: %s",
                        FUNC_8(FUNC_6()));
        return VAR_2;
    }

    VAR_5.egl.KHR_create_context =
        FUNC_2("EGL_KHR_create_context");

    return VAR_3;
}
