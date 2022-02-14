
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int handle; } ;
struct TYPE_14__ {TYPE_2__ x11; } ;
typedef TYPE_4__ _GLFWwindow ;
struct TYPE_11__ {int target; } ;
struct TYPE_15__ {int type; TYPE_1__ xselection; } ;
typedef TYPE_5__ XEvent ;
struct TYPE_13__ {int SAVE_TARGETS; int display; int CLIPBOARD_MANAGER; } ;
struct TYPE_16__ {TYPE_3__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (int ,TYPE_5__*,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 TYPE_9__ VAR_2 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_4)
{
    FUNC_1(VAR_2.x11.display,
                      VAR_2.x11.CLIPBOARD_MANAGER,
                      VAR_2.x11.SAVE_TARGETS,
                      VAR_1,
                      VAR_4->x11.handle,
                      VAR_0);

    for (;;)
    {
        XEvent VAR_5;

        while (FUNC_0(VAR_2.x11.display, &VAR_5, VAR_3, ((void*)0)))
        {
            switch (VAR_5.type)
            {
                case 128:
                    FUNC_3(&VAR_5);
                    break;

                case 130:
                    FUNC_2(&VAR_5);
                    break;

                case 129:
                {
                    if (VAR_5.xselection.target == VAR_2.x11.SAVE_TARGETS)
                    {




                        return;
                    }

                    break;
                }
            }
        }

        FUNC_4(((void*)0));
    }
}
