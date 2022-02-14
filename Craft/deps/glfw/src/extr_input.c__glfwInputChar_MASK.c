
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* character ) (int *,unsigned int) ;int (* charmods ) (int *,unsigned int,int) ;} ;
struct TYPE_5__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;


 int FUNC_0 (int *,unsigned int,int) ;
 int FUNC_1 (int *,unsigned int) ;

void FUNC_2(_GLFWwindow* VAR_0, unsigned int VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_1 < 32 || (VAR_1 > 126 && VAR_1 < 160))
        return;

    if (VAR_0->callbacks.charmods)
        VAR_0->callbacks.charmods((GLFWwindow*) VAR_0, VAR_1, VAR_2);

    if (VAR_3)
    {
        if (VAR_0->callbacks.character)
            VAR_0->callbacks.character((GLFWwindow*) VAR_0, VAR_1);
    }
}
