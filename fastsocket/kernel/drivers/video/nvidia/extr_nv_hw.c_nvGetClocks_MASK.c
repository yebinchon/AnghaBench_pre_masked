
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {scalar_t__ Architecture; int Chipset; unsigned int CrystalFreqKHz; int PRAMDAC0; scalar_t__ twoStagePLL; int PMC; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct nvidia_par *VAR_1, unsigned int *VAR_2,
   unsigned int *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_1->Architecture >= VAR_0) {
  VAR_4 = FUNC_0(VAR_1->PMC, 0x4020);
  VAR_9 = (VAR_4 >> 16) & 0x07;
  VAR_4 = FUNC_0(VAR_1->PMC, 0x4024);
  VAR_6 = VAR_4 & 0xFF;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  if (((VAR_1->Chipset & 0xfff0) == 0x0290) ||
      ((VAR_1->Chipset & 0xfff0) == 0x0390)) {
   VAR_7 = 1;
   VAR_8 = 1;
  } else {
   VAR_7 = (VAR_4 >> 16) & 0xFF;
   VAR_8 = (VAR_4 >> 24) & 0xFF;
  }
  *VAR_2 = ((VAR_5 * VAR_8 * VAR_1->CrystalFreqKHz) / (VAR_6 * VAR_7)) >> VAR_9;

  VAR_4 = FUNC_0(VAR_1->PMC, 0x4000);
  VAR_9 = (VAR_4 >> 16) & 0x07;
  VAR_4 = FUNC_0(VAR_1->PMC, 0x4004);
  VAR_6 = VAR_4 & 0xFF;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_7 = (VAR_4 >> 16) & 0xFF;
  VAR_8 = (VAR_4 >> 24) & 0xFF;

  *VAR_3 = ((VAR_5 * VAR_8 * VAR_1->CrystalFreqKHz) / (VAR_6 * VAR_7)) >> VAR_9;
 } else if (VAR_1->twoStagePLL) {
  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0504);
  VAR_6 = VAR_4 & 0xFF;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_9 = (VAR_4 >> 16) & 0x0F;
  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0574);
  if (VAR_4 & 0x80000000) {
   VAR_7 = VAR_4 & 0xFF;
   VAR_8 = (VAR_4 >> 8) & 0xFF;
  } else {
   VAR_7 = 1;
   VAR_8 = 1;
  }
  *VAR_2 = ((VAR_5 * VAR_8 * VAR_1->CrystalFreqKHz) / (VAR_6 * VAR_7)) >> VAR_9;

  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0500);
  VAR_6 = VAR_4 & 0xFF;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_9 = (VAR_4 >> 16) & 0x0F;
  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0570);
  if (VAR_4 & 0x80000000) {
   VAR_7 = VAR_4 & 0xFF;
   VAR_8 = (VAR_4 >> 8) & 0xFF;
  } else {
   VAR_7 = 1;
   VAR_8 = 1;
  }
  *VAR_3 = ((VAR_5 * VAR_8 * VAR_1->CrystalFreqKHz) / (VAR_6 * VAR_7)) >> VAR_9;
 } else
     if (((VAR_1->Chipset & 0x0ff0) == 0x0300) ||
  ((VAR_1->Chipset & 0x0ff0) == 0x0330)) {
  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0504);
  VAR_6 = VAR_4 & 0x0F;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_9 = (VAR_4 >> 16) & 0x07;
  if (VAR_4 & 0x00000080) {
   VAR_7 = (VAR_4 >> 4) & 0x07;
   VAR_8 = (VAR_4 >> 19) & 0x1f;
  } else {
   VAR_7 = 1;
   VAR_8 = 1;
  }
  *VAR_2 = ((VAR_5 * VAR_8 * VAR_1->CrystalFreqKHz) / (VAR_6 * VAR_7)) >> VAR_9;

  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0500);
  VAR_6 = VAR_4 & 0x0F;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_9 = (VAR_4 >> 16) & 0x07;
  if (VAR_4 & 0x00000080) {
   VAR_7 = (VAR_4 >> 4) & 0x07;
   VAR_8 = (VAR_4 >> 19) & 0x1f;
  } else {
   VAR_7 = 1;
   VAR_8 = 1;
  }
  *VAR_3 = ((VAR_5 * VAR_8 * VAR_1->CrystalFreqKHz) / (VAR_6 * VAR_7)) >> VAR_9;
 } else {
  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0504);
  VAR_6 = VAR_4 & 0xFF;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_9 = (VAR_4 >> 16) & 0x0F;
  *VAR_2 = (VAR_5 * VAR_1->CrystalFreqKHz / VAR_6) >> VAR_9;

  VAR_4 = FUNC_0(VAR_1->PRAMDAC0, 0x0500);
  VAR_6 = VAR_4 & 0xFF;
  VAR_5 = (VAR_4 >> 8) & 0xFF;
  VAR_9 = (VAR_4 >> 16) & 0x0F;
  *VAR_3 = (VAR_5 * VAR_1->CrystalFreqKHz / VAR_6) >> VAR_9;
 }
}
