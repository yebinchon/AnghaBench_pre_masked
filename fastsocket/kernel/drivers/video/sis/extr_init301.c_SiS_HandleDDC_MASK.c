
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3d4; int SiS_P3c4; int DDCPortMixup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct SiS_Private*,unsigned int,int,unsigned short,unsigned short,int,unsigned int) ;
 unsigned short FUNC_2 (struct SiS_Private*) ;
 unsigned short FUNC_3 (struct SiS_Private*,unsigned short,unsigned char*) ;
 int FUNC_4 (int ,int,unsigned char) ;
 int FUNC_5 (int ,int,int,unsigned char) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (struct SiS_Private*) ;
 unsigned int VAR_1 ;

unsigned short
FUNC_8(struct SiS_Private *VAR_2, unsigned int VAR_3, int VAR_4,
              unsigned short VAR_5, unsigned short VAR_6, unsigned char *VAR_7,
       unsigned int VAR_8)
{
   unsigned char VAR_9, VAR_10=1;
   unsigned short VAR_11;

   if(VAR_5 > 2)
      return 0xFFFF;

   if(VAR_6 > 4)
      return 0xFFFF;

   if((!(VAR_8 & VAR_1)) && (VAR_5 > 0))
      return 0xFFFF;

   if(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 0, VAR_8) == 0xFFFF)
      return 0xFFFF;

   VAR_9 = FUNC_0(VAR_2->SiS_P3c4,0x1f);
   FUNC_5(VAR_2->SiS_P3c4,0x1f,0x3f,0x04);
   if(VAR_4 == VAR_0) {
      VAR_10 = FUNC_0(VAR_2->SiS_P3d4,0x17) & 0x80;
      if(!VAR_10) {
         FUNC_6(VAR_2->SiS_P3d4,0x17,0x80);
         FUNC_4(VAR_2->SiS_P3c4,0x00,0x01);
         FUNC_4(VAR_2->SiS_P3c4,0x00,0x03);
      }
   }
   if((VAR_9) || (!VAR_10)) {
      FUNC_7(VAR_2);
      FUNC_7(VAR_2);
      FUNC_7(VAR_2);
      FUNC_7(VAR_2);
   }

   if(VAR_6 == 0) {
      VAR_11 = FUNC_2(VAR_2);
   } else {
      VAR_11 = FUNC_3(VAR_2, VAR_6, VAR_7);
      if((!VAR_11) && (VAR_6 == 1)) {
         if((VAR_7[0] == 0x00) && (VAR_7[1] == 0xff) &&
     (VAR_7[2] == 0xff) && (VAR_7[3] == 0xff) &&
     (VAR_7[4] == 0xff) && (VAR_7[5] == 0xff) &&
     (VAR_7[6] == 0xff) && (VAR_7[7] == 0x00) &&
     (VAR_7[0x12] == 1)) {
     if(!VAR_2->DDCPortMixup) {
        if(VAR_5 == 1) {
           if(!(VAR_7[0x14] & 0x80)) VAR_11 = 0xFFFE;
        } else {
           if(VAR_7[0x14] & 0x80) VAR_11 = 0xFFFE;
        }
     }
  }
      }
   }
   FUNC_4(VAR_2->SiS_P3c4,0x1f,VAR_9);
   if(VAR_4 == VAR_0) {
      FUNC_5(VAR_2->SiS_P3d4,0x17,0x7f,VAR_10);
   }
   return VAR_11;
}
