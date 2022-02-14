
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int handle; } ;
struct TYPE_10__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_11__ {int width; int height; } ;
typedef TYPE_4__ XWindowAttributes ;
struct TYPE_8__ {int display; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,int ,TYPE_4__*) ;
 TYPE_6__ VAR_0 ;

void FUNC_1(_GLFWwindow* VAR_1, int* VAR_2, int* VAR_3)
{
    XWindowAttributes VAR_4;
    FUNC_0(VAR_0.x11.display, VAR_1->x11.handle, &VAR_4);

    if (VAR_2)
        *VAR_2 = VAR_4.width;
    if (VAR_3)
        *VAR_3 = VAR_4.height;
}
