
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int handle; } ;
struct TYPE_14__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_15__ {scalar_t__ y; scalar_t__ x; int flags; } ;
typedef TYPE_4__ XSizeHints ;
struct TYPE_12__ {int display; } ;
struct TYPE_16__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_4__*,long*) ;
 int FUNC_4 (int ,int ,int,int) ;
 int FUNC_5 (int ,int ,TYPE_4__*) ;
 TYPE_7__ VAR_1 ;
 int FUNC_6 (TYPE_3__*) ;

void FUNC_7(_GLFWwindow* VAR_2, int VAR_3, int VAR_4)
{


    if (!FUNC_6(VAR_2))
    {
        long VAR_5;
        XSizeHints* VAR_6 = FUNC_0();

        if (FUNC_3(VAR_1.x11.display, VAR_2->x11.handle, VAR_6, &VAR_5))
        {
            VAR_6->flags |= VAR_0;
            VAR_6->x = VAR_6->y = 0;

            FUNC_5(VAR_1.x11.display, VAR_2->x11.handle, VAR_6);
        }

        FUNC_2(VAR_6);
    }

    FUNC_4(VAR_1.x11.display, VAR_2->x11.handle, VAR_3, VAR_4);
    FUNC_1(VAR_1.x11.display);
}
