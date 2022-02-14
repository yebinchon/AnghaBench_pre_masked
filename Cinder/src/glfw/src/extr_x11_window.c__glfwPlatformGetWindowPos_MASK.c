
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
struct TYPE_8__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef int Window ;
struct TYPE_7__ {int root; int display; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int*,int*,int *) ;
 TYPE_5__ VAR_0 ;

void FUNC_1(_GLFWwindow* VAR_1, int* VAR_2, int* VAR_3)
{
    Window VAR_4;
    int VAR_5, VAR_6;

    FUNC_0(VAR_0.x11.display, VAR_1->x11.handle, VAR_0.x11.root,
                          0, 0, &VAR_5, &VAR_6, &VAR_4);

    if (VAR_2)
        *VAR_2 = VAR_5;
    if (VAR_3)
        *VAR_3 = VAR_6;
}
