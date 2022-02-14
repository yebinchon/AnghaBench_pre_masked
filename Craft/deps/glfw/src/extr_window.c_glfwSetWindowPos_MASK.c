
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ monitor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

void FUNC_3(GLFWwindow* VAR_1, int VAR_2, int VAR_3)
{
    _GLFWwindow* VAR_4 = (_GLFWwindow*) VAR_1;

    FUNC_0();

    if (VAR_4->monitor)
    {
        FUNC_1(VAR_0,
                        "Full screen windows cannot be moved");
        return;
    }

    FUNC_2(VAR_4, VAR_2, VAR_3);
}
