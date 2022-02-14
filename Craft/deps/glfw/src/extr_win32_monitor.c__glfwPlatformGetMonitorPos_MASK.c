
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int adapterName; } ;
struct TYPE_10__ {TYPE_1__ win32; } ;
typedef TYPE_3__ _GLFWmonitor ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_11__ {int dmSize; TYPE_2__ dmPosition; } ;
typedef TYPE_4__ DEVMODEW ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;

void FUNC_2(_GLFWmonitor* VAR_2, int* VAR_3, int* VAR_4)
{
    DEVMODEW VAR_5;
    FUNC_1(&VAR_5, sizeof(DEVMODEW));
    VAR_5.dmSize = sizeof(DEVMODEW);

    FUNC_0(VAR_2->win32.adapterName,
                           VAR_1,
                           &VAR_5,
                           VAR_0);

    if (VAR_3)
        *VAR_3 = VAR_5.dmPosition.x;
    if (VAR_4)
        *VAR_4 = VAR_5.dmPosition.y;
}
