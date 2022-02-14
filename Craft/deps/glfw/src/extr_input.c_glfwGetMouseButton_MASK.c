
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* mouseButtons; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(GLFWwindow* VAR_5, int VAR_6)
{
    _GLFWwindow* VAR_7 = (_GLFWwindow*) VAR_5;

    FUNC_0(VAR_3);

    if (VAR_6 < 0 || VAR_6 > VAR_1)
    {
        FUNC_1(VAR_0,
                        "Invalid mouse button");
        return VAR_3;
    }

    if (VAR_7->mouseButtons[VAR_6] == VAR_4)
    {

        VAR_7->mouseButtons[VAR_6] = VAR_3;
        return VAR_2;
    }

    return (int) VAR_7->mouseButtons[VAR_6];
}
