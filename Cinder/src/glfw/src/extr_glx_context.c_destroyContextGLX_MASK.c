
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * handle; scalar_t__ window; } ;
struct TYPE_8__ {TYPE_3__ glx; } ;
struct TYPE_10__ {TYPE_2__ context; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_7__ {int display; } ;
struct TYPE_11__ {TYPE_1__ x11; } ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_2)
{
    if (VAR_2->context.glx.window)
    {
        FUNC_1(VAR_1.x11.display, VAR_2->context.glx.window);
        VAR_2->context.glx.window = VAR_0;
    }

    if (VAR_2->context.glx.handle)
    {
        FUNC_0(VAR_1.x11.display, VAR_2->context.glx.handle);
        VAR_2->context.glx.handle = ((void*)0);
    }
}
