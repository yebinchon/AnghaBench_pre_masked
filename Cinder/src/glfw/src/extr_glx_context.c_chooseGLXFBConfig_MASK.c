
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; int accumRedBits; int accumGreenBits; int accumBlueBits; int accumAlphaBits; int auxBuffers; int samples; int sRGB; uintptr_t handle; void* doublebuffer; void* stereo; } ;
typedef TYPE_3__ _GLFWfbconfig ;
struct TYPE_13__ {scalar_t__ EXT_framebuffer_sRGB; scalar_t__ ARB_framebuffer_sRGB; scalar_t__ ARB_multisample; } ;
struct TYPE_12__ {int screen; int display; } ;
struct TYPE_11__ {TYPE_2__ glx; TYPE_1__ x11; } ;
typedef scalar_t__ GLXFBConfig ;
typedef void* GLFWbool ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 int FUNC_0 (scalar_t__*) ;
 TYPE_10__ VAR_23 ;
 TYPE_3__* FUNC_1 (TYPE_3__ const*,TYPE_3__*,int) ;
 int FUNC_2 (int ,char*) ;
 TYPE_3__* FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__ const,int ) ;
 char* FUNC_6 (int ,int ) ;
 scalar_t__* FUNC_7 (int ,int ,int*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static GLFWbool FUNC_9(const _GLFWfbconfig* VAR_24, GLXFBConfig* VAR_25)
{
    GLXFBConfig* VAR_26;
    _GLFWfbconfig* VAR_27;
    const _GLFWfbconfig* VAR_28;
    int VAR_29, VAR_30, VAR_31;
    const char* VAR_32;
    GLFWbool VAR_33 = VAR_2;



    VAR_32 = FUNC_6(VAR_23.x11.display, VAR_21);
    if (FUNC_8(VAR_32, "Chromium") == 0)
        VAR_33 = VAR_1;

    VAR_26 =
        FUNC_7(VAR_23.x11.display, VAR_23.x11.screen, &VAR_30);
    if (!VAR_30)
    {
        FUNC_2(VAR_0, "GLX: No GLXFBConfigs returned");
        return VAR_1;
    }

    VAR_27 = FUNC_3(VAR_30, sizeof(_GLFWfbconfig));
    VAR_31 = 0;

    for (VAR_29 = 0; VAR_29 < VAR_30; VAR_29++)
    {
        const GLXFBConfig VAR_34 = VAR_26[VAR_29];
        _GLFWfbconfig* VAR_35 = VAR_27 + VAR_31;


        if (!(FUNC_5(VAR_34, VAR_16) & VAR_17))
            continue;


        if (!(FUNC_5(VAR_34, VAR_12) & VAR_22))
        {
            if (VAR_33)
                continue;
        }

        VAR_35->redBits = FUNC_5(VAR_34, VAR_15);
        VAR_35->greenBits = FUNC_5(VAR_34, VAR_14);
        VAR_35->blueBits = FUNC_5(VAR_34, VAR_9);

        VAR_35->alphaBits = FUNC_5(VAR_34, VAR_7);
        VAR_35->depthBits = FUNC_5(VAR_34, VAR_10);
        VAR_35->stencilBits = FUNC_5(VAR_34, VAR_19);

        VAR_35->accumRedBits = FUNC_5(VAR_34, VAR_6);
        VAR_35->accumGreenBits = FUNC_5(VAR_34, VAR_5);
        VAR_35->accumBlueBits = FUNC_5(VAR_34, VAR_4);
        VAR_35->accumAlphaBits = FUNC_5(VAR_34, VAR_3);

        VAR_35->auxBuffers = FUNC_5(VAR_34, VAR_8);

        if (FUNC_5(VAR_34, VAR_20))
            VAR_35->stereo = VAR_2;
        if (FUNC_5(VAR_34, VAR_11))
            VAR_35->doublebuffer = VAR_2;

        if (VAR_23.glx.ARB_multisample)
            VAR_35->samples = FUNC_5(VAR_34, VAR_18);

        if (VAR_23.glx.ARB_framebuffer_sRGB || VAR_23.glx.EXT_framebuffer_sRGB)
            VAR_35->sRGB = FUNC_5(VAR_34, VAR_13);

        VAR_35->handle = (uintptr_t) VAR_34;
        VAR_31++;
    }

    VAR_28 = FUNC_1(VAR_24, VAR_27, VAR_31);
    if (VAR_28)
        *VAR_25 = (GLXFBConfig) VAR_28->handle;

    FUNC_0(VAR_26);
    FUNC_4(VAR_27);

    return VAR_28 != ((void*)0);
}
