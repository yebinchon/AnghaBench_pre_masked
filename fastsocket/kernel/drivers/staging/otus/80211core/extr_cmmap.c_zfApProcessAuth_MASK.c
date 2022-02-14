
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_3__ {int* authAlgo; int authSharing; scalar_t__* challengeText; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int*,int ,int,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int*,int,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,int) ;

void FUNC_11(zdev_t* VAR_5, zbuf_t* VAR_6, u16_t* VAR_7, u16_t VAR_8)
{
    u16_t VAR_9, VAR_10, VAR_11;
    u8_t VAR_12;
    u16_t VAR_13;
    u16_t VAR_14;
    u8_t VAR_15 = 0;
    u8_t VAR_16;
    u32_t VAR_17;
    u32_t VAR_18;
    FUNC_7(VAR_5);
    FUNC_5();


    VAR_16 = FUNC_9(VAR_5, VAR_6, 1);


    if ((VAR_16 & 0x40) != 0)
    {
        VAR_9 = FUNC_10(VAR_5, VAR_6, 28);
        VAR_10 = FUNC_10(VAR_5, VAR_6, 30);
        VAR_11 = FUNC_10(VAR_5, VAR_6, 32);
    }
    else
    {
        VAR_9 = FUNC_10(VAR_5, VAR_6, 24);
        VAR_10 = FUNC_10(VAR_5, VAR_6, 26);
        VAR_11 = FUNC_10(VAR_5, VAR_6, 28);
    }

    FUNC_2(VAR_0, "Rx Auth, seq=", VAR_10);


    VAR_17 = 0x20000 | VAR_9;
    VAR_18 = 13;


    if (VAR_9 == 0)
    {
        if (VAR_4->ap.authAlgo[VAR_8] == 0)
        {
            VAR_17 = 0x20000;
            if (VAR_10 == 1)
            {

                if ((VAR_13 = FUNC_0(VAR_5, VAR_7, VAR_1, VAR_8, 0, 0, 0)) != 0xffff)
                {




                    VAR_18 = 0;

                }
                else
                {

                    VAR_18 = 1;
                }
            }
            else
            {

                VAR_18 = 14;
            }
        }
    }

    else if (VAR_9 == 1)
    {
        if (VAR_4->ap.authAlgo[VAR_8] == 1)
        {
            if (VAR_10 == 1)
            {
                VAR_17 = 0x20001;


                FUNC_6(VAR_5);
                if (VAR_4->ap.authSharing == 1)
                {
                    VAR_12 = 1;
                }
                else
                {
                    VAR_12 = 0;
                    VAR_4->ap.authSharing = 1;
                }

                FUNC_8(VAR_5);

                if (VAR_12 == 1)
                {

                    VAR_18 = 1;
                }
                else
                {

                    FUNC_0(VAR_5, VAR_7, VAR_2, VAR_8, 0, 0, 0);





                    VAR_18 = 0;
                }
            }
            else if (VAR_10 == 3)
            {
                VAR_17 = 0x40001;

                if (VAR_4->ap.authSharing == 1)
                {

                    if (FUNC_4(VAR_5, VAR_6, 30+4) == 0x8010)
                    {
                        for (VAR_14=0; VAR_14<128; VAR_14++)
                        {
                            if (VAR_4->ap.challengeText[VAR_14]
                                        != FUNC_3(VAR_5, VAR_6, 32+VAR_14+4))
                            {
                                break;
                            }
                        }
                        if (VAR_14 == 128)
                        {
                            VAR_15 = 1;
                        }
                    }

                    if (VAR_15 == 1)
                    {

                        FUNC_0(VAR_5, VAR_7, VAR_1, VAR_8, 0, 0, 0);


                        VAR_18 = 0;
                    }
                    else
                    {

                        VAR_18 = 15;


                    }

                    VAR_4->ap.authSharing = 0;
                }
            }
            else
            {
                VAR_17 = 0x40001;
                VAR_18 = 14;
            }
        }
    }

    FUNC_1(VAR_5, VAR_3, VAR_7, VAR_17,
            VAR_18, VAR_8);
    return;
}
