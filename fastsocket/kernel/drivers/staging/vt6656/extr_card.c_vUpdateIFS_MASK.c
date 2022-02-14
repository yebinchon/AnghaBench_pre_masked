
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {scalar_t__ abyCurrExtSuppRates; scalar_t__ abyCurrSuppRates; } ;
struct TYPE_7__ {scalar_t__ byPacketType; int uSlot; scalar_t__ uEIFS; void* uDIFS; void* uSIFS; int uCwMax; void* uCwMin; TYPE_1__ sMgmtObj; scalar_t__ bShortSlotTime; } ;
struct TYPE_6__ {size_t len; int* abyRates; } ;
typedef TYPE_2__* PWLAN_IE_SUPP_RATES ;
typedef int PVOID ;
typedef TYPE_3__* PSDevice ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int,int*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_16 ;

void FUNC_2 (PVOID VAR_17)
{
    PSDevice VAR_18 = (PSDevice) VAR_17;

    BYTE VAR_19 = 0;
    BYTE VAR_20[4];

    if (VAR_18->byPacketType==VAR_13) {
        VAR_18->uSlot = VAR_7;
        VAR_18->uSIFS = VAR_4;
        VAR_18->uDIFS = VAR_4 + 2*VAR_7;
        VAR_18->uCwMin = VAR_1;
        VAR_19 = 4;
    }
    else if (VAR_18->byPacketType==VAR_14) {
        VAR_18->uSlot = VAR_6;
        VAR_18->uSIFS = VAR_5;
        VAR_18->uDIFS = VAR_5 + 2*VAR_6;
          VAR_18->uCwMin = VAR_2;
        VAR_19 = 5;
    }
    else {
        BYTE VAR_21 = 0;
        BOOL VAR_22 = VAR_8;
        UINT VAR_23 = 0;
        PWLAN_IE_SUPP_RATES VAR_24 = ((void*)0);

        VAR_18->uSIFS = VAR_5;
        if (VAR_18->bShortSlotTime) {
            VAR_18->uSlot = VAR_7;
        } else {
            VAR_18->uSlot = VAR_6;
        }
        VAR_18->uDIFS = VAR_5 + 2*VAR_18->uSlot;

        VAR_24 = (PWLAN_IE_SUPP_RATES)VAR_18->sMgmtObj.abyCurrSuppRates;
        for (VAR_23 = 0; VAR_23 < VAR_24->len; VAR_23++) {
            VAR_21 = (BYTE)(VAR_24->abyRates[VAR_23]&0x7F);
            if (FUNC_1(VAR_21) > VAR_15) {
                VAR_22 = VAR_16;
                break;
            }
        }
        if (VAR_22 == VAR_8) {
            VAR_24 = (PWLAN_IE_SUPP_RATES)VAR_18->sMgmtObj.abyCurrExtSuppRates;
            for (VAR_23 = 0; VAR_23 < VAR_24->len; VAR_23++) {
                VAR_21 = (BYTE)(VAR_24->abyRates[VAR_23]&0x7F);
                if (FUNC_1(VAR_21) > VAR_15) {
                    VAR_22 = VAR_16;
                    break;
                }
            }
        }
        if (VAR_22 == VAR_16) {
            VAR_18->uCwMin = VAR_1;
            VAR_19 = 4;
        } else {
            VAR_18->uCwMin = VAR_2;
            VAR_19 = 5;
        }
    }

    VAR_18->uCwMax = VAR_0;
    VAR_18->uEIFS = VAR_3;

    VAR_20[0] = (BYTE)VAR_18->uSIFS;
    VAR_20[1] = (BYTE)VAR_18->uDIFS;
    VAR_20[2] = (BYTE)VAR_18->uEIFS;
    VAR_20[3] = (BYTE)VAR_18->uSlot;
    FUNC_0(VAR_18,
                        VAR_12,
                        VAR_10,
                        VAR_11,
                        4,
                        &VAR_20[0]);

    VAR_19 |= 0xA0;
    FUNC_0(VAR_18,
                        VAR_12,
                        VAR_9,
                        VAR_11,
                        1,
                        &VAR_19);
}
