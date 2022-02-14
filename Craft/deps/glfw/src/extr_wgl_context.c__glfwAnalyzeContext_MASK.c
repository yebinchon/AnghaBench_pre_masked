
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ARB_pixel_format; scalar_t__ EXT_framebuffer_sRGB; scalar_t__ ARB_framebuffer_sRGB; scalar_t__ ARB_multisample; scalar_t__ ARB_create_context; int EXT_create_context_es2_profile; int ARB_create_context_profile; scalar_t__ ARB_context_flush_control; } ;
struct TYPE_9__ {TYPE_1__ wgl; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_10__ {scalar_t__ samples; scalar_t__ sRGB; } ;
typedef TYPE_3__ _GLFWfbconfig ;
struct TYPE_11__ {scalar_t__ api; int major; scalar_t__ minor; scalar_t__ debug; scalar_t__ release; scalar_t__ profile; scalar_t__ forward; } ;
typedef TYPE_4__ _GLFWctxconfig ;
typedef scalar_t__ GLboolean ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(const _GLFWwindow* VAR_8,
                        const _GLFWctxconfig* VAR_9,
                        const _GLFWfbconfig* VAR_10)
{
    GLboolean VAR_11 = VAR_3;

    if (VAR_9->api == VAR_1)
    {
        if (VAR_9->forward)
        {
            if (!VAR_8->wgl.ARB_create_context)
            {
                FUNC_0(VAR_2,
                                "WGL: A forward compatible OpenGL context requested but WGL_ARB_create_context is unavailable");
                return VAR_5;
            }

            VAR_11 = VAR_4;
        }

        if (VAR_9->profile)
        {
            if (!VAR_8->wgl.ARB_create_context_profile)
            {
                FUNC_0(VAR_2,
                                "WGL: OpenGL profile requested but WGL_ARB_create_context_profile is unavailable");
                return VAR_5;
            }

            VAR_11 = VAR_4;
        }

        if (VAR_9->release)
        {
            if (VAR_8->wgl.ARB_context_flush_control)
                VAR_11 = VAR_4;
        }
    }
    else
    {
        if (!VAR_8->wgl.ARB_create_context ||
            !VAR_8->wgl.ARB_create_context_profile ||
            !VAR_8->wgl.EXT_create_context_es2_profile)
        {
            FUNC_0(VAR_0,
                            "WGL: OpenGL ES requested but WGL_ARB_create_context_es2_profile is unavailable");
            return VAR_5;
        }

        VAR_11 = VAR_4;
    }

    if (VAR_9->major != 1 || VAR_9->minor != 0)
    {
        if (VAR_8->wgl.ARB_create_context)
            VAR_11 = VAR_4;
    }

    if (VAR_9->debug)
    {
        if (VAR_8->wgl.ARB_create_context)
            VAR_11 = VAR_4;
    }

    if (VAR_10->samples > 0)
    {

        if (VAR_8->wgl.ARB_multisample && VAR_8->wgl.ARB_pixel_format)
            VAR_11 = VAR_4;
    }

    if (VAR_10->sRGB)
    {

        if ((VAR_8->wgl.ARB_framebuffer_sRGB ||
             VAR_8->wgl.EXT_framebuffer_sRGB) &&
            VAR_8->wgl.ARB_pixel_format)
        {
            VAR_11 = VAR_4;
        }
    }

    if (VAR_11)
        return VAR_7;

    return VAR_6;
}
