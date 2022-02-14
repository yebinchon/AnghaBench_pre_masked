
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * monitor; struct TYPE_5__* next; } ;
typedef TYPE_2__ _GLFWwindow ;
typedef int _GLFWmonitor ;
struct TYPE_4__ {int (* monitor ) (int *,int ) ;} ;
struct TYPE_6__ {int monitorCount; int ** monitors; TYPE_1__ callbacks; TYPE_2__* windowListHead; } ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int) ;
 int ** FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(void)
{
    int VAR_3, VAR_4, VAR_5 = VAR_2.monitorCount;
    _GLFWmonitor** VAR_6 = VAR_2.monitors;

    VAR_2.monitors = FUNC_2(&VAR_2.monitorCount);



    for (VAR_3 = 0; VAR_3 < VAR_2.monitorCount; VAR_3++)
    {
        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
        {
            if (FUNC_3(VAR_2.monitors[VAR_3], VAR_6[VAR_4]))
            {
                FUNC_0(VAR_2.monitors[VAR_3]);
                VAR_2.monitors[VAR_3] = VAR_6[VAR_4];
                break;
            }
        }
    }



    for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
    {
        _GLFWwindow* VAR_7;

        for (VAR_4 = 0; VAR_4 < VAR_2.monitorCount; VAR_4++)
        {
            if (VAR_6[VAR_3] == VAR_2.monitors[VAR_4])
                break;
        }

        if (VAR_4 < VAR_2.monitorCount)
            continue;

        for (VAR_7 = VAR_2.windowListHead; VAR_7; VAR_7 = VAR_7->next)
        {
            if (VAR_7->monitor == VAR_6[VAR_3])
                VAR_7->monitor = ((void*)0);
        }

        if (VAR_2.callbacks.monitor)
            VAR_2.callbacks.monitor((GLFWmonitor*) VAR_6[VAR_3], VAR_1);
    }





    for (VAR_3 = 0; VAR_3 < VAR_2.monitorCount; VAR_3++)
    {
        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
        {
            if (VAR_2.monitors[VAR_3] == VAR_6[VAR_4])
            {
                VAR_6[VAR_4] = ((void*)0);
                break;
            }
        }

        if (VAR_4 < VAR_5)
            continue;

        if (VAR_2.callbacks.monitor)
            VAR_2.callbacks.monitor((GLFWmonitor*) VAR_2.monitors[VAR_3], VAR_0);
    }

    FUNC_1(VAR_6, VAR_5);
}
