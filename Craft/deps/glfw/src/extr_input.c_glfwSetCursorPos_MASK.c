
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cursorMode; double cursorPosX; double cursorPosY; } ;
typedef TYPE_1__ _GLFWwindow ;
struct TYPE_5__ {TYPE_1__* cursorWindow; } ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,double,double) ;

void FUNC_2(GLFWwindow* VAR_2, double VAR_3, double VAR_4)
{
    _GLFWwindow* VAR_5 = (_GLFWwindow*) VAR_2;

    FUNC_0();

    if (VAR_1.cursorWindow != VAR_5)
        return;

    if (VAR_5->cursorMode == VAR_0)
    {

        VAR_5->cursorPosX = VAR_3;
        VAR_5->cursorPosY = VAR_4;
    }
    else
    {

        FUNC_1(VAR_5, VAR_3, VAR_4);
    }
}
