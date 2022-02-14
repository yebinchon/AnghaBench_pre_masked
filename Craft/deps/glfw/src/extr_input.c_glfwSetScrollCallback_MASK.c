
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int scroll; } ;
struct TYPE_4__ {TYPE_1__ callbacks; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int GLFWwindow ;
typedef int GLFWscrollfun ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

GLFWscrollfun FUNC_2(GLFWwindow* VAR_0,
                                            GLFWscrollfun VAR_1)
{
    _GLFWwindow* VAR_2 = (_GLFWwindow*) VAR_0;
    FUNC_0(((void*)0));
    FUNC_1(VAR_2->callbacks.scroll, VAR_1);
    return VAR_1;
}
