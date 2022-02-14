
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {int isSiteSurvey; int latestBw40; int latestExtOffset; scalar_t__ dot11Mode; scalar_t__ hwFrequency; int OpFlags; int hwBw40; int halCapability; int hwExtOffset; scalar_t__ strongRSSI; scalar_t__ rxStrongRSSI; scalar_t__ latestFrequency; scalar_t__ coldResetNeedFreq; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_14 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__,int,int,int*,int*,int*,int*) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_5 (int *,scalar_t__*,int,int ,int ) ;
 int FUNC_6 (int *,int,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,int,int) ;
 int FUNC_8 (int *,scalar_t__,int,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int *) ;

void FUNC_14(zdev_t* VAR_15, u32_t VAR_16, u8_t VAR_17,
        u8_t VAR_18, u8_t VAR_19)
{
    u32_t VAR_20[9];
    u32_t VAR_21[3];
    u16_t VAR_22;
    u8_t VAR_23;
    u8_t VAR_24;
    u32_t VAR_25;
    u32_t VAR_26;

    int VAR_27;
    int VAR_28;
    int VAR_29;
    int VAR_30;
    struct zsHpPriv* VAR_31;

    FUNC_13(VAR_15);
    VAR_31 = VAR_14->hpPrivate;

    FUNC_12(VAR_11, "Frequency = ", VAR_16);
    FUNC_12(VAR_11, "bw40 = ", VAR_17);
    FUNC_12(VAR_11, "extOffset = ", VAR_18);

    if ( VAR_31->coldResetNeedFreq )
    {
        VAR_31->coldResetNeedFreq = 0;
        VAR_19 = 2;
        FUNC_10("zfHpSetFrequencyEx: Do ColdReset ");
    }
    if ( VAR_31->isSiteSurvey == 2 )
    {

        VAR_25 = 2000;
    }
    else
    {

        VAR_25 = 1000;
    }

    VAR_31->latestFrequency = VAR_16;
    VAR_31->latestBw40 = VAR_17;
    VAR_31->latestExtOffset = VAR_18;

    if ((VAR_31->dot11Mode == VAR_8) ||
        (VAR_31->dot11Mode == VAR_9))
    {
        if ( VAR_16 <= VAR_1 )
        {

            FUNC_1(VAR_15, VAR_12, 0x7f0007);

        }
    }


    FUNC_6(VAR_15, VAR_17, VAR_16);


    FUNC_0(0x99e0, 0x200);
    FUNC_2(VAR_15);


    if ( VAR_16 > VAR_1 )
    {

     VAR_24 = 1;
 }
    else
    {

        VAR_24 = 0;
    }

    if (((struct zsHpPriv*)VAR_14->hpPrivate)->hwFrequency > VAR_1)
        VAR_23 = 1;
    else
        VAR_23 = 0;


    if ((VAR_31->OpFlags & 0x1) == 0)
    {
        if ((((struct zsHpPriv*)VAR_14->hpPrivate)->hwFrequency == VAR_0) && (VAR_16 == VAR_2))
        {

            VAR_23 = 1;
        }
    }



    VAR_20[0] = 0 | (VAR_5 << 8);
    VAR_22 = FUNC_5(VAR_15, VAR_20, 8, VAR_13, 0);

    if ((VAR_19 != 0) || (VAR_24 != VAR_23)
            || (((struct zsHpPriv*)VAR_14->hpPrivate)->hwBw40 != VAR_17))
    {

        FUNC_11(VAR_11, "=====band switch=====");

        if (VAR_19 == 2 )
        {

            FUNC_1(VAR_15, 0x1d4004, 0x800);
            FUNC_2(VAR_15);
            FUNC_11(VAR_11, "Do cold reset BB/ADDA");
        }
        else
        {

            FUNC_1(VAR_15, 0x1d4004, 0x400);
            FUNC_2(VAR_15);
        }


        VAR_31->rxStrongRSSI = 0;
        VAR_31->strongRSSI = 0;

        FUNC_1(VAR_15, 0x1d4004, 0x0);
        FUNC_2(VAR_15);

        FUNC_4(VAR_15, VAR_16, VAR_17);




        FUNC_9(VAR_15, VAR_16);

        FUNC_7(VAR_15, VAR_16, VAR_17, VAR_18);

        VAR_20[0] = 32 | (VAR_6 << 8);
    }
    else
    {
       FUNC_7(VAR_15, VAR_16, VAR_17, VAR_18);


        VAR_20[0] = 32 | (VAR_4 << 8);
    }



    if (((struct zsHpPriv*)VAR_14->hpPrivate)->halCapability & VAR_10)
    {

        VAR_26 = 0;
    }
    else
    {

        VAR_26 = 0x100;
    }

    if (1)
 {
        if (VAR_17 == 1)
  {
   if (VAR_18 == 1) {
             FUNC_0(0x9804, VAR_26 | 0x2d4);
   }
   else {
    FUNC_0(0x9804, VAR_26 | 0x2c4);
   }




        }
        else
     {
            FUNC_0(0x9804, VAR_26 | 0x240);




        }
    }
    else
 {
        FUNC_0(0x9804, 0x0);


        if (VAR_17 == 1)
  {
            FUNC_0(0x9804, 0x4);
        }
        else
  {
            FUNC_0(0x9804, 0x0);
        }
 }
 FUNC_2(VAR_15);



 FUNC_8(VAR_15, VAR_16, VAR_17, VAR_18);



    ((struct zsHpPriv*)VAR_14->hpPrivate)->hwFrequency = (u16_t)VAR_16;
    ((struct zsHpPriv*)VAR_14->hpPrivate)->hwBw40 = VAR_17;
    ((struct zsHpPriv*)VAR_14->hpPrivate)->hwExtOffset = VAR_18;

    FUNC_3(VAR_15,
                           VAR_16, VAR_17, VAR_18,
                           &VAR_27,
                           &VAR_28,
                           &VAR_29,
                           &VAR_30);


    VAR_16 = VAR_16*1000;


    VAR_20[1] = VAR_16;
    VAR_20[2] = VAR_17;
    VAR_20[3] = (VAR_18<<2)|0x1;
    VAR_20[4] = VAR_27;
    VAR_20[5] = VAR_28;
    VAR_20[6] = VAR_29;
    VAR_20[7] = VAR_30;
    VAR_20[8] = VAR_25;

    VAR_22 = FUNC_5(VAR_15, VAR_20, 36, VAR_7, 0);



}
