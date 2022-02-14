
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsAdditionInfo {int dummy; } ;
struct TYPE_11__ {size_t CurChIndex; TYPE_4__* allowChannel; } ;
struct TYPE_9__ {int DFSEnable; } ;
struct TYPE_8__ {TYPE_1__* staTable; } ;
struct TYPE_12__ {scalar_t__ wlanMode; TYPE_5__ regulationTable; TYPE_3__ sta; TYPE_2__ ap; } ;
struct TYPE_10__ {int channelFlags; } ;
struct TYPE_7__ {int vap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int*,int) ;
 int FUNC_3 (int *,int *,int*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int*,int) ;
 int FUNC_6 (int *,int *,int*,int) ;
 int FUNC_7 (int *,int *,struct zsAdditionInfo*) ;
 int FUNC_8 (int *,int *,int*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *,int*,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *,int*,int ) ;
 int FUNC_14 (int *,int *,struct zsAdditionInfo*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *,struct zsAdditionInfo*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,char*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *,int ) ;
 int FUNC_23 (int *,int *,int) ;

void FUNC_24(zdev_t* VAR_5, zbuf_t* VAR_6, struct zsAdditionInfo* VAR_7)
{
    u8_t VAR_8;
    u16_t VAR_9[3];
    u16_t VAR_10[3];
    u16_t VAR_11 = 0, VAR_12 = 0;


    FUNC_21(VAR_5);

    VAR_10[0] = FUNC_23(VAR_5, VAR_6, 4);
    VAR_10[1] = FUNC_23(VAR_5, VAR_6, 6);
    VAR_10[2] = FUNC_23(VAR_5, VAR_6, 8);

    VAR_9[0] = FUNC_23(VAR_5, VAR_6, 10);
    VAR_9[1] = FUNC_23(VAR_5, VAR_6, 12);
    VAR_9[2] = FUNC_23(VAR_5, VAR_6, 14);

    VAR_8 = FUNC_22(VAR_5, VAR_6, 0);

    if (VAR_4->wlanMode == VAR_1)
    {

        VAR_11 = 0;
        if ((VAR_10[0] & 0x1) != 1)
        {

            if ((VAR_12 = FUNC_0(VAR_5, VAR_9)) != 0xffff)
            {
                VAR_11 = VAR_4->ap.staTable[VAR_12].vap;
            }
        }
        FUNC_20(VAR_0, "vap=", VAR_11);



        switch (VAR_8)
        {

            case 134 :
                FUNC_4(VAR_5, VAR_6);
                break;

            case 135 :
                FUNC_3(VAR_5, VAR_6, VAR_9, VAR_11);
                break;

            case 138 :

            case 129 :
                FUNC_2(VAR_5, VAR_6, VAR_9, VAR_11);
                break;

            case 137 :

                break;

            case 133 :
                FUNC_5(VAR_5, VAR_6, VAR_9, VAR_11);
                break;

            case 132 :
                FUNC_6(VAR_5, VAR_6, VAR_9, VAR_11);
                break;

            case 131 :
                FUNC_8(VAR_5, VAR_6, VAR_9);
                break;

            case 130 :
                FUNC_7(VAR_5, VAR_6, VAR_7);
                break;

            case 139 :
                FUNC_1(VAR_5, VAR_6);
                break;
        }
    }
    else
    {

        switch (VAR_8)
        {

            case 134 :

                if (((VAR_4->regulationTable.allowChannel[VAR_4->regulationTable.CurChIndex].channelFlags
                        & VAR_2) != 0) && VAR_4->sta.DFSEnable)
                {
                    VAR_4->regulationTable.allowChannel[VAR_4->regulationTable.CurChIndex].channelFlags
                            &= ~(VAR_2 & VAR_3);
                }
                FUNC_14(VAR_5, VAR_6, VAR_7);
                break;

            case 135 :

                FUNC_13(VAR_5, VAR_6, VAR_9, 0);
                break;

            case 138 :

                FUNC_10(VAR_5, VAR_6, VAR_9, 0);
                break;

            case 137 :

            case 128 :
                FUNC_11(VAR_5, VAR_6);
                break;

            case 133 :
                FUNC_18("Deauthentication received");
                FUNC_15(VAR_5, VAR_6);
                break;

            case 132 :
                FUNC_18("Disassociation received");
                FUNC_16(VAR_5, VAR_6);
                break;

            case 131 :
                FUNC_8(VAR_5, VAR_6, VAR_9);
                break;

            case 130 :

                if (((VAR_4->regulationTable.allowChannel[VAR_4->regulationTable.CurChIndex].channelFlags
                        & VAR_2) != 0) && VAR_4->sta.DFSEnable)
                {
                    VAR_4->regulationTable.allowChannel[VAR_4->regulationTable.CurChIndex].channelFlags
                            &= ~(VAR_2 & VAR_3);
                }
                FUNC_17(VAR_5, VAR_6, VAR_7);
                break;

            case 136:
                FUNC_12(VAR_5, VAR_6);
                break;

            case 139 :
                FUNC_19(VAR_0, "ProcessActionMgtFrame");
                FUNC_9(VAR_5, VAR_6);
                break;
        }
    }
}
