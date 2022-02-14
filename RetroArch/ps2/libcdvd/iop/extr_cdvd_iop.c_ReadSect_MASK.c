
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int sceCdRMode ;
struct TYPE_2__ {int trycount; int spindlctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int,void*,int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(u32 VAR_3, u32 VAR_4, void *VAR_5, sceCdRMode *VAR_6)
{
    int VAR_7;
    int VAR_8 = 0;
    VAR_2.trycount = 32;

    for (VAR_7 = 0; VAR_7 < 32; VAR_7++)
    {
        if (VAR_7 <= 8)
            VAR_2.spindlctrl = 1;
        else
            VAR_2.spindlctrl = 0;

        if (!FUNC_0())
            return VAR_0;

        FUNC_2(0);

        if (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6) != VAR_1) {

            if (VAR_7 == 31) {

                FUNC_1(VAR_5, 0, (VAR_4 << 11));

                return VAR_0;
            }
        } else {

            FUNC_5(0);
            break;
        }

        VAR_8 = FUNC_3();
        if (VAR_8 == 0)
            break;
    }

    VAR_2.trycount = 32;
    VAR_2.spindlctrl = 1;

    if (VAR_8 == 0)
        return VAR_1;

    FUNC_1(VAR_5, 0, (VAR_4 << 11));

    return VAR_0;
}
