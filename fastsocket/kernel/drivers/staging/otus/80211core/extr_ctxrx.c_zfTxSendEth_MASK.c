
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsMicVar {int dummy; } ;
struct zsFrag {int* seq; int* bufType; int* flag; int ** buf; } ;
struct TYPE_7__ {int encryMode; int keyId; int cencKeyId; scalar_t__ wmeConnected; } ;
struct TYPE_6__ {int* bcHalKeyIdx; TYPE_1__* staTable; } ;
struct TYPE_8__ {scalar_t__ wlanMode; int fragThreshold; int * seq; TYPE_3__ sta; TYPE_2__ ap; } ;
struct TYPE_5__ {int encryMode; int keyIdx; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;




 TYPE_4__* VAR_6 ;
 size_t* VAR_7 ;
 int FUNC_0 (int *,int *,int*,int,int*,int*,int,int,int*,int*,int,int,int,size_t,int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int *,int *,int*,int,int) ;
 int FUNC_4 (int *,int *,int *,int,int,int) ;
 int FUNC_5 (int *,int *,int*,int,int,int,int,int,int*,int*,int,int*,int*,int,int *) ;
 int FUNC_6 (int *,int *,int*,int*) ;
 int FUNC_7 (int *,int *,int*,int,int*) ;
 int FUNC_8 (int *,int *,int*,int*) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int *,int) ;
 int FUNC_20 (int *,int *,int,int) ;

u16_t FUNC_21(zdev_t* VAR_8, zbuf_t* VAR_9, u16_t VAR_10, u16_t VAR_11, u16_t VAR_12)
{
    u16_t VAR_13;


    u16_t VAR_14;
    u16_t VAR_15[(8+30+2+18)/2];
    u16_t VAR_16;
    u16_t VAR_17[8/2];
    u16_t VAR_18;
    u16_t VAR_19[8/2];
    u16_t VAR_20;
    u16_t VAR_21;
    u16_t VAR_22;
    u16_t VAR_23;
    struct zsFrag VAR_24;
    u16_t VAR_25, VAR_26, VAR_27;
    u16_t VAR_28;
    u16_t VAR_29[3];
    u16_t VAR_30[3];
    u8_t VAR_31;
    u8_t VAR_32, VAR_33 = 0;
    u16_t VAR_34;
    u16_t VAR_35;
    struct zsMicVar* VAR_36;
    u8_t VAR_37 = 0;

    FUNC_17(VAR_8);

    FUNC_15();

    VAR_35 = VAR_12 & 0xff00;
    VAR_12 = VAR_12 & 0xff;

    FUNC_14(VAR_1, "zfTxSendEth(), port=", VAR_10);


    FUNC_8(VAR_8, VAR_9, &VAR_31, &VAR_34);


    if (VAR_35 & 0x100)
    {
        VAR_31 |= 0x10;
    }
    VAR_29[0] = FUNC_19(VAR_8, VAR_9, 0);
    VAR_29[1] = FUNC_19(VAR_8, VAR_9, 2);
    VAR_29[2] = FUNC_19(VAR_8, VAR_9, 4);

    VAR_30[0] = FUNC_19(VAR_8, VAR_9, 6);
    VAR_30[1] = FUNC_19(VAR_8, VAR_9, 8);
    VAR_30[2] = FUNC_19(VAR_8, VAR_9, 10);


    if (VAR_6->wlanMode == VAR_2)
    {
        VAR_33 = VAR_6->ap.bcHalKeyIdx[VAR_10];
        VAR_27 = FUNC_1(VAR_8, VAR_29);
        if (VAR_27 != 0xffff)
        {
            switch (VAR_6->ap.staTable[VAR_27].encryMode)
            {
            case 133:
            case 131:



                VAR_33 = VAR_6->ap.staTable[VAR_27].keyIdx;
                break;
            }
        }
    }
    else
    {
        switch (VAR_6->sta.encryMode)
        {
        case 128:
        case 130:
        case 129:
            VAR_33 = VAR_6->sta.keyId;
            break;
        case 133:
        case 131:
            if ((VAR_29[0] & 0x1))
                VAR_33 = 5;
            else
                VAR_33 = 4;
            break;





        }
    }


    VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_19, &VAR_20);
    if ( VAR_6->sta.encryMode == 131 )
        VAR_37 = 8;

    VAR_21 = VAR_6->fragThreshold + VAR_37;
    VAR_22 = FUNC_11(VAR_8, VAR_9);
    VAR_22 -= VAR_14;


    VAR_18 = 0;


    if (VAR_6->wlanMode == VAR_2)
    {
        FUNC_2(VAR_8, VAR_29, &VAR_32);
        if (VAR_32 == 0)
        {
            VAR_31 = 0;
        }
    }
    else if (VAR_6->wlanMode == VAR_4)
    {
        if (VAR_6->sta.wmeConnected == 0)
        {
            VAR_31 = 0;
        }
    }
    else
    {

        VAR_31 = 0;
    }


    FUNC_16(VAR_8);
    VAR_24.seq[0] = ((VAR_6->seq[VAR_7[VAR_31&0x7]]++) << 4);
    FUNC_18(VAR_8);


    VAR_24.buf[0] = VAR_9;
    VAR_24.bufType[0] = VAR_11;
    VAR_24.flag[0] = (u8_t)VAR_12;
    VAR_23 = 1;

    VAR_16 = FUNC_5(VAR_8, VAR_24.buf[0], VAR_15, VAR_24.seq[0],
                                  VAR_24.flag[0], VAR_20+VAR_18, VAR_14, VAR_10, VAR_29, VAR_30,
                                  VAR_31, &VAR_18, VAR_19, VAR_20, ((void*)0));





    if( VAR_16 != 0 )
    {
        FUNC_0(VAR_8, VAR_24.buf[0], VAR_15, VAR_20, VAR_29, VAR_30, VAR_31,
                         VAR_16, VAR_19, VAR_17, VAR_18, VAR_14, VAR_24.bufType[0],
                         VAR_7[VAR_31&0x7], VAR_33);
    }
    else
    {
        u16_t VAR_38;
        u16_t VAR_39 = 0;

        VAR_38 = VAR_15[0] - VAR_22;

        VAR_18 = FUNC_7(VAR_8, VAR_9, VAR_19, VAR_20, VAR_17);

        VAR_21 = VAR_21 - VAR_38;





        if (VAR_22 >= VAR_21)
        {

            VAR_25 = 0;
            while( VAR_22 > 0 )
            {
                if ((VAR_24.buf[VAR_25] = FUNC_9(VAR_8, VAR_21+32)) != ((void*)0))
                {
                    VAR_24.bufType[VAR_25] = VAR_0;
                    VAR_24.seq[VAR_25] = VAR_24.seq[0] + VAR_25;
                    VAR_28 = VAR_14 + VAR_25*VAR_21;


                    if ( VAR_25 >= 1 )
                        VAR_28 = VAR_28 + VAR_39*(VAR_25-1);

                    if (VAR_22 > VAR_21 + VAR_39)
                    {
                        VAR_24.flag[VAR_25] = VAR_12 | 0x4;

                        if (VAR_25 == 0)
                        {

                            for (VAR_26=0; VAR_26<VAR_20; VAR_26+=2)
                            {
                                FUNC_20(VAR_8, VAR_24.buf[VAR_25], VAR_26, VAR_19[(VAR_26>>1)]);
                            }
                            FUNC_4(VAR_8, VAR_24.buf[VAR_25], VAR_9, VAR_20, VAR_28, VAR_21);
                            FUNC_12(VAR_8, VAR_24.buf[VAR_25], VAR_20+VAR_21);


                            VAR_39 = VAR_20;

                            VAR_22 -= VAR_21;
                        }

                        else
                        {



                            FUNC_4(VAR_8, VAR_24.buf[VAR_25], VAR_9, 0, VAR_28, VAR_21+VAR_39 );
                            FUNC_12(VAR_8, VAR_24.buf[VAR_25], VAR_21+VAR_39);

                            VAR_22 -= (VAR_21+VAR_39);
                        }

                    }
                    else
                    {

                        FUNC_4(VAR_8, VAR_24.buf[VAR_25], VAR_9, 0, VAR_28, VAR_22);

                        if ( VAR_18 )
                        {
                            FUNC_3(VAR_8, VAR_24.buf[VAR_25], (u8_t*) VAR_17, VAR_22, VAR_18);
                        }
                        FUNC_12(VAR_8, VAR_24.buf[VAR_25], VAR_22+VAR_18);
                        VAR_22 = 0;
                        VAR_24.flag[VAR_25] = (u8_t)VAR_12;
                    }
                    VAR_25++;
                }
                else
                {
                    break;
                }



                FUNC_13(VAR_8, VAR_9, VAR_24.buf[VAR_25-1]);
            }
            VAR_23 = VAR_25;
            VAR_20 = VAR_18 = VAR_14 = 0;

            FUNC_10(VAR_8, VAR_9, 0);
        }

        for (VAR_25=0; VAR_25<VAR_23; VAR_25++)
        {

            VAR_16 = FUNC_5(VAR_8, VAR_24.buf[VAR_25], VAR_15, VAR_24.seq[VAR_25],
                                    VAR_24.flag[VAR_25], VAR_20+VAR_18, VAR_14, VAR_10, VAR_29, VAR_30, VAR_31, &VAR_18,
                                    VAR_19, VAR_20, ((void*)0));

            FUNC_0(VAR_8, VAR_24.buf[VAR_25], VAR_15, VAR_20, VAR_29, VAR_30, VAR_31,
                             VAR_16, VAR_19, VAR_17, VAR_18, VAR_14, VAR_24.bufType[VAR_25],
                             VAR_7[VAR_31&0x7], VAR_33);

        }
    }

    return VAR_5;
}
