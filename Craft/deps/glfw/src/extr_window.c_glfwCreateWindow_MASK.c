
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {int width; int height; char const* title; void* focused; void* visible; int * monitor; int floating; int autoIconify; int decorated; void* resizable; } ;
typedef TYPE_3__ _GLFWwndconfig ;
struct TYPE_23__ {int width; int height; int refreshRate; int blueBits; int greenBits; int redBits; } ;
struct TYPE_27__ {int cursorPosX; int cursorPosY; int (* Clear ) (int ) ;int cursorMode; int floating; int autoIconify; int decorated; void* resizable; int * monitor; TYPE_1__ videoMode; struct TYPE_27__* next; } ;
typedef TYPE_4__ _GLFWwindow ;
typedef int _GLFWmonitor ;
struct TYPE_28__ {int blueBits; int greenBits; int redBits; } ;
typedef TYPE_5__ _GLFWfbconfig ;
struct TYPE_29__ {TYPE_4__* share; } ;
typedef TYPE_6__ _GLFWctxconfig ;
struct TYPE_25__ {int refreshRate; TYPE_3__ window; TYPE_6__ context; TYPE_5__ framebuffer; } ;
struct TYPE_24__ {TYPE_2__ hints; TYPE_4__* windowListHead; } ;
typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_22__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,TYPE_6__*,TYPE_5__*) ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int*,int*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_6__*) ;
 TYPE_4__* FUNC_13 (int,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;

GLFWwindow* FUNC_16(int VAR_5, int VAR_6,
                                     const char* VAR_7,
                                     GLFWmonitor* VAR_8,
                                     GLFWwindow* VAR_9)
{
    _GLFWfbconfig VAR_10;
    _GLFWctxconfig VAR_11;
    _GLFWwndconfig VAR_12;
    _GLFWwindow* VAR_13;
    _GLFWwindow* VAR_14;

    FUNC_0(((void*)0));

    if (VAR_5 <= 0 || VAR_6 <= 0)
    {
        FUNC_1(VAR_1, "Invalid window size");
        return ((void*)0);
    }

    VAR_10 = VAR_4.hints.framebuffer;
    VAR_11 = VAR_4.hints.context;
    VAR_12 = VAR_4.hints.window;

    VAR_12.width = VAR_5;
    VAR_12.height = VAR_6;
    VAR_12.title = VAR_7;
    VAR_12.monitor = (_GLFWmonitor*) VAR_8;
    VAR_11.share = (_GLFWwindow*) VAR_9;

    if (VAR_12.monitor)
    {
        VAR_12.resizable = VAR_3;
        VAR_12.visible = VAR_3;
        VAR_12.focused = VAR_3;
    }


    if (!FUNC_3(&VAR_11))
        return ((void*)0);

    VAR_13 = FUNC_13(1, sizeof(_GLFWwindow));
    VAR_13->next = VAR_4.windowListHead;
    VAR_4.windowListHead = VAR_13;

    VAR_13->videoMode.width = VAR_5;
    VAR_13->videoMode.height = VAR_6;
    VAR_13->videoMode.redBits = VAR_10.redBits;
    VAR_13->videoMode.greenBits = VAR_10.greenBits;
    VAR_13->videoMode.blueBits = VAR_10.blueBits;
    VAR_13->videoMode.refreshRate = VAR_4.hints.refreshRate;

    VAR_13->monitor = VAR_12.monitor;
    VAR_13->resizable = VAR_12.resizable;
    VAR_13->decorated = VAR_12.decorated;
    VAR_13->autoIconify = VAR_12.autoIconify;
    VAR_13->floating = VAR_12.floating;
    VAR_13->cursorMode = VAR_0;


    VAR_14 = FUNC_5();


    if (!FUNC_4(VAR_13, &VAR_12, &VAR_11, &VAR_10))
    {
        FUNC_14((GLFWwindow*) VAR_13);
        FUNC_7(VAR_14);
        return ((void*)0);
    }

    FUNC_7(VAR_13);


    if (!FUNC_12(&VAR_11))
    {
        FUNC_14((GLFWwindow*) VAR_13);
        FUNC_7(VAR_14);
        return ((void*)0);
    }


    if (!FUNC_2(&VAR_11))
    {
        FUNC_14((GLFWwindow*) VAR_13);
        FUNC_7(VAR_14);
        return ((void*)0);
    }



    VAR_13->Clear(VAR_2);
    FUNC_10(VAR_13);


    FUNC_7(VAR_14);

    if (VAR_12.monitor)
    {
        int VAR_15, VAR_16;
        FUNC_6(VAR_13, &VAR_15, &VAR_16);

        VAR_13->cursorPosX = VAR_15 / 2;
        VAR_13->cursorPosY = VAR_16 / 2;

        FUNC_8(VAR_13, VAR_13->cursorPosX, VAR_13->cursorPosY);
    }
    else
    {
        if (VAR_12.visible)
        {
            if (VAR_12.focused)
                FUNC_9(VAR_13);
            else
                FUNC_11(VAR_13);
        }
    }

    return (GLFWwindow*) VAR_13;
}
