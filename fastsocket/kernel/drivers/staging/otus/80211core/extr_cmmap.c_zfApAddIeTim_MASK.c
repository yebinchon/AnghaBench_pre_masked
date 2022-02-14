
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef size_t u16_t ;
struct TYPE_5__ {int* timBcmcBit; scalar_t__* bcmcTail; scalar_t__* bcmcHead; size_t uniHead; size_t uniTail; int uapsdQ; TYPE_1__* staTable; int ** uniArray; } ;
struct TYPE_6__ {scalar_t__ CurrentDtimCount; scalar_t__ dtim; TYPE_2__ ap; } ;
struct TYPE_4__ {scalar_t__ psMode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* VAR_4 ;
 size_t FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int *,size_t,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,size_t*,size_t*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,size_t) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 size_t FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int *,size_t,size_t) ;

u16_t FUNC_15(zdev_t* VAR_5, zbuf_t* VAR_6, u16_t VAR_7, u16_t VAR_8)
{
    u8_t VAR_9[9];
    u16_t VAR_10;
    u16_t VAR_11;
    u16_t VAR_12;
    u16_t VAR_13;
    u16_t VAR_14[3];
    u16_t VAR_15;
    u16_t VAR_16;
    u16_t VAR_17;
    zbuf_t* VAR_18;
    zbuf_t* VAR_19[VAR_2];
    u16_t VAR_20 = 0;

    FUNC_11(VAR_5);

    FUNC_9();


    FUNC_14(VAR_5, VAR_6, VAR_7++, VAR_3);


    VAR_12 = VAR_7++;




    VAR_4->CurrentDtimCount++;
    if (VAR_4->CurrentDtimCount >= VAR_4->dtim)
    {
        VAR_4->CurrentDtimCount = 0;
    }
    FUNC_14(VAR_5, VAR_6, VAR_7++, VAR_4->CurrentDtimCount);

    FUNC_14(VAR_5, VAR_6, VAR_7++, VAR_4->dtim);

    FUNC_14(VAR_5, VAR_6, VAR_7++, 0);


    if (VAR_4->CurrentDtimCount == 0)
    {
        FUNC_10(VAR_5);
        VAR_4->ap.timBcmcBit[VAR_8] = (VAR_4->ap.bcmcTail[VAR_8]!=VAR_4->ap.bcmcHead[VAR_8])?1:0;
        FUNC_12(VAR_5);
    }
    else
    {
        VAR_4->ap.timBcmcBit[VAR_8] = 0;
    }



    for (VAR_11=0; VAR_11<9; VAR_11++)
    {
        VAR_9[VAR_11] = 0;
    }
    VAR_10 = 0;


    FUNC_10(VAR_5);

    VAR_13 = VAR_4->ap.uniHead;
    while (VAR_13 != VAR_4->ap.uniTail)
    {
        VAR_18 = VAR_4->ap.uniArray[VAR_13];




        VAR_14[0] = FUNC_13(VAR_5, VAR_18, 0);
        VAR_14[1] = FUNC_13(VAR_5, VAR_18, 2);
        VAR_14[2] = FUNC_13(VAR_5, VAR_18, 4);
        if ((VAR_15 = FUNC_0(VAR_5, VAR_14)) != 0xffff)
        {
            if (VAR_4->ap.staTable[VAR_15].psMode != 0)
            {
                FUNC_8(VAR_0, "aid=",VAR_15);
                VAR_15++;
                FUNC_6(VAR_15<=64);
                VAR_16 = (1 << (VAR_15 & 0x7));
                VAR_17 = (VAR_15 >> 3);
                VAR_9[VAR_17] |= VAR_16;

                if (VAR_17>VAR_10)
                {
                    VAR_10 = VAR_17;
                }
                VAR_13 = (VAR_13+1) & (VAR_2-1);
            }
            else
            {
                FUNC_7(VAR_0, "Send PS frame which STA no longer in PS mode");

                FUNC_1(VAR_5, VAR_13, VAR_14);
                VAR_19[VAR_20++] = VAR_18;
            }
        }
        else
        {
            FUNC_7(VAR_0, "Free garbage PS frame");

            FUNC_1(VAR_5, VAR_13, VAR_14);
            FUNC_5(VAR_5, VAR_18, 0);
        }
    }

    FUNC_12(VAR_5);


    FUNC_4(VAR_5, VAR_4->ap.uapsdQ, VAR_9, &VAR_10);

    FUNC_8(VAR_1, "bm=",VAR_9[0]);
    FUNC_8(VAR_1, "highestByte=",VAR_10);
    FUNC_8(VAR_1, "timBcmcBit[]=",VAR_4->ap.timBcmcBit[VAR_8]);


    FUNC_14(VAR_5, VAR_6, VAR_7++,
                         VAR_9[0] | VAR_4->ap.timBcmcBit[VAR_8]);
    for (VAR_11=0; VAR_11<VAR_10; VAR_11++)
    {
        FUNC_14(VAR_5, VAR_6, VAR_7++, VAR_9[VAR_11+1]);
    }


    FUNC_14(VAR_5, VAR_6, VAR_12, VAR_10+4);

    for (VAR_11=0; VAR_11<VAR_20; VAR_11++)
    {

        FUNC_3(VAR_5, VAR_19[VAR_11]);
    }

    FUNC_2(VAR_5);

    return VAR_7;
}
