
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* fbsize ) (int *,int,int) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 (int *,int,int) ;

void FUNC_1(_GLFWwindow* VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_0->callbacks.fbsize)
        VAR_0->callbacks.fbsize((GLFWwindow*) VAR_0, VAR_1, VAR_2);
}
