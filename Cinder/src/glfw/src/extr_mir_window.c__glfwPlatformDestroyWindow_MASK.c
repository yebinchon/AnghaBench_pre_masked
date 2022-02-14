
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* destroy ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int * surface; } ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ mir; } ;
typedef TYPE_3__ _GLFWwindow ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(_GLFWwindow* VAR_0)
{
    if (FUNC_0(VAR_0->mir.surface))
    {
        FUNC_1(VAR_0->mir.surface);
        VAR_0->mir.surface = ((void*)0);
    }

    if (VAR_0->context.destroy)
        VAR_0->context.destroy(VAR_0);
}
