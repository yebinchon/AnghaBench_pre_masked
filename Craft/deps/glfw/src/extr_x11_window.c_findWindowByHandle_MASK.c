
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int _GLFWwindow ;
typedef int XPointer ;
typedef int Window ;
struct TYPE_3__ {int context; int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static _GLFWwindow* FUNC_1(Window VAR_1)
{
    _GLFWwindow* VAR_2;

    if (FUNC_0(VAR_0.x11.display,
                     VAR_1,
                     VAR_0.x11.context,
                     (XPointer*) &VAR_2) != 0)
    {
        return ((void*)0);
    }

    return VAR_2;
}
