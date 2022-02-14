
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_5__ {int uapsdQ; TYPE_1__* staTable; int staPowerSaving; } ;
struct TYPE_6__ {TYPE_2__ ap; int tick; } ;
struct TYPE_4__ {scalar_t__ psMode; int qosType; int qosInfo; int vap; int state; int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int * FUNC_1 (int *,int ,int*,int*) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u16_t FUNC_8(zdev_t* VAR_3, u16_t* VAR_4, u16_t* VAR_5,
                                u8_t* VAR_6, u16_t VAR_7, u8_t* VAR_8)
{
    u16_t VAR_9;
    u8_t VAR_10 = 0;

    FUNC_6(VAR_3);

    FUNC_4();

    FUNC_5(VAR_3);





    if ((VAR_9 = FUNC_0(VAR_3, VAR_4)) != 0xffff)
    {
        if (VAR_7 != 0)
        {
            FUNC_3(VAR_1, "psMode = 1");
            if (VAR_2->ap.staTable[VAR_9].psMode == 0)
            {
                VAR_2->ap.staPowerSaving++;
            }
            else
            {
                if (VAR_2->ap.staTable[VAR_9].qosType == 1)
                {
                    FUNC_3(VAR_1, "UAPSD trigger");
                    *VAR_8 = VAR_2->ap.staTable[VAR_9].qosInfo;
                }
            }
        }
        else
        {
            if (VAR_2->ap.staTable[VAR_9].psMode != 0)
            {
                VAR_2->ap.staPowerSaving--;
                if ((VAR_2->ap.staTable[VAR_9].qosType == 1) && ((VAR_2->ap.staTable[VAR_9].qosInfo&0xf)!=0))
                {
                    VAR_10 = 1;
                }
            }
        }

        VAR_2->ap.staTable[VAR_9].psMode = (u8_t) VAR_7;
        VAR_2->ap.staTable[VAR_9].time = VAR_2->tick;
        *VAR_6 = VAR_2->ap.staTable[VAR_9].vap;
        *VAR_5 = VAR_2->ap.staTable[VAR_9++].state;
    }

    FUNC_7(VAR_3);

    if (VAR_10 == 1)
    {
        zbuf_t* VAR_11;
        u8_t VAR_12;

        while (1)
        {
            if ((VAR_11 = FUNC_1(VAR_3, VAR_2->ap.uapsdQ, (u8_t*)VAR_4, &VAR_12)) != ((void*)0))
            {
                FUNC_2(VAR_3, VAR_11, 0, VAR_0, 0);
            }
            else
            {
                break;
            }
        }
    }

    return VAR_9;
}
