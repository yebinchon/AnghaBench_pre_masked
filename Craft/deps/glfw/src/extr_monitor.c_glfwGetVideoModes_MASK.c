
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int modeCount; int const* modes; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWvidmode ;
typedef int GLFWmonitor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

const GLFWvidmode* FUNC_2(GLFWmonitor* VAR_0, int* VAR_1)
{
    _GLFWmonitor* VAR_2 = (_GLFWmonitor*) VAR_0;

    *VAR_1 = 0;

    FUNC_0(((void*)0));

    if (!FUNC_1(VAR_2))
        return ((void*)0);

    *VAR_1 = VAR_2->modeCount;
    return VAR_2->modes;
}
