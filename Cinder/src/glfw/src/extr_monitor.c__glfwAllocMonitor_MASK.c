
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int widthMM; int heightMM; int name; } ;
typedef TYPE_1__ _GLFWmonitor ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

_GLFWmonitor* FUNC_2(const char* VAR_0, int VAR_1, int VAR_2)
{
    _GLFWmonitor* VAR_3 = FUNC_0(1, sizeof(_GLFWmonitor));
    VAR_3->name = FUNC_1(VAR_0);
    VAR_3->widthMM = VAR_1;
    VAR_3->heightMM = VAR_2;

    return VAR_3;
}
