
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* publicDisplayName; } ;
struct TYPE_4__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int GLFWmonitor ;


 int FUNC_0 (int *) ;

const char* FUNC_1(GLFWmonitor* VAR_0)
{
    _GLFWmonitor* VAR_1 = (_GLFWmonitor*) VAR_0;
    FUNC_0(((void*)0));
    return VAR_1->win32.publicDisplayName;
}
