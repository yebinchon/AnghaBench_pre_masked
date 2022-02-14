
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWcursor ;
struct TYPE_6__ {int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

int FUNC_3(_GLFWcursor* VAR_4, int VAR_5)
{
    VAR_4->x11.handle = FUNC_0(VAR_3.x11.display,
                                           FUNC_2(VAR_5));
    if (!VAR_4->x11.handle)
    {
        FUNC_1(VAR_0,
                        "X11: Failed to create standard cursor");
        return VAR_1;
    }

    return VAR_2;
}
