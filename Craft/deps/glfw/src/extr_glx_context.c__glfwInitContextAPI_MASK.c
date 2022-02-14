
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int major; int minor; int EXT_swap_control; int SGI_swap_control; int MESA_swap_control; int ARB_multisample; int ARB_framebuffer_sRGB; int EXT_framebuffer_sRGB; int ARB_create_context; int ARB_create_context_robustness; int ARB_create_context_profile; int EXT_create_context_es2_profile; int ARB_context_flush_control; scalar_t__ CreateContextAttribsARB; scalar_t__ SwapIntervalMESA; scalar_t__ SwapIntervalSGI; scalar_t__ SwapIntervalEXT; int eventBase; int errorBase; int handle; void* GetProcAddressARB; void* GetProcAddress; void* GetVisualFromFBConfig; void* CreateNewContext; void* QueryExtensionsString; void* SwapBuffers; void* MakeCurrent; void* DestroyContext; void* QueryVersion; void* QueryExtension; void* GetClientString; void* GetFBConfigAttrib; void* GetFBConfigs; } ;
struct TYPE_4__ {int display; } ;
struct TYPE_6__ {TYPE_2__ glx; TYPE_1__ x11; } ;
typedef scalar_t__ PFNGLXSWAPINTERVALSGIPROC ;
typedef scalar_t__ PFNGLXSWAPINTERVALMESAPROC ;
typedef scalar_t__ PFNGLXSWAPINTERVALEXTPROC ;
typedef scalar_t__ PFNGLXCREATECONTEXTATTRIBSARBPROC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (char const*,int) ;
 void* FUNC_8 (int ,char*) ;

int FUNC_9(void)
{



    const char* VAR_6 = "libGL.so.1";


    if (!FUNC_0())
        return VAR_1;

    VAR_5.glx.handle = FUNC_7(VAR_6, VAR_4 | VAR_3);
    if (!VAR_5.glx.handle)
    {
        FUNC_1(VAR_0, "GLX: %s", FUNC_6());
        return VAR_1;
    }

    VAR_5.glx.GetFBConfigs =
        FUNC_8(VAR_5.glx.handle, "glXGetFBConfigs");
    VAR_5.glx.GetFBConfigAttrib =
        FUNC_8(VAR_5.glx.handle, "glXGetFBConfigAttrib");
    VAR_5.glx.GetClientString =
        FUNC_8(VAR_5.glx.handle, "glXGetClientString");
    VAR_5.glx.QueryExtension =
        FUNC_8(VAR_5.glx.handle, "glXQueryExtension");
    VAR_5.glx.QueryVersion =
        FUNC_8(VAR_5.glx.handle, "glXQueryVersion");
    VAR_5.glx.DestroyContext =
        FUNC_8(VAR_5.glx.handle, "glXDestroyContext");
    VAR_5.glx.MakeCurrent =
        FUNC_8(VAR_5.glx.handle, "glXMakeCurrent");
    VAR_5.glx.SwapBuffers =
        FUNC_8(VAR_5.glx.handle, "glXSwapBuffers");
    VAR_5.glx.QueryExtensionsString =
        FUNC_8(VAR_5.glx.handle, "glXQueryExtensionsString");
    VAR_5.glx.CreateNewContext =
        FUNC_8(VAR_5.glx.handle, "glXCreateNewContext");
    VAR_5.glx.GetVisualFromFBConfig =
        FUNC_8(VAR_5.glx.handle, "glXGetVisualFromFBConfig");
    VAR_5.glx.GetProcAddress =
        FUNC_8(VAR_5.glx.handle, "glXGetProcAddress");
    VAR_5.glx.GetProcAddressARB =
        FUNC_8(VAR_5.glx.handle, "glXGetProcAddressARB");

    if (!FUNC_4(VAR_5.x11.display,
                                 &VAR_5.glx.errorBase,
                                 &VAR_5.glx.eventBase))
    {
        FUNC_1(VAR_0, "GLX: GLX extension not found");
        return VAR_1;
    }

    if (!FUNC_5(VAR_5.x11.display,
                               &VAR_5.glx.major,
                               &VAR_5.glx.minor))
    {
        FUNC_1(VAR_0,
                        "GLX: Failed to query GLX version");
        return VAR_1;
    }

    if (VAR_5.glx.major == 1 && VAR_5.glx.minor < 3)
    {
        FUNC_1(VAR_0,
                        "GLX: GLX version 1.3 is required");
        return VAR_1;
    }

    if (FUNC_2("GLX_EXT_swap_control"))
    {
        VAR_5.glx.SwapIntervalEXT = (PFNGLXSWAPINTERVALEXTPROC)
            FUNC_3("glXSwapIntervalEXT");

        if (VAR_5.glx.SwapIntervalEXT)
            VAR_5.glx.EXT_swap_control = VAR_2;
    }

    if (FUNC_2("GLX_SGI_swap_control"))
    {
        VAR_5.glx.SwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC)
            FUNC_3("glXSwapIntervalSGI");

        if (VAR_5.glx.SwapIntervalSGI)
            VAR_5.glx.SGI_swap_control = VAR_2;
    }

    if (FUNC_2("GLX_MESA_swap_control"))
    {
        VAR_5.glx.SwapIntervalMESA = (PFNGLXSWAPINTERVALMESAPROC)
            FUNC_3("glXSwapIntervalMESA");

        if (VAR_5.glx.SwapIntervalMESA)
            VAR_5.glx.MESA_swap_control = VAR_2;
    }

    if (FUNC_2("GLX_ARB_multisample"))
        VAR_5.glx.ARB_multisample = VAR_2;

    if (FUNC_2("GLX_ARB_framebuffer_sRGB"))
        VAR_5.glx.ARB_framebuffer_sRGB = VAR_2;

    if (FUNC_2("GLX_EXT_framebuffer_sRGB"))
        VAR_5.glx.EXT_framebuffer_sRGB = VAR_2;

    if (FUNC_2("GLX_ARB_create_context"))
    {
        VAR_5.glx.CreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC)
            FUNC_3("glXCreateContextAttribsARB");

        if (VAR_5.glx.CreateContextAttribsARB)
            VAR_5.glx.ARB_create_context = VAR_2;
    }

    if (FUNC_2("GLX_ARB_create_context_robustness"))
        VAR_5.glx.ARB_create_context_robustness = VAR_2;

    if (FUNC_2("GLX_ARB_create_context_profile"))
        VAR_5.glx.ARB_create_context_profile = VAR_2;

    if (FUNC_2("GLX_EXT_create_context_es2_profile"))
        VAR_5.glx.EXT_create_context_es2_profile = VAR_2;

    if (FUNC_2("GLX_ARB_context_flush_control"))
        VAR_5.glx.ARB_context_flush_control = VAR_2;

    return VAR_2;
}
