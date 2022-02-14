
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
struct TYPE_11__ {scalar_t__ map_state; } ;
typedef TYPE_4__ XWindowAttributes ;
struct TYPE_8__ {int display; } ;
struct TYPE_12__ {TYPE_1__ x11; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_4__*) ;
 TYPE_6__ VAR_1 ;

int FUNC_1(_GLFWwindow* VAR_2)
{
    XWindowAttributes VAR_3;
    FUNC_0(VAR_1.x11.display, VAR_2->x11.handle, &VAR_3);
    return VAR_3.map_state == VAR_0;
}
