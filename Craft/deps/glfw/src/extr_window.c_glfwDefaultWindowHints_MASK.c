
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int redBits; int greenBits; int blueBits; int alphaBits; int depthBits; int stencilBits; void* doublebuffer; } ;
struct TYPE_7__ {void* autoIconify; void* focused; void* decorated; void* visible; void* resizable; } ;
struct TYPE_6__ {int major; scalar_t__ minor; int api; } ;
struct TYPE_9__ {int refreshRate; TYPE_3__ framebuffer; TYPE_2__ window; TYPE_1__ context; } ;
struct TYPE_10__ {TYPE_4__ hints; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

void FUNC_2(void)
{
    FUNC_0();

    FUNC_1(&VAR_3.hints, 0, sizeof(VAR_3.hints));


    VAR_3.hints.context.api = VAR_1;
    VAR_3.hints.context.major = 1;
    VAR_3.hints.context.minor = 0;


    VAR_3.hints.window.resizable = VAR_2;
    VAR_3.hints.window.visible = VAR_2;
    VAR_3.hints.window.decorated = VAR_2;
    VAR_3.hints.window.focused = VAR_2;
    VAR_3.hints.window.autoIconify = VAR_2;



    VAR_3.hints.framebuffer.redBits = 8;
    VAR_3.hints.framebuffer.greenBits = 8;
    VAR_3.hints.framebuffer.blueBits = 8;
    VAR_3.hints.framebuffer.alphaBits = 8;
    VAR_3.hints.framebuffer.depthBits = 24;
    VAR_3.hints.framebuffer.stencilBits = 8;
    VAR_3.hints.framebuffer.doublebuffer = VAR_2;


    VAR_3.hints.refreshRate = VAR_0;
}
