
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int output; int crtc; } ;
struct TYPE_14__ {TYPE_3__ x11; } ;
typedef TYPE_4__ _GLFWmonitor ;
typedef int XRRScreenResources ;
struct TYPE_15__ {int nmode; int * modes; } ;
typedef TYPE_5__ XRROutputInfo ;
typedef int XRRModeInfo ;
typedef int XRRCrtcInfo ;
struct TYPE_11__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_12__ {int display; int root; TYPE_1__ randr; } ;
struct TYPE_16__ {TYPE_2__ x11; } ;
typedef int GLFWvidmode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 TYPE_5__* FUNC_4 (int ,int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 TYPE_8__ VAR_0 ;
 scalar_t__ FUNC_6 (int *,int const*) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int * FUNC_8 (int,int) ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*,int *) ;

GLFWvidmode* FUNC_12(_GLFWmonitor* VAR_1, int* VAR_2)
{
    GLFWvidmode* VAR_3;

    *VAR_2 = 0;

    if (VAR_0.x11.randr.available && !VAR_0.x11.randr.monitorBroken)
    {
        int VAR_4, VAR_5;
        XRRScreenResources* VAR_6;
        XRRCrtcInfo* VAR_7;
        XRROutputInfo* VAR_8;

        VAR_6 = FUNC_5(VAR_0.x11.display, VAR_0.x11.root);
        VAR_7 = FUNC_3(VAR_0.x11.display, VAR_6, VAR_1->x11.crtc);
        VAR_8 = FUNC_4(VAR_0.x11.display, VAR_6, VAR_1->x11.output);

        VAR_3 = FUNC_8(VAR_8->nmode, sizeof(GLFWvidmode));

        for (VAR_4 = 0; VAR_4 < VAR_8->nmode; VAR_4++)
        {
            const XRRModeInfo* VAR_9 = FUNC_9(VAR_6, VAR_8->modes[VAR_4]);
            if (!FUNC_10(VAR_9))
                continue;

            const GLFWvidmode VAR_10 = FUNC_11(VAR_9, VAR_7);

            for (VAR_5 = 0; VAR_5 < *VAR_2; VAR_5++)
            {
                if (FUNC_6(VAR_3 + VAR_5, &VAR_10) == 0)
                    break;
            }


            if (VAR_5 < *VAR_2)
                continue;

            (*VAR_2)++;
            VAR_3[*VAR_2 - 1] = VAR_10;
        }

        FUNC_1(VAR_8);
        FUNC_0(VAR_7);
        FUNC_2(VAR_6);
    }
    else
    {
        *VAR_2 = 1;
        VAR_3 = FUNC_8(1, sizeof(GLFWvidmode));
        FUNC_7(VAR_1, VAR_3);
    }

    return VAR_3;
}
