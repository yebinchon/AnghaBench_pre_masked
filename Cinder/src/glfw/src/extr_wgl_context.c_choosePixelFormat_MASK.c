
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;


struct TYPE_19__ {int dc; } ;
struct TYPE_20__ {TYPE_2__ wgl; } ;
struct TYPE_21__ {TYPE_3__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_22__ {int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; int accumRedBits; int accumGreenBits; int accumBlueBits; int accumAlphaBits; int auxBuffers; int samples; int handle; void* doublebuffer; void* stereo; void* sRGB; } ;
typedef TYPE_5__ _GLFWfbconfig ;
struct TYPE_23__ {int dwFlags; scalar_t__ iPixelType; int cRedBits; int cGreenBits; int cBlueBits; int cAlphaBits; int cDepthBits; int cStencilBits; int cAccumRedBits; int cAccumGreenBits; int cAccumBlueBits; int cAccumAlphaBits; int cAuxBuffers; } ;
struct TYPE_18__ {scalar_t__ EXT_framebuffer_sRGB; scalar_t__ ARB_framebuffer_sRGB; scalar_t__ ARB_multisample; scalar_t__ ARB_pixel_format; } ;
struct TYPE_17__ {TYPE_1__ wgl; } ;
typedef TYPE_6__ PIXELFORMATDESCRIPTOR ;


 int FUNC_0 (int ,int const,int,TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 TYPE_15__ VAR_32 ;
 TYPE_5__* FUNC_1 (TYPE_5__ const*,TYPE_5__*,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_5__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*,int const,int ) ;

__attribute__((used)) static int FUNC_6(_GLFWwindow* VAR_33, const _GLFWfbconfig* VAR_34)
{
    _GLFWfbconfig* VAR_35;
    const _GLFWfbconfig* VAR_36;
    int VAR_37, VAR_38, VAR_39, VAR_40;

    if (VAR_32.wgl.ARB_pixel_format)
    {
        VAR_39 = FUNC_5(VAR_33,
                                           1,
                                           VAR_24);
    }
    else
    {
        VAR_39 = FUNC_0(VAR_33->context.wgl.dc,
                                          1,
                                          sizeof(PIXELFORMATDESCRIPTOR),
                                          ((void*)0));
    }

    VAR_35 = FUNC_3(VAR_39, sizeof(_GLFWfbconfig));
    VAR_40 = 0;

    for (VAR_37 = 0; VAR_37 < VAR_39; VAR_37++)
    {
        const int VAR_41 = VAR_37 + 1;
        _GLFWfbconfig* VAR_42 = VAR_35 + VAR_40;

        if (VAR_32.wgl.ARB_pixel_format)
        {


            if (!FUNC_5(VAR_33, VAR_41, VAR_30) ||
                !FUNC_5(VAR_33, VAR_41, VAR_20))
            {
                continue;
            }

            if (FUNC_5(VAR_33, VAR_41, VAR_25) !=
                VAR_31)
            {
                continue;
            }

            if (FUNC_5(VAR_33, VAR_41, VAR_10) ==
                 VAR_23)
            {
                continue;
            }

            VAR_42->redBits = FUNC_5(VAR_33, VAR_41, VAR_26);
            VAR_42->greenBits = FUNC_5(VAR_33, VAR_41, VAR_22);
            VAR_42->blueBits = FUNC_5(VAR_33, VAR_41, VAR_17);
            VAR_42->alphaBits = FUNC_5(VAR_33, VAR_41, VAR_15);

            VAR_42->depthBits = FUNC_5(VAR_33, VAR_41, VAR_18);
            VAR_42->stencilBits = FUNC_5(VAR_33, VAR_41, VAR_28);

            VAR_42->accumRedBits = FUNC_5(VAR_33, VAR_41, VAR_14);
            VAR_42->accumGreenBits = FUNC_5(VAR_33, VAR_41, VAR_13);
            VAR_42->accumBlueBits = FUNC_5(VAR_33, VAR_41, VAR_12);
            VAR_42->accumAlphaBits = FUNC_5(VAR_33, VAR_41, VAR_11);

            VAR_42->auxBuffers = FUNC_5(VAR_33, VAR_41, VAR_16);

            if (FUNC_5(VAR_33, VAR_41, VAR_29))
                VAR_42->stereo = VAR_2;
            if (FUNC_5(VAR_33, VAR_41, VAR_19))
                VAR_42->doublebuffer = VAR_2;

            if (VAR_32.wgl.ARB_multisample)
                VAR_42->samples = FUNC_5(VAR_33, VAR_41, VAR_27);

            if (VAR_32.wgl.ARB_framebuffer_sRGB ||
                VAR_32.wgl.EXT_framebuffer_sRGB)
            {
                if (FUNC_5(VAR_33, VAR_41, VAR_21))
                    VAR_42->sRGB = VAR_2;
            }
        }
        else
        {
            PIXELFORMATDESCRIPTOR VAR_43;



            if (!FUNC_0(VAR_33->context.wgl.dc,
                                     VAR_41,
                                     sizeof(PIXELFORMATDESCRIPTOR),
                                     &VAR_43))
            {
                continue;
            }

            if (!(VAR_43.dwFlags & VAR_4) ||
                !(VAR_43.dwFlags & VAR_8))
            {
                continue;
            }

            if (!(VAR_43.dwFlags & VAR_5) &&
                (VAR_43.dwFlags & VAR_6))
            {
                continue;
            }

            if (VAR_43.iPixelType != VAR_9)
                continue;

            VAR_42->redBits = VAR_43.cRedBits;
            VAR_42->greenBits = VAR_43.cGreenBits;
            VAR_42->blueBits = VAR_43.cBlueBits;
            VAR_42->alphaBits = VAR_43.cAlphaBits;

            VAR_42->depthBits = VAR_43.cDepthBits;
            VAR_42->stencilBits = VAR_43.cStencilBits;

            VAR_42->accumRedBits = VAR_43.cAccumRedBits;
            VAR_42->accumGreenBits = VAR_43.cAccumGreenBits;
            VAR_42->accumBlueBits = VAR_43.cAccumBlueBits;
            VAR_42->accumAlphaBits = VAR_43.cAccumAlphaBits;

            VAR_42->auxBuffers = VAR_43.cAuxBuffers;

            if (VAR_43.dwFlags & VAR_7)
                VAR_42->stereo = VAR_2;
            if (VAR_43.dwFlags & VAR_3)
                VAR_42->doublebuffer = VAR_2;
        }

        VAR_42->handle = VAR_41;
        VAR_40++;
    }

    if (!VAR_40)
    {
        FUNC_2(VAR_0,
                        "WGL: The driver does not appear to support OpenGL");

        FUNC_4(VAR_35);
        return 0;
    }

    VAR_36 = FUNC_1(VAR_34, VAR_35, VAR_40);
    if (!VAR_36)
    {
        FUNC_2(VAR_1,
                        "WGL: Failed to find a suitable pixel format");

        FUNC_4(VAR_35);
        return 0;
    }

    VAR_38 = (int) VAR_36->handle;
    FUNC_4(VAR_35);

    return VAR_38;
}
