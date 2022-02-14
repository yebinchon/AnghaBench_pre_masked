
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ARB_context_flush_control; void* ARB_pixel_format; void* EXT_swap_control; void* ARB_create_context_robustness; void* EXT_create_context_es2_profile; void* ARB_create_context_profile; void* ARB_create_context; void* EXT_framebuffer_sRGB; void* ARB_framebuffer_sRGB; void* ARB_multisample; scalar_t__ GetPixelFormatAttribivARB; scalar_t__ SwapIntervalEXT; scalar_t__ CreateContextAttribsARB; scalar_t__ GetExtensionsStringARB; scalar_t__ GetExtensionsStringEXT; } ;
struct TYPE_5__ {TYPE_1__ wgl; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef scalar_t__ PFNWGLSWAPINTERVALEXTPROC ;
typedef scalar_t__ PFNWGLGETPIXELFORMATATTRIBIVARBPROC ;
typedef scalar_t__ PFNWGLGETEXTENSIONSSTRINGEXTPROC ;
typedef scalar_t__ PFNWGLGETEXTENSIONSSTRINGARBPROC ;
typedef scalar_t__ PFNWGLCREATECONTEXTATTRIBSARBPROC ;


 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_0)
{


    VAR_0->wgl.GetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)
        FUNC_1("wglGetExtensionsStringEXT");
    VAR_0->wgl.GetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)
        FUNC_1("wglGetExtensionsStringARB");


    VAR_0->wgl.CreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)
        FUNC_1("wglCreateContextAttribsARB");


    VAR_0->wgl.SwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC)
        FUNC_1("wglSwapIntervalEXT");


    VAR_0->wgl.GetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)
        FUNC_1("wglGetPixelFormatAttribivARB");



    VAR_0->wgl.ARB_multisample =
        FUNC_0("WGL_ARB_multisample");
    VAR_0->wgl.ARB_framebuffer_sRGB =
        FUNC_0("WGL_ARB_framebuffer_sRGB");
    VAR_0->wgl.EXT_framebuffer_sRGB =
        FUNC_0("WGL_EXT_framebuffer_sRGB");
    VAR_0->wgl.ARB_create_context =
        FUNC_0("WGL_ARB_create_context");
    VAR_0->wgl.ARB_create_context_profile =
        FUNC_0("WGL_ARB_create_context_profile");
    VAR_0->wgl.EXT_create_context_es2_profile =
        FUNC_0("WGL_EXT_create_context_es2_profile");
    VAR_0->wgl.ARB_create_context_robustness =
        FUNC_0("WGL_ARB_create_context_robustness");
    VAR_0->wgl.EXT_swap_control =
        FUNC_0("WGL_EXT_swap_control");
    VAR_0->wgl.ARB_pixel_format =
        FUNC_0("WGL_ARB_pixel_format");
    VAR_0->wgl.ARB_context_flush_control =
        FUNC_0("WGL_ARB_context_flush_control");
}
