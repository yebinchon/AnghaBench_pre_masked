
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


struct TYPE_12__ {int oldMode; int crtc; } ;
struct TYPE_13__ {TYPE_3__ x11; } ;
typedef TYPE_4__ _GLFWmonitor ;
typedef int XRRScreenResources ;
struct TYPE_14__ {int noutput; int outputs; int rotation; int y; int x; } ;
typedef TYPE_5__ XRRCrtcInfo ;
struct TYPE_10__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_11__ {int display; int root; TYPE_1__ randr; } ;
struct TYPE_15__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 (int ,int *,int ) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_7__ VAR_2 ;

void FUNC_5(_GLFWmonitor* VAR_3)
{
    if (VAR_2.x11.randr.available && !VAR_2.x11.randr.monitorBroken)
    {
        XRRScreenResources* VAR_4;
        XRRCrtcInfo* VAR_5;

        if (VAR_3->x11.oldMode == VAR_1)
            return;

        VAR_4 = FUNC_3(VAR_2.x11.display, VAR_2.x11.root);
        VAR_5 = FUNC_2(VAR_2.x11.display, VAR_4, VAR_3->x11.crtc);

        FUNC_4(VAR_2.x11.display,
                         VAR_4, VAR_3->x11.crtc,
                         VAR_0,
                         VAR_5->x, VAR_5->y,
                         VAR_3->x11.oldMode,
                         VAR_5->rotation,
                         VAR_5->outputs,
                         VAR_5->noutput);

        FUNC_0(VAR_5);
        FUNC_1(VAR_4);

        VAR_3->x11.oldMode = VAR_1;
    }
}
