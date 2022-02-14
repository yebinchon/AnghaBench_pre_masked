
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * context; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_11__ {TYPE_2__ glx; TYPE_1__ x11; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_10__ {int display; } ;
struct TYPE_12__ {TYPE_3__ x11; } ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ,int *) ;

void FUNC_2(_GLFWwindow* VAR_2)
{
    if (VAR_2)
    {
        FUNC_1(VAR_1.x11.display,
                             VAR_2->x11.handle,
                             VAR_2->glx.context);
    }
    else
        FUNC_1(VAR_1.x11.display, VAR_0, ((void*)0));

    FUNC_0(VAR_2);
}
