
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double cursorPosX; double cursorPosY; } ;
struct TYPE_5__ {TYPE_1__ wl; } ;
typedef TYPE_2__ _GLFWwindow ;



void FUNC_0(_GLFWwindow* VAR_0, double* VAR_1, double* VAR_2)
{
    if (VAR_1)
        *VAR_1 = VAR_0->wl.cursorPosX;
    if (VAR_2)
        *VAR_2 = VAR_0->wl.cursorPosY;
}
