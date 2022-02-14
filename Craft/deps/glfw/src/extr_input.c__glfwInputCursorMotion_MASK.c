
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* cursorPos ) (int *,double,double) ;} ;
struct TYPE_5__ {scalar_t__ cursorMode; double cursorPosX; double cursorPosY; TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,double,double) ;

void FUNC_1(_GLFWwindow* VAR_1, double VAR_2, double VAR_3)
{
    if (VAR_1->cursorMode == VAR_0)
    {
        if (VAR_2 == 0.0 && VAR_3 == 0.0)
            return;

        VAR_1->cursorPosX += VAR_2;
        VAR_1->cursorPosY += VAR_3;

        VAR_2 = VAR_1->cursorPosX;
        VAR_3 = VAR_1->cursorPosY;
    }

    if (VAR_1->callbacks.cursorPos)
        VAR_1->callbacks.cursorPos((GLFWwindow*) VAR_1, VAR_2, VAR_3);
}
