
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {size_t cmdTail; size_t cmdHead; int isSiteSurvey; scalar_t__ freqRetryCounter; int recordFreqRetryCounter; int coldResetNeedFreq; int setValueHeavyClip; int OpFlags; int eepromImageIndex; int* eepromImage; int ctlBusy; int extBusy; scalar_t__ halReInit; int eepromImageRdReq; int halCapability; scalar_t__ hwBBHeavyClip; scalar_t__ doBBHeavyClip; scalar_t__ enableBBHeavyClip; int latestExtOffset; int latestBw40; int latestFrequency; scalar_t__ cmdPending; TYPE_1__* cmdQ; } ;
typedef int s32_t ;
struct TYPE_5__ {int* ledMode; } ;
struct TYPE_6__ {struct zsHpPriv* hpPrivate; scalar_t__ aniEnable; TYPE_2__ ledStruct; } ;
struct TYPE_4__ {scalar_t__ cmdLen; int* cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_27 ;
 int FUNC_2 (int *,int*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int*,scalar_t__*,scalar_t__*,int**) ;
 int FUNC_12 (int *,int,int,int) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ,int ,int) ;
 int FUNC_17 (int *,int*,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int*) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int,int*,int) ;
 int FUNC_23 (int *,int,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int,int) ;
 int FUNC_26 (int *,int,int) ;
 int FUNC_27 (int) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*,int) ;
 int FUNC_30 (char*,int) ;
 int FUNC_31 (int ,char*) ;
 int FUNC_32 (int ,char*,int) ;
 int FUNC_33 () ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;

void FUNC_37(zdev_t* VAR_28, u32_t* VAR_29, u16_t VAR_30)
{
    u32_t VAR_31[VAR_17/4];
    u16_t VAR_32;
    u16_t VAR_33;
    u8_t* VAR_34;
    u32_t VAR_35[VAR_17/4];
    u16_t VAR_36 = 0;
    u16_t VAR_37;
    u16_t VAR_38 = 0;
    u16_t VAR_39;
    s32_t VAR_40;
    s32_t VAR_41[4];
    struct zsHpPriv* VAR_42;

    FUNC_35(VAR_28);
    VAR_42=VAR_27->hpPrivate;


    FUNC_33();

    FUNC_34(VAR_28);

    VAR_37 = FUNC_11(VAR_28, VAR_31, &VAR_32, &VAR_33, &VAR_34);



    if (VAR_37 != 0)
    {
        FUNC_28("Error IdlRsp because none cmd!!\n");

        FUNC_36(VAR_28);
        return;

    }




    if (VAR_42->cmdTail != VAR_42->cmdHead)
    {
        VAR_38 = 1;

        VAR_36= VAR_42->cmdQ[VAR_42->cmdHead].cmdLen;
        for (VAR_39=0; VAR_39<(VAR_36>>2); VAR_39++)
        {
            VAR_35[VAR_39] = VAR_42->cmdQ[VAR_42->cmdHead].cmd[VAR_39];
        }
    }
    else
    {
        VAR_42->cmdPending = 0;
    }

    FUNC_36(VAR_28);

    if (VAR_38 == 1)
    {
        FUNC_17(VAR_28, VAR_35, VAR_36);
    }

    if (VAR_33 == VAR_23)
    {
        FUNC_0(VAR_28, 0x11772c, VAR_29[1]);
        FUNC_23(VAR_28, VAR_31[1], VAR_29[1]);
    }
    else if (VAR_33 == VAR_19)
    {
        FUNC_20(VAR_28, VAR_29+1);
    }
    else if (VAR_33 == VAR_21)
    {
        u32_t VAR_43;
        u16_t VAR_44;

        VAR_43 = (VAR_29[0] & 255);

        FUNC_22(VAR_28, VAR_31[1], VAR_29+1, VAR_43);
    }
    else if (VAR_33 == VAR_20)
    {

    }
    else if (VAR_33 == VAR_26)
    {
        FUNC_26(VAR_28, VAR_31[1], VAR_31[2]);
    }
    else if (VAR_33 == VAR_24)
    {
  FUNC_2(VAR_28, VAR_29, 0);
    }
    else if (VAR_33 == VAR_25)
    {
  FUNC_2(VAR_28, VAR_29, 1);
        FUNC_24(VAR_28);



    }
    else if (VAR_33 == VAR_18)
    {
        FUNC_28("src = zm_OID_DKTX_STATUS");
        FUNC_21(VAR_28, VAR_29[1]);
    }
    else if (VAR_33 == VAR_3)
    {
        if ( (VAR_29[1] & 0x1) || (VAR_29[1] & 0x4) )
        {
            FUNC_29("Set Frequency fail : ret = ", VAR_29[1]);




            if ( VAR_42->isSiteSurvey == 2 )
            {
                if ( VAR_42->recordFreqRetryCounter < 2 )
                {

                    FUNC_16(VAR_28, VAR_42->latestFrequency,
                                            VAR_42->latestBw40,
                                            VAR_42->latestExtOffset,
                                            2);
                    VAR_42->recordFreqRetryCounter++;
                    FUNC_29("Retry to issue the frequency change command(cold reset) counter = ", VAR_42->recordFreqRetryCounter);
                }
                else
                {

                    FUNC_28("\n\n\n\n  Fail twice cold reset \n\n\n\n");
                    VAR_42->coldResetNeedFreq = 0;
                    VAR_42->recordFreqRetryCounter = 0;
                    FUNC_6(VAR_28);
                }
            }
            else
            {

                VAR_42->coldResetNeedFreq = 1;
                VAR_42->recordFreqRetryCounter = 0;
                FUNC_6(VAR_28);
            }
        }
        else if (VAR_29[1] & 0x2)
        {
            FUNC_29("Set Frequency fail 2 : ret = ", VAR_29[1]);



            if ( VAR_42->isSiteSurvey == 2 )
            {
                if ( VAR_42->recordFreqRetryCounter < 1 )
                {

                    FUNC_16(VAR_28, VAR_42->latestFrequency,
                                            VAR_42->latestBw40,
                                            VAR_42->latestExtOffset,
                                            2);
                    VAR_42->recordFreqRetryCounter++;
                    FUNC_29("2 Retry to issue the frequency change command(cold reset) counter = ", VAR_42->recordFreqRetryCounter);
                }
                else
                {

                    FUNC_28("\n\n\n\n  2 Fail twice cold reset \n\n\n\n");
                    VAR_42->coldResetNeedFreq = 0;
                    VAR_42->recordFreqRetryCounter = 0;
                    FUNC_6(VAR_28);
                }
            }
            else
            {

                VAR_42->coldResetNeedFreq = 0;
                VAR_42->recordFreqRetryCounter = 0;
                FUNC_6(VAR_28);
            }
        }







        else
        {

            FUNC_30(" return complete, ret = ", VAR_29[1]);


            if (VAR_42->enableBBHeavyClip && VAR_42->hwBBHeavyClip &&
                VAR_42->doBBHeavyClip)
            {
                u32_t VAR_45 = 0x200;

                VAR_45 |= VAR_42->setValueHeavyClip;



                FUNC_9(VAR_28, 0x99e0+0x1bc000, VAR_45);
                FUNC_10(VAR_28);
            }

            VAR_42->coldResetNeedFreq = 0;
            VAR_42->recordFreqRetryCounter = 0;
         FUNC_6(VAR_28);
     }



        VAR_40 = ((VAR_29[2]>>19) & 0x1ff);
        if ((VAR_40 & 0x100) != 0x0)
        {
            VAR_41[0] = 0 - ((VAR_40 ^ 0x1ff) + 1);
        }
        else
        {
            VAR_41[0] = VAR_40;
        }



        VAR_40 = ((VAR_29[3]>>19) & 0x1ff);
        if ((VAR_40 & 0x100) != 0x0)
        {
            VAR_41[1] = 0 - ((VAR_40 ^ 0x1ff) + 1);
        }
        else
        {
            VAR_41[1] = VAR_40;
        }



        VAR_40 = ((VAR_29[5]>>23) & 0x1ff);
        if ((VAR_40 & 0x100) != 0x0)
        {
            VAR_41[2] = 0 - ((VAR_40 ^ 0x1ff) + 1);
        }
        else
        {
            VAR_41[2] = VAR_40;
        }



        VAR_40 = ((VAR_29[6]>>23) & 0x1ff);
        if ((VAR_40 & 0x100) != 0x0)
        {
            VAR_41[3] = 0 - ((VAR_40 ^ 0x1ff) + 1);
        }
        else
        {
            VAR_41[3] = VAR_40;
        }





    }
    else if (VAR_33 == VAR_4)
    {
        FUNC_7(VAR_28);
    }
    else if (VAR_33 == VAR_5)
    {
        FUNC_32(VAR_13, "CWM rsp[1]=", VAR_29[1]);
        FUNC_32(VAR_13, "CWM rsp[2]=", VAR_29[2]);
        FUNC_3(VAR_28, FUNC_8(VAR_29[1], VAR_29[2]));
    }
    else if (VAR_33 == VAR_14)
    {







        u8_t VAR_46[6], VAR_47, VAR_48;
        u16_t VAR_49;
        FUNC_32(VAR_13, "MAC rsp[1]=", VAR_29[1]);
        FUNC_32(VAR_13, "MAC rsp[2]=", VAR_29[2]);

        VAR_46[0] = (u8_t)(VAR_29[1] & 0xff);
        VAR_46[1] = (u8_t)((VAR_29[1]>>8) & 0xff);
        VAR_46[2] = (u8_t)((VAR_29[1]>>16) & 0xff);
        VAR_46[3] = (u8_t)((VAR_29[1]>>24) & 0xff);
        VAR_46[4] = (u8_t)(VAR_29[2] & 0xff);
        VAR_46[5] = (u8_t)((VAR_29[2]>>8) & 0xff);
        FUNC_9(VAR_28, VAR_16,
                ((((u32_t)VAR_46[3])<<24) | (((u32_t)VAR_46[2])<<16) | (((u32_t)VAR_46[1])<<8) | VAR_46[0]));
        FUNC_9(VAR_28, VAR_15,
                ((((u32_t)VAR_46[5])<<8) | VAR_46[4]));
        FUNC_10(VAR_28);

        VAR_27->ledStruct.ledMode[0] = (u16_t)(VAR_29[5]&0xffff);
        VAR_27->ledStruct.ledMode[1] = (u16_t)(VAR_29[5]>>16);
        FUNC_32(VAR_13, "ledMode[0]=", VAR_27->ledStruct.ledMode[0]);
        FUNC_32(VAR_13, "ledMode[1]=", VAR_27->ledStruct.ledMode[1]);


        FUNC_32(VAR_13, "RegDomain rsp=", VAR_29[3]);
        FUNC_32(VAR_13, "OpFlags+EepMisc=", VAR_29[4]);
        VAR_42->OpFlags = (u8_t)((VAR_29[4]>>16) & 0xff);
        if ((VAR_29[2] >> 24) == 0x1)
        {
            FUNC_31(VAR_13, "OTUS 1x2");
            VAR_42->halCapability |= VAR_10;
        }
        else
        {
            FUNC_31(VAR_13, "OTUS 2x2");
        }
        if (VAR_42->OpFlags & 0x1)
        {
            VAR_42->halCapability |= VAR_12;
        }
        if (VAR_42->OpFlags & 0x2)
        {
            VAR_42->halCapability |= VAR_11;
        }


        VAR_47 = (u8_t)((VAR_29[3] & 0x8000) >> 15);
        VAR_48 = (u8_t)((VAR_29[3] & 0x4000) >> 14);
        VAR_49 = (u16_t)(VAR_29[3] & 0x3FFF);

        if (VAR_29[3] != 0xffffffff)
        {
            if (VAR_47)
            {

                FUNC_13(VAR_28, VAR_49);
            }
            else
            {

                FUNC_14(VAR_28, VAR_49);
            }
            if (VAR_48)
            {



            }
        }
        else
        {
            FUNC_14(VAR_28, VAR_0);
        }

        FUNC_5(VAR_28, VAR_46);

    }
    else if (VAR_33 == VAR_6)
    {




        for (VAR_39=0; VAR_39<VAR_8; VAR_39++)
        {
            if (VAR_42->eepromImageIndex < 1024)
            {
                VAR_42->eepromImage[VAR_42->eepromImageIndex++] = VAR_29[VAR_39+1];
            }
        }

        if (VAR_42->eepromImageIndex == (VAR_9*VAR_8))
        {







            FUNC_32(VAR_13, "MAC [1]=", VAR_42->eepromImage[0x20c/4]);
            FUNC_32(VAR_13, "MAC [2]=", VAR_42->eepromImage[0x210/4]);
            FUNC_4(VAR_28);
        }
        else
        {
            VAR_42->eepromImageRdReq++;
            FUNC_15(VAR_28);
        }
    }
    else if (VAR_33 == VAR_7)
    {
        FUNC_25(VAR_28, VAR_31[1], VAR_31[2]);
    }
    else if (VAR_33 == VAR_1)
    {
        u32_t VAR_50, VAR_51;

        FUNC_32(VAR_13, "ANI rsp[1]=", VAR_29[1]);
        FUNC_32(VAR_13, "ANI rsp[2]=", VAR_29[2]);
        FUNC_32(VAR_13, "ANI rsp[3]=", VAR_29[3]);
        FUNC_32(VAR_13, "ANI rsp[4]=", VAR_29[4]);

        VAR_42->ctlBusy += VAR_29[1];
        VAR_42->extBusy += VAR_29[2];

        VAR_50 = 100000;

        if (VAR_50 > VAR_29[1])
        {
            VAR_51 = (VAR_50 - VAR_29[1]) / 100;
        }
        else
        {
            VAR_51 = 0;
        }
        if (VAR_27->aniEnable)
            FUNC_12(VAR_28, VAR_51, VAR_29[3], VAR_29[4]);
    }
    else if (VAR_33 == VAR_2)
    {
        if ( ((struct zsHpPriv*)VAR_27->hpPrivate)->halReInit )
        {
            FUNC_4(VAR_28);
            ((struct zsHpPriv*)VAR_27->hpPrivate)->halReInit = 0;
        }
        else
        {
            FUNC_15(VAR_28);
        }
    }
    else if (VAR_33 == VAR_22)
    {
        FUNC_19(VAR_28);
    }
    return;
}
