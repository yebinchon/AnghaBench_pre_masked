
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RamBandwidthKBytesPerSec; int RamAmountKBytes; int CrystalFreqKHz; int VBlankBit; int MaxVClockFreqKHz; int LockUnlock; int SetSurfaces3D; int SetSurfaces2D; int SetStartAddress; int UnloadStateExt; int LoadStateExt; int ShowHideCursor; int Busy; int * PRAMIN; int * CURSOR; int * PEXTDEV; int * PFB; int * PMC; } ;
typedef TYPE_1__ RIVA_HW_INST ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1
(
    RIVA_HW_INST *VAR_8
)
{



    if (FUNC_0(&VAR_8->PFB[0x00000000/4], 0) & 0x00000020)
    {
        if (((FUNC_0(VAR_8->PMC, 0x00000000) & 0xF0) == 0x20)
         && ((FUNC_0(VAR_8->PMC, 0x00000000) & 0x0F) >= 0x02))
        {



            VAR_8->RamBandwidthKBytesPerSec = 800000;
            switch (FUNC_0(VAR_8->PFB, 0x00000000) & 0x03)
            {
                case 2:
                    VAR_8->RamAmountKBytes = 1024 * 4;
                    break;
                case 1:
                    VAR_8->RamAmountKBytes = 1024 * 2;
                    break;
                default:
                    VAR_8->RamAmountKBytes = 1024 * 8;
                    break;
            }
        }
        else
        {
            VAR_8->RamBandwidthKBytesPerSec = 1000000;
            VAR_8->RamAmountKBytes = 1024 * 8;
        }
    }
    else
    {



        VAR_8->RamBandwidthKBytesPerSec = 1000000;
        switch (FUNC_0(VAR_8->PFB, 0x00000000) & 0x00000003)
        {
            case 0:
                VAR_8->RamAmountKBytes = 1024 * 8;
                break;
            case 2:
                VAR_8->RamAmountKBytes = 1024 * 4;
                break;
            default:
                VAR_8->RamAmountKBytes = 1024 * 2;
                break;
        }
    }
    VAR_8->CrystalFreqKHz = (FUNC_0(VAR_8->PEXTDEV, 0x00000000) & 0x00000040) ? 14318 : 13500;
    VAR_8->CURSOR = &(VAR_8->PRAMIN[0x00008000/4 - 0x0800/4]);
    VAR_8->VBlankBit = 0x00000100;
    VAR_8->MaxVClockFreqKHz = 256000;



    VAR_8->Busy = VAR_4;
    VAR_8->ShowHideCursor = VAR_2;
    VAR_8->LoadStateExt = VAR_0;
    VAR_8->UnloadStateExt = VAR_3;
    VAR_8->SetStartAddress = VAR_1;
    VAR_8->SetSurfaces2D = VAR_6;
    VAR_8->SetSurfaces3D = VAR_7;
    VAR_8->LockUnlock = VAR_5;
}
