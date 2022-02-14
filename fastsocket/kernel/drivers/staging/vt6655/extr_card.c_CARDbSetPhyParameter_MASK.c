
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {scalar_t__ byRFType; int* abyBBVGA; scalar_t__ bProtectMode; scalar_t__ bBarkerPreambleMd; int bySIFS; int byDIFS; scalar_t__ byEIFS; int bySlot; int byCWMaxMin; int eCurrentPHYType; scalar_t__ byPreambleType; scalar_t__ byShortPreamble; scalar_t__ PortOffset; int bShortSlotTime; } ;
typedef int * PWLAN_IE_SUPP_RATES ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int CARD_PHY_TYPE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int,int*) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,int *) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_14 (TYPE_1__*,int ,int *,int *) ;

BOOL FUNC_15 (PVOID VAR_25, CARD_PHY_TYPE VAR_26, WORD VAR_27, BYTE VAR_28, PVOID VAR_29, PVOID VAR_30)
{
    PSDevice VAR_31 = (PSDevice) VAR_25;
    BYTE VAR_32 = 0;
    BYTE VAR_33 = 0;
    BYTE VAR_34 = 0;
    BYTE VAR_35 = 0;
    BYTE VAR_36;

    PWLAN_IE_SUPP_RATES VAR_37 = (PWLAN_IE_SUPP_RATES) VAR_29;
    PWLAN_IE_SUPP_RATES VAR_38 = (PWLAN_IE_SUPP_RATES) VAR_30;



    if (VAR_26 == VAR_14) {
        if (VAR_37 == ((void*)0)) {
            VAR_37 = (PWLAN_IE_SUPP_RATES) VAR_22;
        }
        if (VAR_31->byRFType == VAR_17) {

            FUNC_7(VAR_31->PortOffset, VAR_2);
            VAR_31->abyBBVGA[0] = 0x20;
            VAR_31->abyBBVGA[2] = 0x10;
            VAR_31->abyBBVGA[3] = 0x10;
            FUNC_0(VAR_31->PortOffset, 0xE7, &VAR_36);
            if (VAR_36 == 0x1C) {
                FUNC_1(VAR_31->PortOffset, 0xE7, VAR_31->abyBBVGA[0]);
            }
        } else if (VAR_31->byRFType == VAR_19) {
            FUNC_7(VAR_31->PortOffset, VAR_0);
            VAR_31->abyBBVGA[0] = 0x18;
            FUNC_0(VAR_31->PortOffset, 0xE7, &VAR_36);
            if (VAR_36 == 0x14) {
                FUNC_1(VAR_31->PortOffset, 0xE7, VAR_31->abyBBVGA[0]);
                FUNC_1(VAR_31->PortOffset, 0xE1, 0x57);
            }
        } else {
            FUNC_7(VAR_31->PortOffset, VAR_0);
        }
        FUNC_1(VAR_31->PortOffset, 0x88, 0x03);
        VAR_33 = VAR_7;
        VAR_34 = VAR_4;
        VAR_35 = VAR_4 + 2*VAR_7;
        VAR_32 = 0xA4;
    } else if (VAR_26 == VAR_15) {
        if (VAR_37 == ((void*)0)) {
            VAR_37 = (PWLAN_IE_SUPP_RATES) VAR_23;
        }
        FUNC_7(VAR_31->PortOffset, VAR_1);
        if (VAR_31->byRFType == VAR_17) {
            VAR_31->abyBBVGA[0] = 0x1C;
            VAR_31->abyBBVGA[2] = 0x00;
            VAR_31->abyBBVGA[3] = 0x00;
            FUNC_0(VAR_31->PortOffset, 0xE7, &VAR_36);
            if (VAR_36 == 0x20) {
                FUNC_1(VAR_31->PortOffset, 0xE7, VAR_31->abyBBVGA[0]);
            }
        } else if (VAR_31->byRFType == VAR_19) {
            VAR_31->abyBBVGA[0] = 0x14;
            FUNC_0(VAR_31->PortOffset, 0xE7, &VAR_36);
            if (VAR_36 == 0x18) {
                FUNC_1(VAR_31->PortOffset, 0xE7, VAR_31->abyBBVGA[0]);
                FUNC_1(VAR_31->PortOffset, 0xE1, 0xD3);
            }
        }
        FUNC_1(VAR_31->PortOffset, 0x88, 0x02);
        VAR_33 = VAR_6;
        VAR_34 = VAR_5;
        VAR_35 = VAR_5 + 2*VAR_6;
        VAR_32 = 0xA5;
    } else {
        if (VAR_37 == ((void*)0)) {
            VAR_37 = (PWLAN_IE_SUPP_RATES) VAR_24;
            VAR_38 = (PWLAN_IE_SUPP_RATES) VAR_21;
        }
        FUNC_7(VAR_31->PortOffset, VAR_2);
        if (VAR_31->byRFType == VAR_17) {
            VAR_31->abyBBVGA[0] = 0x1C;
            VAR_31->abyBBVGA[2] = 0x00;
            VAR_31->abyBBVGA[3] = 0x00;
            FUNC_0(VAR_31->PortOffset, 0xE7, &VAR_36);
            if (VAR_36 == 0x20) {
                FUNC_1(VAR_31->PortOffset, 0xE7, VAR_31->abyBBVGA[0]);
            }
        } else if (VAR_31->byRFType == VAR_19) {
            VAR_31->abyBBVGA[0] = 0x14;
            FUNC_0(VAR_31->PortOffset, 0xE7, &VAR_36);
            if (VAR_36 == 0x18) {
                FUNC_1(VAR_31->PortOffset, 0xE7, VAR_31->abyBBVGA[0]);
                FUNC_1(VAR_31->PortOffset, 0xE1, 0xD3);
            }
        }
        FUNC_1(VAR_31->PortOffset, 0x88, 0x08);
        VAR_34 = VAR_5;
        if(FUNC_12(VAR_27)) {
            VAR_33 = VAR_7;
            VAR_35 = VAR_5 + 2*VAR_7;
        } else {
            VAR_33 = VAR_6;
            VAR_35 = VAR_5 + 2*VAR_6;
     }
        if (FUNC_13(VAR_37, VAR_38) > VAR_16) {
            VAR_32 = 0xA4;
        } else {
            VAR_32 = 0xA5;
        }
        if (VAR_31->bProtectMode != FUNC_10(VAR_28)) {
            VAR_31->bProtectMode = FUNC_10(VAR_28);
            if (VAR_31->bProtectMode) {
                FUNC_6(VAR_31->PortOffset);
            } else {
                FUNC_4(VAR_31->PortOffset);
            }
        }
        if (VAR_31->bBarkerPreambleMd != FUNC_9(VAR_28)) {
            VAR_31->bBarkerPreambleMd = FUNC_9(VAR_28);
            if (VAR_31->bBarkerPreambleMd) {
                FUNC_5(VAR_31->PortOffset);
            } else {
                FUNC_3(VAR_31->PortOffset);
            }
        }
    }

    if (VAR_31->byRFType == VAR_18) {


        VAR_34 -= 3;
        VAR_35 -= 3;



    }

    if (VAR_31->bySIFS != VAR_34) {
        VAR_31->bySIFS = VAR_34;
        FUNC_8(VAR_31->PortOffset + VAR_12, VAR_31->bySIFS);
    }
    if (VAR_31->byDIFS != VAR_35) {
        VAR_31->byDIFS = VAR_35;
        FUNC_8(VAR_31->PortOffset + VAR_10, VAR_31->byDIFS);
    }
    if (VAR_31->byEIFS != VAR_3) {
        VAR_31->byEIFS = VAR_3;
        FUNC_8(VAR_31->PortOffset + VAR_11, VAR_31->byEIFS);
    }
    if (VAR_31->bySlot != VAR_33) {
        VAR_31->bySlot = VAR_33;
        FUNC_8(VAR_31->PortOffset + VAR_13, VAR_31->bySlot);
        if (VAR_31->bySlot == VAR_7) {
            VAR_31->bShortSlotTime = VAR_20;
        } else {
            VAR_31->bShortSlotTime = VAR_8;
        }
        FUNC_2(VAR_31);
    }
    if (VAR_31->byCWMaxMin != VAR_32) {
        VAR_31->byCWMaxMin = VAR_32;
        FUNC_8(VAR_31->PortOffset + VAR_9, VAR_31->byCWMaxMin);
    }
    if (FUNC_11(VAR_27)) {
        VAR_31->byPreambleType = VAR_31->byShortPreamble;
    } else {
        VAR_31->byPreambleType = 0;
    }
    FUNC_14(VAR_31, VAR_26, VAR_37, VAR_38);
    VAR_31->eCurrentPHYType = VAR_26;

    return (VAR_20);
}
