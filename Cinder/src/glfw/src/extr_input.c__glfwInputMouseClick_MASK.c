
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* mouseButton ) (int *,int,int,int) ;} ;
struct TYPE_5__ {char* mouseButtons; TYPE_1__ callbacks; scalar_t__ stickyMouseButtons; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (int *,int,int,int) ;

void FUNC_1(_GLFWwindow* VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    if (VAR_4 < 0 || VAR_4 > VAR_0)
        return;


    if (VAR_5 == VAR_1 && VAR_3->stickyMouseButtons)
        VAR_3->mouseButtons[VAR_4] = VAR_2;
    else
        VAR_3->mouseButtons[VAR_4] = (char) VAR_5;

    if (VAR_3->callbacks.mouseButton)
        VAR_3->callbacks.mouseButton((GLFWwindow*) VAR_3, VAR_4, VAR_5, VAR_6);
}
