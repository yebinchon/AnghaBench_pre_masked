
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
typedef scalar_t__ u16_t ;
struct TYPE_5__ {scalar_t__ staPowerSaving; int* bcmcTail; int* bcmcHead; int uniTail; int uniHead; int ** uniArray; int uapsdQ; TYPE_1__* staTable; int *** bcmcArray; } ;
struct TYPE_6__ {TYPE_2__ ap; int tick; } ;
struct TYPE_4__ {int psMode; int qosType; int qosInfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int* VAR_9 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int *,int*,scalar_t__*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int) ;

u16_t FUNC_10(zdev_t* VAR_10, zbuf_t* VAR_11, u16_t VAR_12)
{
    u16_t VAR_13;
    u16_t VAR_14[3];
    u16_t VAR_15 = 0;
    u8_t VAR_16;
    u16_t VAR_17;
    u8_t VAR_18;
    u16_t VAR_19;

    FUNC_7(VAR_10);

    FUNC_5();

    if (VAR_12 < VAR_5)
    {
        VAR_15 = VAR_12;
    }

    VAR_14[0] = FUNC_9(VAR_10, VAR_11, 0);
    VAR_14[1] = FUNC_9(VAR_10, VAR_11, 2);
    VAR_14[2] = FUNC_9(VAR_10, VAR_11, 4);

    if ((VAR_14[0] & 0x1) == 0x1)
    {
        if (VAR_8->ap.staPowerSaving > 0)
        {
            FUNC_6(VAR_10);


            if (((VAR_8->ap.bcmcTail[VAR_15]+1)&(VAR_0-1))
                    != VAR_8->ap.bcmcHead[VAR_15])
            {
                VAR_8->ap.bcmcArray[VAR_15][VAR_8->ap.bcmcTail[VAR_15]++] = VAR_11;
                VAR_8->ap.bcmcTail[VAR_15] &= (VAR_0-1);
                FUNC_8(VAR_10);

                FUNC_4(VAR_4, "Buffer BCMC");
            }
            else
            {

                FUNC_8(VAR_10);

                FUNC_4(VAR_4, "BCMC buffer full");


                FUNC_3(VAR_10, VAR_11, VAR_2);
            }
            return 1;
        }
    }
    else
    {
        FUNC_6(VAR_10);

        if ((VAR_13 = FUNC_0(VAR_10, VAR_14)) != 0xffff)
        {
            if (VAR_8->ap.staTable[VAR_13].psMode == 1)
            {

                FUNC_2(VAR_10, VAR_11, &VAR_16, &VAR_17);
                VAR_18 = VAR_9[VAR_16&0x7] & 0x3;

                if ((VAR_8->ap.staTable[VAR_13].qosType == 1) &&
                        ((VAR_8->ap.staTable[VAR_13].qosInfo & (0x8>>VAR_18)) != 0))
                {
                    VAR_19 = FUNC_1(VAR_10, VAR_8->ap.uapsdQ, VAR_11, VAR_8->tick);
                    FUNC_8(VAR_10);
                    if (VAR_19 != VAR_6)
                    {
                        FUNC_3(VAR_10, VAR_11, VAR_1);
                    }
                }
                else
                {

                if (((VAR_8->ap.uniTail+1)&(VAR_7-1))
                        != VAR_8->ap.uniHead)
                {
                    VAR_8->ap.uniArray[VAR_8->ap.uniTail++] = VAR_11;
                    VAR_8->ap.uniTail &= (VAR_7-1);
                    FUNC_8(VAR_10);
                    FUNC_4(VAR_4, "Buffer UNI");

                }
                else
                {

                    FUNC_8(VAR_10);
                    FUNC_4(VAR_4, "UNI buffer full");

                    FUNC_3(VAR_10, VAR_11, VAR_3);
                }
                }
                return 1;
            }
        }
        FUNC_8(VAR_10);
    }

    return 0;
}
