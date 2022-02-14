
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
struct TYPE_6__ {TYPE_1__* window; } ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_0)
{
    if (VAR_0->monitor->window != VAR_0)
        return;

    FUNC_0(VAR_0->monitor, ((void*)0));
    FUNC_1(VAR_0->monitor);
}
