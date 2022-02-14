
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {int crtc; } ;
struct TYPE_19__ {TYPE_2__ x11; } ;
typedef TYPE_5__ _GLFWmonitor ;
struct TYPE_20__ {int blue; int green; int red; } ;
typedef TYPE_6__ XRRCrtcGamma ;
struct TYPE_21__ {int blue; int green; int red; int size; } ;
struct TYPE_17__ {scalar_t__ available; } ;
struct TYPE_15__ {int gammaBroken; scalar_t__ available; } ;
struct TYPE_18__ {int screen; int display; TYPE_3__ vidmode; TYPE_1__ randr; } ;
struct TYPE_14__ {TYPE_4__ x11; } ;
typedef TYPE_7__ GLFWgammaramp ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ,int ) ;
 TYPE_11__ VAR_0 ;
 int FUNC_5 (TYPE_7__*,size_t const) ;
 int FUNC_6 (int ,int ,size_t const) ;

void FUNC_7(_GLFWmonitor* VAR_1, GLFWgammaramp* VAR_2)
{
    if (VAR_0.x11.randr.available && !VAR_0.x11.randr.gammaBroken)
    {
        const size_t VAR_3 = FUNC_4(VAR_0.x11.display,
                                                VAR_1->x11.crtc);
        XRRCrtcGamma* VAR_4 = FUNC_3(VAR_0.x11.display,
                                              VAR_1->x11.crtc);

        FUNC_5(VAR_2, VAR_3);

        FUNC_6(VAR_2->red, VAR_4->red, VAR_3 * sizeof(unsigned short));
        FUNC_6(VAR_2->green, VAR_4->green, VAR_3 * sizeof(unsigned short));
        FUNC_6(VAR_2->blue, VAR_4->blue, VAR_3 * sizeof(unsigned short));

        FUNC_2(VAR_4);
    }
}
