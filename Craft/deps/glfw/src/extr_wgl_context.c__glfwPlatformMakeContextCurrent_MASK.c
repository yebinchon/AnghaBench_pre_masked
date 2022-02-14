
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * context; int * dc; } ;
struct TYPE_6__ {TYPE_1__ wgl; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(_GLFWwindow* VAR_0)
{
    if (VAR_0)
        FUNC_1(VAR_0->wgl.dc, VAR_0->wgl.context);
    else
        FUNC_1(((void*)0), ((void*)0));

    FUNC_0(VAR_0);
}
