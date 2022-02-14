
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cursorMode; int stickyKeys; int stickyMouseButtons; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;



 int VAR_0 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(GLFWwindow* VAR_1, int VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_1;

    FUNC_0(0);

    switch (VAR_2)
    {
        case 130:
            return VAR_3->cursorMode;
        case 129:
            return VAR_3->stickyKeys;
        case 128:
            return VAR_3->stickyMouseButtons;
        default:
            FUNC_1(VAR_0, "Invalid input mode");
            return 0;
    }
}
