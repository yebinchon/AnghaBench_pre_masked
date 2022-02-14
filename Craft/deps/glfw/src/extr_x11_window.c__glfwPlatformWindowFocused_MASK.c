
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ handle; } ;
struct TYPE_8__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef scalar_t__ Window ;
struct TYPE_6__ {int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int FUNC_0 (int ,scalar_t__*,int*) ;
 TYPE_5__ VAR_0 ;

int FUNC_1(_GLFWwindow* VAR_1)
{
    Window VAR_2;
    int VAR_3;

    FUNC_0(VAR_0.x11.display, &VAR_2, &VAR_3);
    return VAR_1->x11.handle == VAR_2;
}
