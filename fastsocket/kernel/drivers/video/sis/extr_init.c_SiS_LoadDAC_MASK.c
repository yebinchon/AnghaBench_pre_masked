
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_VBInfo; int SiS_VBType; int SiS_SetFlag; scalar_t__ SiS_Part5Port; scalar_t__ SiS_P3c9; scalar_t__ SiS_P3c8; scalar_t__ SiS_P3c6; } ;
typedef scalar_t__ SISIOADDRESS ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 unsigned char* VAR_6 ;
 int FUNC_1 (scalar_t__,unsigned short) ;
 unsigned char* VAR_7 ;
 int FUNC_2 (struct SiS_Private*,scalar_t__,unsigned short,unsigned short,unsigned char const,unsigned char const,unsigned char const) ;
 int VAR_8 ;

void
FUNC_3(struct SiS_Private *VAR_9, unsigned short VAR_10, unsigned short VAR_11)
{
   unsigned short VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
   unsigned short VAR_21, VAR_22, VAR_23, VAR_24;
   SISIOADDRESS VAR_25, VAR_26;
   const unsigned char *VAR_27 = ((void*)0);

   VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_11) & VAR_0;

   VAR_16 = VAR_14 = 64;
   if(VAR_12 == 0x00) VAR_27 = VAR_6;
   else if(VAR_12 == 0x08) VAR_27 = VAR_4;
   else if(VAR_12 == 0x10) VAR_27 = VAR_5;
   else if(VAR_12 == 0x18) {
      VAR_16 = 16;
      VAR_14 = 256;
      VAR_27 = VAR_7;
   }

   if( ( (VAR_9->SiS_VBInfo & VAR_2) &&
         (VAR_9->SiS_VBType & VAR_8) ) ||
       (VAR_9->SiS_VBInfo & VAR_3) ||
       (!(VAR_9->SiS_SetFlag & VAR_1)) ) {
      FUNC_1(VAR_9->SiS_P3c6,0xFF);
      VAR_25 = VAR_9->SiS_P3c8;
      VAR_26 = VAR_9->SiS_P3c9;
      VAR_24 = 0;
   } else {
      VAR_25 = VAR_9->SiS_Part5Port;
      VAR_26 = VAR_9->SiS_Part5Port + 1;
      VAR_24 = 2;
   }

   FUNC_1(VAR_25,0x00);

   for(VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
      VAR_12 = VAR_27[VAR_15];
      for(VAR_17 = 0; VAR_17 < 3; VAR_17++) {
 VAR_13 = 0;
 if(VAR_12 & 0x01) VAR_13 += 0x2A;
 if(VAR_12 & 0x02) VAR_13 += 0x15;
 FUNC_1(VAR_26, (VAR_13 << VAR_24));
 VAR_12 >>= 2;
      }
   }

   if(VAR_14 == 256) {
      for(VAR_15 = 16; VAR_15 < 32; VAR_15++) {
  VAR_12 = VAR_27[VAR_15] << VAR_24;
  for(VAR_17 = 0; VAR_17 < 3; VAR_17++) FUNC_1(VAR_26, VAR_12);
      }
      VAR_21 = 32;
      for(VAR_18 = 0; VAR_18 < 9; VAR_18++) {
  VAR_22 = VAR_21;
  VAR_23 = VAR_21 + 4;
  for(VAR_19 = 0; VAR_19 < 3; VAR_19++) {
     for(VAR_20 = 0; VAR_20 < 5; VAR_20++) {
        FUNC_2(VAR_9, VAR_26, VAR_24, VAR_19, VAR_27[VAR_22], VAR_27[VAR_23], VAR_27[VAR_21]);
        VAR_21++;
     }
     VAR_21 -= 2;
     for(VAR_20 = 0; VAR_20 < 3; VAR_20++) {
        FUNC_2(VAR_9, VAR_26, VAR_24, VAR_19, VAR_27[VAR_22], VAR_27[VAR_21], VAR_27[VAR_23]);
        VAR_21--;
     }
  }
  VAR_21 += 5;
      }
   }
}
