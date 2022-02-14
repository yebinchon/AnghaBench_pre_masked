
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_CRT1Mode; int SiS_SetFlag; int SiS_VBInfo; int ChipType; scalar_t__ SiS_flag_clearbuffer; int SiS_P3cc; int SiS_P3c2; int SiS_P3c4; int SiS_VBType; scalar_t__ SiS_SelectCRT2Rate; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct SiS_Private*,unsigned short) ;
 int FUNC_1 (struct SiS_Private*,unsigned short) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;
 unsigned short FUNC_4 (struct SiS_Private*,unsigned short,unsigned short) ;
 unsigned short FUNC_5 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_8 (struct SiS_Private*) ;
 int FUNC_9 (struct SiS_Private*) ;
 int FUNC_10 (struct SiS_Private*,unsigned short) ;
 int FUNC_11 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_12 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_13 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_14 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_15 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_16 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_17 (struct SiS_Private*,unsigned short) ;
 int FUNC_18 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_19 (struct SiS_Private*,unsigned short) ;
 int FUNC_20 (struct SiS_Private*,unsigned short) ;
 int FUNC_21 (struct SiS_Private*,unsigned short) ;
 int FUNC_22 (int ,int,unsigned char) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (struct SiS_Private*,unsigned short) ;
 int FUNC_25 (struct SiS_Private*) ;
 int FUNC_26 (struct SiS_Private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_27 (int ,int ,int,char*,int ,int) ;

__attribute__((used)) static void
FUNC_28(struct SiS_Private *VAR_9, unsigned short VAR_10, unsigned short VAR_11)
{
   unsigned short VAR_12, VAR_13;

   VAR_9->SiS_CRT1Mode = VAR_10;

   VAR_12 = FUNC_4(VAR_9, VAR_10, VAR_11);

   if(VAR_9->SiS_SetFlag & VAR_0) {
      if(VAR_9->SiS_VBInfo & (VAR_4 | VAR_5)) {
         FUNC_2(VAR_9);
      }
   }

   FUNC_9(VAR_9);

   FUNC_24(VAR_9, VAR_12);
   FUNC_21(VAR_9, VAR_12);
   FUNC_19(VAR_9, VAR_12);
   FUNC_10(VAR_9, VAR_12);
   FUNC_20(VAR_9, VAR_12);
   FUNC_1(VAR_9, VAR_10);
   FUNC_8(VAR_9);

   VAR_9->SiS_SelectCRT2Rate = 0;
   VAR_9->SiS_SetFlag &= (~VAR_1);






   if(VAR_9->SiS_VBInfo & VAR_4) {
      if(VAR_9->SiS_VBInfo & VAR_3) {
         VAR_9->SiS_SetFlag |= VAR_1;
      }
   }

   if(VAR_9->SiS_VBInfo & VAR_2) {
      VAR_9->SiS_SetFlag |= VAR_1;
   }

   VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_11);

   if(!(VAR_9->SiS_VBInfo & VAR_2)) {
      VAR_9->SiS_SetFlag &= ~VAR_1;
   }

   if(VAR_13 != 0xFFFF) {
      FUNC_17(VAR_9, VAR_13);
      FUNC_11(VAR_9, VAR_10, VAR_11, VAR_13);
      FUNC_16(VAR_9, VAR_10, VAR_11, VAR_13);
      FUNC_18(VAR_9, VAR_10, VAR_11, VAR_13);
   }

   switch(VAR_9->ChipType) {
   default:
      break;
   }

   FUNC_15(VAR_9, VAR_10, VAR_11, VAR_13);







   FUNC_7(VAR_9, VAR_10, VAR_11);







   if(!(VAR_9->SiS_VBInfo & (VAR_4 | VAR_5 | VAR_2))) {
      FUNC_26(VAR_9);
      FUNC_3(VAR_9);
   }
}
