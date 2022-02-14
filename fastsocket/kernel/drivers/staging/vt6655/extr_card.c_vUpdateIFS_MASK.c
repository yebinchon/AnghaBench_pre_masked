
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ byPacketType; int uSlot; int uSIFS; int uDIFS; int wBasicRate; scalar_t__ byRFType; scalar_t__ PortOffset; scalar_t__ uEIFS; int uCwMax; void* uCwMin; scalar_t__ bShortSlotTime; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (scalar_t__,int) ;

void FUNC_1 (PVOID VAR_16)
{

    PSDevice VAR_17 = (PSDevice) VAR_16;

    BYTE VAR_18 = 0;
    if (VAR_17->byPacketType==VAR_13) {
        VAR_17->uSlot = VAR_7;
        VAR_17->uSIFS = VAR_4;
        VAR_17->uDIFS = VAR_4 + 2*VAR_7;
        VAR_17->uCwMin = VAR_1;
        VAR_18 = 4;
    }
    else if (VAR_17->byPacketType==VAR_14) {
        VAR_17->uSlot = VAR_6;
        VAR_17->uSIFS = VAR_5;
        VAR_17->uDIFS = VAR_5 + 2*VAR_6;
     VAR_17->uCwMin = VAR_2;
        VAR_18 = 5;
    }
    else {
        VAR_17->uSIFS = VAR_5;
        if (VAR_17->bShortSlotTime) {
            VAR_17->uSlot = VAR_7;
        } else {
         VAR_17->uSlot = VAR_6;
     }
     VAR_17->uDIFS = VAR_5 + 2*VAR_17->uSlot;
        if (VAR_17->wBasicRate & 0x0150) {
            VAR_17->uCwMin = VAR_1;
            VAR_18 = 4;
        }
        else {
            VAR_17->uCwMin = VAR_2;
            VAR_18 = 5;
        }
    }

    VAR_17->uCwMax = VAR_0;
    VAR_17->uEIFS = VAR_3;
    if (VAR_17->byRFType == VAR_15) {

        FUNC_0(VAR_17->PortOffset + VAR_11, (BYTE)(VAR_17->uSIFS - 3));
        FUNC_0(VAR_17->PortOffset + VAR_9, (BYTE)(VAR_17->uDIFS - 3));
    } else {
        FUNC_0(VAR_17->PortOffset + VAR_11, (BYTE)VAR_17->uSIFS);
        FUNC_0(VAR_17->PortOffset + VAR_9, (BYTE)VAR_17->uDIFS);
    }
    FUNC_0(VAR_17->PortOffset + VAR_10, (BYTE)VAR_17->uEIFS);
    FUNC_0(VAR_17->PortOffset + VAR_12, (BYTE)VAR_17->uSlot);
    VAR_18 |= 0xA0;
    FUNC_0(VAR_17->PortOffset + VAR_8, (BYTE)VAR_18);
}
