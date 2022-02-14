
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cur_mode; } ;
struct TYPE_5__ {TYPE_1__ mir; int * modes; } ;
typedef TYPE_2__ _GLFWmonitor ;
typedef int GLFWvidmode ;



void FUNC_0(_GLFWmonitor* VAR_0, GLFWvidmode* VAR_1)
{
    *VAR_1 = VAR_0->modes[VAR_0->mir.cur_mode];
}
