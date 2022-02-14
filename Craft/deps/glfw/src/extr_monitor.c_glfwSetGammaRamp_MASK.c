
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_5__ {TYPE_4__ originalRamp; } ;
typedef TYPE_1__ _GLFWmonitor ;
typedef int GLFWmonitor ;
typedef int GLFWgammaramp ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

void FUNC_3(GLFWmonitor* VAR_0, const GLFWgammaramp* VAR_1)
{
    _GLFWmonitor* VAR_2 = (_GLFWmonitor*) VAR_0;

    FUNC_0();

    if (!VAR_2->originalRamp.size)
        FUNC_1(VAR_2, &VAR_2->originalRamp);

    FUNC_2(VAR_2, VAR_1);
}
