
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const currentMode; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWvidmode ;
typedef int GLFWmonitor ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int const*) ;

const GLFWvidmode* FUNC_2(GLFWmonitor* VAR_0)
{
    _GLFWmonitor* VAR_1 = (_GLFWmonitor*) VAR_0;

    FUNC_0(((void*)0));

    FUNC_1(VAR_1, &VAR_1->currentMode);
    return &VAR_1->currentMode;
}
