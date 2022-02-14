
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int adapterName; int displayName; } ;
struct TYPE_6__ {TYPE_1__ win32; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int GLFWbool ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

GLFWbool FUNC_2(_GLFWmonitor* VAR_0, _GLFWmonitor* VAR_1)
{
    if (FUNC_1(VAR_0->win32.displayName))
        return FUNC_0(VAR_0->win32.displayName, VAR_1->win32.displayName) == 0;
    else
        return FUNC_0(VAR_0->win32.adapterName, VAR_1->win32.adapterName) == 0;
}
