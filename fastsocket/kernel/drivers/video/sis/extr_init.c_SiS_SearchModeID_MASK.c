
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned char SiS_VGAINFO; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_4__ {unsigned short Ext_ModeID; } ;
struct TYPE_3__ {unsigned short St_ModeID; } ;



bool
FUNC_0(struct SiS_Private *VAR_0, unsigned short *VAR_1,
  unsigned short *VAR_2)
{
   unsigned char VAR_3 = VAR_0->SiS_VGAINFO;

   if((*VAR_1) <= 0x13) {

      if((*VAR_1) <= 0x05) (*VAR_1) |= 0x01;

      for((*VAR_2) = 0; ;(*VAR_2)++) {
  if(VAR_0->SiS_SModeIDTable[(*VAR_2)].St_ModeID == (*VAR_1)) break;
  if(VAR_0->SiS_SModeIDTable[(*VAR_2)].St_ModeID == 0xFF) return 0;
      }

      if((*VAR_1) == 0x07) {
   if(VAR_3 & 0x10) (*VAR_2)++;

      }
      if((*VAR_1) <= 0x03) {
  if(!(VAR_3 & 0x80)) (*VAR_2)++;
  if(VAR_3 & 0x10) (*VAR_2)++;

      }


   } else {

      for((*VAR_2) = 0; ;(*VAR_2)++) {
  if(VAR_0->SiS_EModeIDTable[(*VAR_2)].Ext_ModeID == (*VAR_1)) break;
  if(VAR_0->SiS_EModeIDTable[(*VAR_2)].Ext_ModeID == 0xFF) return 0;
      }

   }
   return 1;
}
