
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * surface; } ;
struct TYPE_6__ {TYPE_1__ mir; } ;
typedef TYPE_2__ _GLFWwindow ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(_GLFWwindow* VAR_0)
{
    if (FUNC_1(VAR_0->mir.surface))
    {
        FUNC_2(VAR_0->mir.surface);
        VAR_0->mir.surface = ((void*)0);
    }

    FUNC_0(VAR_0);
}
