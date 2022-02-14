
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int crtc; } ;
struct TYPE_13__ {TYPE_1__ x11; } ;
typedef TYPE_4__ _GLFWmonitor ;
typedef int XRRScreenResources ;
struct TYPE_14__ {int x; int y; } ;
typedef TYPE_5__ XRRCrtcInfo ;
struct TYPE_11__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_12__ {int display; int root; TYPE_2__ randr; } ;
struct TYPE_15__ {TYPE_3__ x11; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 TYPE_7__ VAR_0 ;

void FUNC_4(_GLFWmonitor* VAR_1, int* VAR_2, int* VAR_3)
{
    if (VAR_0.x11.randr.available && !VAR_0.x11.randr.monitorBroken)
    {
        XRRScreenResources* VAR_4;
        XRRCrtcInfo* VAR_5;

        VAR_4 = FUNC_3(VAR_0.x11.display, VAR_0.x11.root);
        VAR_5 = FUNC_2(VAR_0.x11.display, VAR_4, VAR_1->x11.crtc);

        if (VAR_2)
            *VAR_2 = VAR_5->x;
        if (VAR_3)
            *VAR_3 = VAR_5->y;

        FUNC_0(VAR_5);
        FUNC_1(VAR_4);
    }
}
