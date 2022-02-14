
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; int accumRedBits; int accumGreenBits; int accumBlueBits; int accumAlphaBits; int auxBuffers; int samples; int sRGB; int glx; void* doublebuffer; void* stereo; } ;
typedef TYPE_3__ _GLFWfbconfig ;
struct TYPE_13__ {scalar_t__ EXT_framebuffer_sRGB; scalar_t__ ARB_framebuffer_sRGB; scalar_t__ ARB_multisample; } ;
struct TYPE_12__ {int screen; int display; } ;
struct TYPE_11__ {TYPE_2__ glx; TYPE_1__ x11; } ;
typedef void* GLboolean ;
typedef int GLXFBConfig ;


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
 void* VAR_22 ;
 void* VAR_23 ;
 int FUNC_0 (int *) ;
 TYPE_10__ VAR_24 ;
 TYPE_3__* FUNC_1 (TYPE_3__ const*,TYPE_3__*,int) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ,int ,int*) ;
 TYPE_3__* FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int const,int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static GLboolean FUNC_9(const _GLFWfbconfig* VAR_25, GLXFBConfig* VAR_26)
{
    GLXFBConfig* VAR_27;
    _GLFWfbconfig* VAR_28;
    const _GLFWfbconfig* VAR_29;
    int VAR_30, VAR_31, VAR_32;
    const char* VAR_33;
    GLboolean VAR_34 = VAR_23;



    VAR_33 = FUNC_3(VAR_24.x11.display, VAR_19);
    if (FUNC_8(VAR_33, "Chromium") == 0)
        VAR_34 = VAR_22;

    VAR_27 = FUNC_4(VAR_24.x11.display, VAR_24.x11.screen,
                                          &VAR_31);
    if (!VAR_31)
    {
        FUNC_2(VAR_0, "GLX: No GLXFBConfigs returned");
        return VAR_22;
    }

    VAR_28 = FUNC_5(VAR_31, sizeof(_GLFWfbconfig));
    VAR_32 = 0;

    for (VAR_30 = 0; VAR_30 < VAR_31; VAR_30++)
    {
        const GLXFBConfig VAR_35 = VAR_27[VAR_30];
        _GLFWfbconfig* VAR_36 = VAR_28 + VAR_32;


        if (!FUNC_7(VAR_35, VAR_20))
            continue;


        if (!(FUNC_7(VAR_35, VAR_14) & VAR_15))
            continue;


        if (!(FUNC_7(VAR_35, VAR_10) & VAR_21))
        {
            if (VAR_34)
                continue;
        }

        VAR_36->redBits = FUNC_7(VAR_35, VAR_13);
        VAR_36->greenBits = FUNC_7(VAR_35, VAR_12);
        VAR_36->blueBits = FUNC_7(VAR_35, VAR_7);

        VAR_36->alphaBits = FUNC_7(VAR_35, VAR_5);
        VAR_36->depthBits = FUNC_7(VAR_35, VAR_8);
        VAR_36->stencilBits = FUNC_7(VAR_35, VAR_17);

        VAR_36->accumRedBits = FUNC_7(VAR_35, VAR_4);
        VAR_36->accumGreenBits = FUNC_7(VAR_35, VAR_3);
        VAR_36->accumBlueBits = FUNC_7(VAR_35, VAR_2);
        VAR_36->accumAlphaBits = FUNC_7(VAR_35, VAR_1);

        VAR_36->auxBuffers = FUNC_7(VAR_35, VAR_6);

        if (FUNC_7(VAR_35, VAR_18))
            VAR_36->stereo = VAR_23;
        if (FUNC_7(VAR_35, VAR_9))
            VAR_36->doublebuffer = VAR_23;

        if (VAR_24.glx.ARB_multisample)
            VAR_36->samples = FUNC_7(VAR_35, VAR_16);

        if (VAR_24.glx.ARB_framebuffer_sRGB || VAR_24.glx.EXT_framebuffer_sRGB)
            VAR_36->sRGB = FUNC_7(VAR_35, VAR_11);

        VAR_36->glx = VAR_35;
        VAR_32++;
    }

    VAR_29 = FUNC_1(VAR_25, VAR_28, VAR_32);
    if (VAR_29)
        *VAR_26 = VAR_29->glx;

    FUNC_0(VAR_27);
    FUNC_6(VAR_28);

    return VAR_29 ? VAR_23 : VAR_22;
}
