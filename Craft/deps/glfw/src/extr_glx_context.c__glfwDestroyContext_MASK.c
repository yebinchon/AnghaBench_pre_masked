
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * context; int * visual; } ;
struct TYPE_8__ {TYPE_2__ glx; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_6__ {int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int FUNC_0 (int *) ;
 TYPE_5__ VAR_0 ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(_GLFWwindow* VAR_1)
{
    if (VAR_1->glx.visual)
    {
        FUNC_0(VAR_1->glx.visual);
        VAR_1->glx.visual = ((void*)0);
    }

    if (VAR_1->glx.context)
    {
        FUNC_1(VAR_0.x11.display, VAR_1->glx.context);
        VAR_1->glx.context = ((void*)0);
    }
}
