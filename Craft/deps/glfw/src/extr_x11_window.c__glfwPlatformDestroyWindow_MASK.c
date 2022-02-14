
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ handle; scalar_t__ colormap; int * ic; } ;
struct TYPE_11__ {TYPE_1__ x11; scalar_t__ monitor; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef scalar_t__ Window ;
struct TYPE_10__ {int display; int context; int CLIPBOARD; } ;
struct TYPE_12__ {TYPE_2__ x11; } ;
typedef scalar_t__ Colormap ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 TYPE_8__ VAR_0 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

void FUNC_10(_GLFWwindow* VAR_1)
{
    if (VAR_1->monitor)
        FUNC_8(VAR_1);

    if (VAR_1->x11.ic)
    {
        FUNC_1(VAR_1->x11.ic);
        VAR_1->x11.ic = ((void*)0);
    }

    FUNC_7(VAR_1);

    if (VAR_1->x11.handle)
    {
        if (FUNC_5(VAR_0.x11.display, VAR_0.x11.CLIPBOARD) ==
            VAR_1->x11.handle)
        {
            FUNC_9(VAR_1);
        }

        FUNC_0(VAR_0.x11.display, VAR_1->x11.handle, VAR_0.x11.context);
        FUNC_6(VAR_0.x11.display, VAR_1->x11.handle);
        FUNC_2(VAR_0.x11.display, VAR_1->x11.handle);
        VAR_1->x11.handle = (Window) 0;
    }

    if (VAR_1->x11.colormap)
    {
        FUNC_4(VAR_0.x11.display, VAR_1->x11.colormap);
        VAR_1->x11.colormap = (Colormap) 0;
    }

    FUNC_3(VAR_0.x11.display);
}
