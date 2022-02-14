
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned char* VirtualRomBase; int SiS_UseROM; int SiS_ROMNew; int SiS_PWDOffset; scalar_t__ ChipType; int SiS_EMIOffset; int SiS661LCD2TableSize; scalar_t__ UseROM; } ;


 unsigned short FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct SiS_Private*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_3)
{
   unsigned char *VAR_4 = VAR_3->VirtualRomBase;
   unsigned short VAR_5 = 0;

   VAR_3->SiS_UseROM = 0;
   VAR_3->SiS_ROMNew = 0;
   VAR_3->SiS_PWDOffset = 0;

   if(VAR_3->ChipType >= VAR_2) return;

   if((VAR_4) && (VAR_3->UseROM)) {
      if(VAR_3->ChipType == VAR_0) {




  if((VAR_4[3] == 0xe9) && ((VAR_4[5] << 8) | VAR_4[4]) > 0x21a)
     VAR_3->SiS_UseROM = 1;
      } else if(VAR_3->ChipType < VAR_1) {



  VAR_3->SiS_UseROM = 1;
      } else {

  VAR_3->SiS_UseROM = 1;
  if((VAR_3->SiS_ROMNew = FUNC_1(VAR_3))) {
     VAR_3->SiS_EMIOffset = 14;
     VAR_3->SiS_PWDOffset = 17;
     VAR_3->SiS661LCD2TableSize = 36;

     if((VAR_5 = FUNC_0(0x0102))) {
        if(VAR_4[VAR_5 + (32 * 16)] == 0xff)
    VAR_3->SiS661LCD2TableSize = 32;
        else if(VAR_4[VAR_5 + (34 * 16)] == 0xff)
    VAR_3->SiS661LCD2TableSize = 34;
        else if(VAR_4[VAR_5 + (36 * 16)] == 0xff)
    VAR_3->SiS661LCD2TableSize = 36;
        else if( (VAR_4[VAR_5 + (38 * 16)] == 0xff) ||
    (VAR_4[0x6F] & 0x01) ) {
    VAR_3->SiS661LCD2TableSize = 38;
    VAR_3->SiS_EMIOffset = 16;
    VAR_3->SiS_PWDOffset = 19;
        }
     }
  }
      }
   }
}
