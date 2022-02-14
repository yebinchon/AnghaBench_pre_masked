
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cursor; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int _GLFWcursor ;
typedef int GLFWwindow ;
typedef int GLFWcursor ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(GLFWwindow* VAR_0, GLFWcursor* VAR_1)
{
    _GLFWwindow* VAR_2 = (_GLFWwindow*) VAR_0;
    _GLFWcursor* VAR_3 = (_GLFWcursor*) VAR_1;

    FUNC_0();

    FUNC_1(VAR_2, VAR_3);

    VAR_2->cursor = VAR_3;
}
