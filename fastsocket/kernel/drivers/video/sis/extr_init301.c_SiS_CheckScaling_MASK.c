
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBInfo; int UsePanelScaler; int SiS_LCDInfo; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct SiS_Private *VAR_2, unsigned short VAR_3,
   const unsigned char *VAR_4)
{
   int VAR_5 = 0;
   while(VAR_4[VAR_5] != 0xff) {
      if(VAR_4[VAR_5++] == VAR_3) {
  if((VAR_2->SiS_VBInfo & VAR_1) ||
     (VAR_2->UsePanelScaler == -1)) {
     VAR_2->SiS_LCDInfo |= VAR_0;
  }
  break;
      }
   }
}
