
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int modesCount; } ;
struct TYPE_9__ {TYPE_1__ wl; int modes; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_8__ {int monitorsCount; TYPE_3__** monitors; } ;
struct TYPE_10__ {TYPE_2__ wl; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 void* FUNC_1 (int,int) ;

_GLFWmonitor** FUNC_2(int* VAR_1)
{
    _GLFWmonitor** VAR_2;
    _GLFWmonitor* VAR_3;
    int VAR_4, VAR_5 = VAR_0.wl.monitorsCount;

    if (VAR_0.wl.monitorsCount == 0)
        goto err;

    VAR_2 = FUNC_1(VAR_5, sizeof(_GLFWmonitor*));

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    {
        _GLFWmonitor* VAR_6 = VAR_0.wl.monitors[VAR_4];
        VAR_3 = FUNC_1(1, sizeof(_GLFWmonitor));

        VAR_3->modes =
            FUNC_0(VAR_6,
                                       &VAR_6->wl.modesCount);
        *VAR_3 = *VAR_0.wl.monitors[VAR_4];
        VAR_2[VAR_4] = VAR_3;
    }

    *VAR_1 = VAR_5;
    return VAR_2;

err:
    *VAR_1 = 0;
    return ((void*)0);
}
