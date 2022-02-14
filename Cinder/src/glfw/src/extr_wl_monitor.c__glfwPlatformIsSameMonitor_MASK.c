
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ output; } ;
struct TYPE_6__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int GLFWbool ;



GLFWbool FUNC_0(_GLFWmonitor* VAR_0, _GLFWmonitor* VAR_1)
{
    return VAR_0->wl.output == VAR_1->wl.output;
}
