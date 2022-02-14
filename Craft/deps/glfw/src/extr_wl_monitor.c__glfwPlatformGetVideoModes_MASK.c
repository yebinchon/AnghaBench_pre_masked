
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int modesCount; TYPE_1__* modes; } ;
struct TYPE_7__ {TYPE_2__ wl; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_5__ {int base; } ;
typedef int GLFWvidmode ;


 int * FUNC_0 (int,int) ;

GLFWvidmode* FUNC_1(_GLFWmonitor* VAR_0, int* VAR_1)
{
    GLFWvidmode *VAR_2;
    int VAR_3, VAR_4 = VAR_0->wl.modesCount;

    VAR_2 = FUNC_0(VAR_4, sizeof(GLFWvidmode));

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        VAR_2[VAR_3] = VAR_0->wl.modes[VAR_3].base;

    *VAR_1 = VAR_4;
    return VAR_2;
}
