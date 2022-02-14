
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


struct TYPE_23__ {int crtc; scalar_t__ oldMode; int output; } ;
struct TYPE_24__ {TYPE_3__ x11; } ;
typedef TYPE_4__ _GLFWmonitor ;
typedef int XRRScreenResources ;
struct TYPE_25__ {int nmode; int * modes; } ;
typedef TYPE_5__ XRROutputInfo ;
struct TYPE_26__ {scalar_t__ id; } ;
typedef TYPE_6__ XRRModeInfo ;
struct TYPE_27__ {int noutput; int outputs; int rotation; int y; int x; scalar_t__ mode; } ;
typedef TYPE_7__ XRRCrtcInfo ;
struct TYPE_21__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_22__ {int display; int root; TYPE_1__ randr; } ;
struct TYPE_20__ {TYPE_2__ x11; } ;
typedef scalar_t__ RRMode ;
typedef int GLboolean ;
typedef int const GLFWvidmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 TYPE_7__* FUNC_3 (int ,int *,int ) ;
 TYPE_5__* FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ,int ,int ,int ,scalar_t__,int ,int ,int ) ;
 TYPE_15__ VAR_5 ;
 int const* FUNC_7 (TYPE_4__*,int const*) ;
 scalar_t__ FUNC_8 (int const*,int const*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (TYPE_4__*,int const*) ;
 TYPE_6__* FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_6__ const*) ;
 int const FUNC_13 (TYPE_6__ const*,TYPE_7__*) ;

GLboolean FUNC_14(_GLFWmonitor* VAR_6, const GLFWvidmode* VAR_7)
{
    if (VAR_5.x11.randr.available && !VAR_5.x11.randr.monitorBroken)
    {
        XRRScreenResources* VAR_8;
        XRRCrtcInfo* VAR_9;
        XRROutputInfo* VAR_10;
        GLFWvidmode VAR_11;
        const GLFWvidmode* VAR_12;
        RRMode VAR_13 = VAR_4;
        int VAR_14;

        VAR_12 = FUNC_7(VAR_6, VAR_7);
        FUNC_10(VAR_6, &VAR_11);
        if (FUNC_8(&VAR_11, VAR_12) == 0)
            return VAR_3;

        VAR_8 = FUNC_5(VAR_5.x11.display, VAR_5.x11.root);
        VAR_9 = FUNC_3(VAR_5.x11.display, VAR_8, VAR_6->x11.crtc);
        VAR_10 = FUNC_4(VAR_5.x11.display, VAR_8, VAR_6->x11.output);

        for (VAR_14 = 0; VAR_14 < VAR_10->nmode; VAR_14++)
        {
            const XRRModeInfo* VAR_15 = FUNC_11(VAR_8, VAR_10->modes[VAR_14]);
            if (!FUNC_12(VAR_15))
                continue;

            const GLFWvidmode VAR_16 = FUNC_13(VAR_15, VAR_9);
            if (FUNC_8(VAR_12, &VAR_16) == 0)
            {
                VAR_13 = VAR_15->id;
                break;
            }
        }

        if (VAR_13)
        {
            if (VAR_6->x11.oldMode == VAR_4)
                VAR_6->x11.oldMode = VAR_9->mode;

            FUNC_6(VAR_5.x11.display,
                             VAR_8, VAR_6->x11.crtc,
                             VAR_0,
                             VAR_9->x, VAR_9->y,
                             VAR_13,
                             VAR_9->rotation,
                             VAR_9->outputs,
                             VAR_9->noutput);
        }

        FUNC_1(VAR_10);
        FUNC_0(VAR_9);
        FUNC_2(VAR_8);

        if (!VAR_13)
        {
            FUNC_9(VAR_1,
                            "X11: Monitor mode list changed");
            return VAR_2;
        }
    }

    return VAR_3;
}
