
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * dc; int * context; } ;
struct TYPE_5__ {int handle; } ;
struct TYPE_7__ {TYPE_2__ wgl; TYPE_1__ win32; } ;
typedef TYPE_3__ _GLFWwindow ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(_GLFWwindow* VAR_0)
{
    if (VAR_0->wgl.context)
    {
        FUNC_1(VAR_0->wgl.context);
        VAR_0->wgl.context = ((void*)0);
    }

    if (VAR_0->wgl.dc)
    {
        FUNC_0(VAR_0->win32.handle, VAR_0->wgl.dc);
        VAR_0->wgl.dc = ((void*)0);
    }
}
