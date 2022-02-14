
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct nvidia_par {int Chipset; int RamAmountKBytes; int CrystalFreqKHz; int MinVClockFreqKHz; int MaxVClockFreqKHz; scalar_t__ twoStagePLL; int * CURSOR; int PEXTDEV; scalar_t__ twoHeads; int PFB; int PMC; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*) ;
 struct pci_dev* FUNC_4 (int ,int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_6(struct nvidia_par *VAR_0)
{
 struct pci_dev *VAR_1;
 u32 VAR_2 = VAR_0->Chipset & 0x0ff0;
 VAR_1 = FUNC_4(0, 1);
 if ((VAR_0->Chipset & 0xffff) == 0x01a0) {
  u32 VAR_3;

  FUNC_5(VAR_1, 0x7c, &VAR_3);
  VAR_0->RamAmountKBytes = (((VAR_3 >> 6) & 31) + 1) * 1024;
 } else if ((VAR_0->Chipset & 0xffff) == 0x01f0) {
  u32 VAR_4;

  FUNC_5(VAR_1, 0x84, &VAR_4);
  VAR_0->RamAmountKBytes = (((VAR_4 >> 4) & 127) + 1) * 1024;
 } else {
  VAR_0->RamAmountKBytes =
      (FUNC_0(VAR_0->PFB, 0x020C) & 0xFFF00000) >> 10;
 }
 FUNC_3(VAR_1);

 VAR_0->CrystalFreqKHz = (FUNC_0(VAR_0->PEXTDEV, 0x0000) & (1 << 6)) ?
     14318 : 13500;

 if (VAR_0->twoHeads && (VAR_2 != 0x0110)) {
  if (FUNC_0(VAR_0->PEXTDEV, 0x0000) & (1 << 22))
   VAR_0->CrystalFreqKHz = 27000;
 }

 VAR_0->CURSOR = ((void*)0);
 VAR_0->MinVClockFreqKHz = 12000;
 VAR_0->MaxVClockFreqKHz = VAR_0->twoStagePLL ? 400000 : 350000;
}
