
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;


struct TYPE_29__ {scalar_t__ output; int index; int crtc; } ;
struct TYPE_32__ {TYPE_2__ x11; } ;
typedef TYPE_5__ _GLFWmonitor ;
struct TYPE_33__ {scalar_t__ x_org; scalar_t__ y_org; scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_6__ XineramaScreenInfo ;
struct TYPE_34__ {int noutput; int ncrtc; int * crtcs; } ;
typedef TYPE_7__ XRRScreenResources ;
struct TYPE_35__ {scalar_t__ connection; int mm_height; int mm_width; char* name; int crtc; } ;
typedef TYPE_8__ XRROutputInfo ;
struct TYPE_36__ {int noutput; scalar_t__* outputs; scalar_t__ rotation; scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; } ;
typedef TYPE_9__ XRRCrtcInfo ;
struct TYPE_30__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_28__ {scalar_t__ available; } ;
struct TYPE_31__ {int screen; int display; TYPE_3__ randr; TYPE_1__ xinerama; int root; } ;
struct TYPE_27__ {TYPE_4__ x11; } ;
typedef scalar_t__ RROutput ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_9__* FUNC_6 (int ,TYPE_7__*,int ) ;
 TYPE_8__* FUNC_7 (int ,TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 TYPE_7__* FUNC_9 (int ,int ) ;
 TYPE_6__* FUNC_10 (int ,int*) ;
 int FUNC_11 (TYPE_5__*,TYPE_5__*) ;
 TYPE_14__ VAR_5 ;
 TYPE_5__* FUNC_12 (char*,int,int) ;
 int FUNC_13 (int ,char*) ;
 TYPE_5__** FUNC_14 (int,int) ;
 int FUNC_15 (TYPE_5__**) ;

_GLFWmonitor** FUNC_16(int* VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10 = 0;
    _GLFWmonitor** VAR_11 = ((void*)0);

    *VAR_6 = 0;

    if (VAR_5.x11.randr.available)
    {
        int VAR_12 = 0;
        XineramaScreenInfo* VAR_13 = ((void*)0);
        XRRScreenResources* VAR_14 = FUNC_9(VAR_5.x11.display,
                                                       VAR_5.x11.root);
        RROutput VAR_15 = FUNC_8(VAR_5.x11.display,
                                               VAR_5.x11.root);

        VAR_11 = FUNC_14(VAR_14->noutput, sizeof(_GLFWmonitor*));

        if (VAR_5.x11.xinerama.available)
            VAR_13 = FUNC_10(VAR_5.x11.display, &VAR_12);

        for (VAR_7 = 0; VAR_7 < VAR_14->ncrtc; VAR_7++)
        {
            XRRCrtcInfo* VAR_16 = FUNC_6(VAR_5.x11.display,
                                             VAR_14, VAR_14->crtcs[VAR_7]);

            for (VAR_8 = 0; VAR_8 < VAR_16->noutput; VAR_8++)
            {
                int VAR_17, VAR_18;
                _GLFWmonitor* VAR_19;
                XRROutputInfo* VAR_20 = FUNC_7(VAR_5.x11.display,
                                                     VAR_14, VAR_16->outputs[VAR_8]);
                if (VAR_20->connection != VAR_2)
                {
                    FUNC_4(VAR_20);
                    continue;
                }

                if (VAR_16->rotation == VAR_4 || VAR_16->rotation == VAR_3)
                {
                    VAR_17 = VAR_20->mm_height;
                    VAR_18 = VAR_20->mm_width;
                }
                else
                {
                    VAR_17 = VAR_20->mm_width;
                    VAR_18 = VAR_20->mm_height;
                }

                VAR_19 = FUNC_12(VAR_20->name, VAR_17, VAR_18);
                VAR_19->x11.output = VAR_16->outputs[VAR_8];
                VAR_19->x11.crtc = VAR_20->crtc;

                for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
                {
                    if (VAR_13[VAR_9].x_org == VAR_16->x &&
                        VAR_13[VAR_9].y_org == VAR_16->y &&
                        VAR_13[VAR_9].width == VAR_16->width &&
                        VAR_13[VAR_9].height == VAR_16->height)
                    {
                        VAR_19->x11.index = VAR_9;
                        break;
                    }
                }

                FUNC_4(VAR_20);

                VAR_10++;
                VAR_11[VAR_10 - 1] = VAR_19;

                if (VAR_16->outputs[VAR_8] == VAR_15)
                    FUNC_11(VAR_11[0], VAR_11[VAR_10 - 1]);
            }

            FUNC_3(VAR_16);
        }

        FUNC_5(VAR_14);

        if (VAR_13)
            FUNC_2(VAR_13);

        if (VAR_10 == 0)
        {
            FUNC_13(VAR_0,
                            "X11: RandR monitor support seems broken");

            VAR_5.x11.randr.monitorBroken = VAR_1;
            FUNC_15(VAR_11);
            VAR_11 = ((void*)0);
        }
    }

    if (!VAR_11)
    {
        VAR_11 = FUNC_14(1, sizeof(_GLFWmonitor*));
        VAR_11[0] = FUNC_12("Display",
                                        FUNC_1(VAR_5.x11.display,
                                                       VAR_5.x11.screen),
                                        FUNC_0(VAR_5.x11.display,
                                                        VAR_5.x11.screen));
        VAR_10 = 1;
    }

    *VAR_6 = VAR_10;
    return VAR_11;
}
