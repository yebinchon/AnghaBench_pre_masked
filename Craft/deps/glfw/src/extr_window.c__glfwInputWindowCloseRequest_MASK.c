
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* close ) (int *) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; int closed; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(_GLFWwindow* VAR_1)
{
    VAR_1->closed = VAR_0;

    if (VAR_1->callbacks.close)
        VAR_1->callbacks.close((GLFWwindow*) VAR_1);
}
