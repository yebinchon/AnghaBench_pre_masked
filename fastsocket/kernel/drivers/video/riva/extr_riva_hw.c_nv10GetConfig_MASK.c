
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int RamAmountKBytes; int RamBandwidthKBytesPerSec; int CrystalFreqKHz; int CursorStart; int VBlankBit; int MaxVClockFreqKHz; int twoHeads; int LockUnlock; int SetSurfaces3D; int SetSurfaces2D; int SetStartAddress; int UnloadStateExt; int LoadStateExt; int ShowHideCursor; int Busy; int * CURSOR; int PEXTDEV; int PFB; int PMC; } ;
typedef TYPE_1__ RIVA_HW_INST ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int) ;
 int FUNC_4 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_5
(
    RIVA_HW_INST *VAR_12,
    unsigned int VAR_13
)
{
    struct pci_dev* VAR_14;
    u32 VAR_15;
    if(VAR_13 == VAR_3) {
        VAR_14 = FUNC_3(0, 1);
        FUNC_4(VAR_14, 0x7C, &VAR_15);
        FUNC_2(VAR_14);
        VAR_12->RamAmountKBytes = (((VAR_15 >> 6) & 31) + 1) * 1024;
    } else if(VAR_13 == VAR_2) {
        VAR_14 = FUNC_3(0, 1);
        FUNC_4(VAR_14, 0x84, &VAR_15);
        FUNC_2(VAR_14);
        VAR_12->RamAmountKBytes = (((VAR_15 >> 4) & 127) + 1) * 1024;
    } else {
        switch ((FUNC_0(VAR_12->PFB, 0x0000020C) >> 20) & 0x000000FF)
        {
            case 0x02:
                VAR_12->RamAmountKBytes = 1024 * 2;
                break;
            case 0x04:
                VAR_12->RamAmountKBytes = 1024 * 4;
                break;
            case 0x08:
                VAR_12->RamAmountKBytes = 1024 * 8;
                break;
            case 0x10:
                VAR_12->RamAmountKBytes = 1024 * 16;
                break;
            case 0x20:
                VAR_12->RamAmountKBytes = 1024 * 32;
                break;
            case 0x40:
                VAR_12->RamAmountKBytes = 1024 * 64;
                break;
            case 0x80:
                VAR_12->RamAmountKBytes = 1024 * 128;
                break;
            default:
                VAR_12->RamAmountKBytes = 1024 * 16;
                break;
        }
    }
    switch ((FUNC_0(VAR_12->PFB, 0x00000000) >> 3) & 0x00000003)
    {
        case 3:
            VAR_12->RamBandwidthKBytesPerSec = 800000;
            break;
        default:
            VAR_12->RamBandwidthKBytesPerSec = 1000000;
            break;
    }
    VAR_12->CrystalFreqKHz = (FUNC_0(VAR_12->PEXTDEV, 0x0000) & (1 << 6)) ?
 14318 : 13500;

    switch (VAR_13 & 0x0ff0) {
    case 0x0170:
    case 0x0180:
    case 0x01F0:
    case 0x0250:
    case 0x0280:
    case 0x0300:
    case 0x0310:
    case 0x0320:
    case 0x0330:
    case 0x0340:
       if(FUNC_0(VAR_12->PEXTDEV, 0x0000) & (1 << 22))
           VAR_12->CrystalFreqKHz = 27000;
       break;
    default:
       break;
    }

    VAR_12->CursorStart = (VAR_12->RamAmountKBytes - 128) * 1024;
    VAR_12->CURSOR = ((void*)0);
    VAR_12->VBlankBit = 0x00000001;
    VAR_12->MaxVClockFreqKHz = 350000;



    VAR_12->Busy = VAR_8;
    VAR_12->ShowHideCursor = VAR_5;
    VAR_12->LoadStateExt = VAR_1;
    VAR_12->UnloadStateExt = VAR_7;
    VAR_12->SetStartAddress = VAR_4;
    VAR_12->SetSurfaces2D = VAR_9;
    VAR_12->SetSurfaces3D = VAR_10;
    VAR_12->LockUnlock = VAR_11;

    switch(VAR_13 & 0x0ff0) {
    case 0x0110:
    case 0x0170:
    case 0x0180:
    case 0x01F0:
    case 0x0250:
    case 0x0280:
    case 0x0300:
    case 0x0310:
    case 0x0320:
    case 0x0330:
    case 0x0340:
        VAR_12->twoHeads = VAR_6;
        break;
    default:
        VAR_12->twoHeads = VAR_0;
        break;
    }
}
