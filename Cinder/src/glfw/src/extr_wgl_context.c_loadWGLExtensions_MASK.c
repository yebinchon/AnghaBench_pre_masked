
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pfd ;
struct TYPE_9__ {void* ARB_context_flush_control; void* ARB_pixel_format; void* EXT_swap_control; void* ARB_create_context_robustness; void* EXT_create_context_es2_profile; void* ARB_create_context_profile; void* ARB_create_context; void* EXT_framebuffer_sRGB; void* ARB_framebuffer_sRGB; void* ARB_multisample; scalar_t__ GetPixelFormatAttribivARB; scalar_t__ SwapIntervalEXT; scalar_t__ CreateContextAttribsARB; scalar_t__ GetExtensionsStringARB; scalar_t__ GetExtensionsStringEXT; int extensionsLoaded; } ;
struct TYPE_8__ {int helperWindowHandle; } ;
struct TYPE_11__ {TYPE_2__ wgl; TYPE_1__ win32; } ;
struct TYPE_10__ {int nSize; int nVersion; int dwFlags; int cColorBits; int iPixelType; } ;
typedef TYPE_3__ PIXELFORMATDESCRIPTOR ;
typedef scalar_t__ PFNWGLSWAPINTERVALEXTPROC ;
typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBIVARBPROC ;
typedef scalar_t__ PFNWGLGETEXTENSIONSSTRINGEXTPROC ;
typedef scalar_t__ PFNWGLGETEXTENSIONSSTRINGARBPROC ;
typedef scalar_t__ PFNWGLCREATECONTEXTATTRIBSARBPROC ;
typedef int * HGLRC ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(void)
{
    PIXELFORMATDESCRIPTOR VAR_7;
    HGLRC VAR_8;
    HDC VAR_9 = FUNC_1(VAR_6.win32.helperWindowHandle);;

    VAR_6.wgl.extensionsLoaded = VAR_1;






    FUNC_3(&VAR_7, sizeof(VAR_7));
    VAR_7.nSize = sizeof(VAR_7);
    VAR_7.nVersion = 1;
    VAR_7.dwFlags = VAR_3 | VAR_4 | VAR_2;
    VAR_7.iPixelType = VAR_5;
    VAR_7.cColorBits = 24;

    if (!FUNC_2(VAR_9, FUNC_0(VAR_9, &VAR_7), &VAR_7))
    {
        FUNC_4(VAR_0,
                        "WGL: Failed to set pixel format for dummy context");
        return;
    }

    VAR_8 = FUNC_6(VAR_9);
    if (!VAR_8)
    {
        FUNC_4(VAR_0,
                        "WGL: Failed to create dummy context");
        return;
    }

    if (!FUNC_9(VAR_9, VAR_8))
    {
        FUNC_7(VAR_8);

        FUNC_4(VAR_0,
                        "WGL: Failed to make dummy context current");
        return;
    }



    VAR_6.wgl.GetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)
        FUNC_8("wglGetExtensionsStringEXT");
    VAR_6.wgl.GetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)
        FUNC_8("wglGetExtensionsStringARB");
    VAR_6.wgl.CreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)
        FUNC_8("wglCreateContextAttribsARB");
    VAR_6.wgl.SwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)
        FUNC_8("wglSwapIntervalEXT");
    VAR_6.wgl.GetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)
        FUNC_8("wglGetPixelFormatAttribivARB");



    VAR_6.wgl.ARB_multisample =
        FUNC_5("WGL_ARB_multisample");
    VAR_6.wgl.ARB_framebuffer_sRGB =
        FUNC_5("WGL_ARB_framebuffer_sRGB");
    VAR_6.wgl.EXT_framebuffer_sRGB =
        FUNC_5("WGL_EXT_framebuffer_sRGB");
    VAR_6.wgl.ARB_create_context =
        FUNC_5("WGL_ARB_create_context");
    VAR_6.wgl.ARB_create_context_profile =
        FUNC_5("WGL_ARB_create_context_profile");
    VAR_6.wgl.EXT_create_context_es2_profile =
        FUNC_5("WGL_EXT_create_context_es2_profile");
    VAR_6.wgl.ARB_create_context_robustness =
        FUNC_5("WGL_ARB_create_context_robustness");
    VAR_6.wgl.EXT_swap_control =
        FUNC_5("WGL_EXT_swap_control");
    VAR_6.wgl.ARB_pixel_format =
        FUNC_5("WGL_ARB_pixel_format");
    VAR_6.wgl.ARB_context_flush_control =
        FUNC_5("WGL_ARB_context_flush_control");

    FUNC_9(VAR_9, ((void*)0));
    FUNC_7(VAR_8);
}
