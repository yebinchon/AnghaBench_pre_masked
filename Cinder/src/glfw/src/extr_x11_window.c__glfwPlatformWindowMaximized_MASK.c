
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
struct TYPE_7__ {scalar_t__ NET_WM_STATE_MAXIMIZED_VERT; scalar_t__ NET_WM_STATE_MAXIMIZED_HORZ; int NET_WM_STATE; } ;
struct TYPE_9__ {TYPE_2__ x11; } ;
typedef int GLFWbool ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*) ;
 TYPE_5__ VAR_3 ;
 unsigned long FUNC_1 (int ,int ,int ,unsigned char**) ;

int FUNC_2(_GLFWwindow* VAR_4)
{
    Atom* VAR_5;
    unsigned long VAR_6;
    GLFWbool VAR_7 = VAR_0;
    const unsigned long VAR_8 =
        FUNC_1(VAR_4->x11.handle,
                                  VAR_3.x11.NET_WM_STATE,
                                  VAR_2,
                                  (unsigned char**) &VAR_5);

    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
    {
        if (VAR_5[VAR_6] == VAR_3.x11.NET_WM_STATE_MAXIMIZED_VERT ||
            VAR_5[VAR_6] == VAR_3.x11.NET_WM_STATE_MAXIMIZED_HORZ)
        {
            VAR_7 = VAR_1;
            break;
        }
    }

    FUNC_0(VAR_5);
    return VAR_7;
}
