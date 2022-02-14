
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int api; int major; int minor; int robustness; int profile; int release; void* debug; void* forward; } ;
struct TYPE_7__ {void* visible; void* floating; void* autoIconify; void* focused; void* decorated; void* resizable; } ;
struct TYPE_6__ {int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; int accumRedBits; int accumGreenBits; int accumBlueBits; int accumAlphaBits; int auxBuffers; int samples; void* sRGB; void* doublebuffer; void* stereo; } ;
struct TYPE_9__ {int refreshRate; TYPE_3__ context; TYPE_2__ window; TYPE_1__ framebuffer; } ;
struct TYPE_10__ {TYPE_4__ hints; } ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(int VAR_4, int VAR_5)
{
    FUNC_0();

    switch (VAR_4)
    {
        case 135:
            VAR_3.hints.framebuffer.redBits = VAR_5;
            break;
        case 139:
            VAR_3.hints.framebuffer.greenBits = VAR_5;
            break;
        case 150:
            VAR_3.hints.framebuffer.blueBits = VAR_5;
            break;
        case 153:
            VAR_3.hints.framebuffer.alphaBits = VAR_5;
            break;
        case 143:
            VAR_3.hints.framebuffer.depthBits = VAR_5;
            break;
        case 130:
            VAR_3.hints.framebuffer.stencilBits = VAR_5;
            break;
        case 154:
            VAR_3.hints.framebuffer.accumRedBits = VAR_5;
            break;
        case 155:
            VAR_3.hints.framebuffer.accumGreenBits = VAR_5;
            break;
        case 156:
            VAR_3.hints.framebuffer.accumBlueBits = VAR_5;
            break;
        case 157:
            VAR_3.hints.framebuffer.accumAlphaBits = VAR_5;
            break;
        case 151:
            VAR_3.hints.framebuffer.auxBuffers = VAR_5;
            break;
        case 129:
            VAR_3.hints.framebuffer.stereo = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 142:
            VAR_3.hints.framebuffer.doublebuffer = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 132:
            VAR_3.hints.framebuffer.samples = VAR_5;
            break;
        case 131:
            VAR_3.hints.framebuffer.sRGB = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 133:
            VAR_3.hints.window.resizable = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 144:
            VAR_3.hints.window.decorated = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 140:
            VAR_3.hints.window.focused = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 152:
            VAR_3.hints.window.autoIconify = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 141:
            VAR_3.hints.window.floating = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 128:
            VAR_3.hints.window.visible = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 149:
            VAR_3.hints.context.api = VAR_5;
            break;
        case 146:
            VAR_3.hints.context.major = VAR_5;
            break;
        case 145:
            VAR_3.hints.context.minor = VAR_5;
            break;
        case 147:
            VAR_3.hints.context.robustness = VAR_5;
            break;
        case 137:
            VAR_3.hints.context.forward = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 138:
            VAR_3.hints.context.debug = VAR_5 ? VAR_2 : VAR_1;
            break;
        case 136:
            VAR_3.hints.context.profile = VAR_5;
            break;
        case 148:
            VAR_3.hints.context.release = VAR_5;
            break;
        case 134:
            VAR_3.hints.refreshRate = VAR_5;
            break;
        default:
            FUNC_1(VAR_0, "Invalid window hint");
            break;
    }
}
