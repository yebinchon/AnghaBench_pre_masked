
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwndconfig ;
typedef int _GLFWwindow ;
typedef int _GLFWfbconfig ;
typedef int _GLFWctxconfig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__ const*) ;
 int FUNC_3 (int *) ;

int FUNC_4(_GLFWwindow* VAR_2,
                              const _GLFWwndconfig* VAR_3,
                              const _GLFWctxconfig* VAR_4,
                              const _GLFWfbconfig* VAR_5)
{
    if (!FUNC_0(VAR_2, VAR_4, VAR_5))
        return VAR_0;

    if (!FUNC_2(VAR_2, VAR_3))
        return VAR_0;

    if (VAR_3->monitor)
    {
        FUNC_1(VAR_2);
        FUNC_3(VAR_2);
    }

    return VAR_1;
}
