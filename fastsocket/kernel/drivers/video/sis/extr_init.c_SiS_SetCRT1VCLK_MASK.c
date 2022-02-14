
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned short CSR2B; unsigned short CSR2C; int SiS_VBType; int SiS_VBInfo; scalar_t__ ChipType; int SiS_P3c4; TYPE_2__* SiS_VCLKData; TYPE_1__* SiS_VBVCLKData; scalar_t__ Alternate1600x1200; scalar_t__ UseCustomMode; } ;
struct TYPE_4__ {unsigned short SR2B; unsigned short SR2C; } ;
struct TYPE_3__ {unsigned short Part4_A; unsigned short Part4_B; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_1 (int ,int) ;
 unsigned short FUNC_2 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct SiS_Private *VAR_5, unsigned short VAR_6,
  unsigned short VAR_7, unsigned short VAR_8)
{
   unsigned short VAR_9 = 0, VAR_10, VAR_11;

   if(VAR_5->UseCustomMode) {
      VAR_10 = VAR_5->CSR2B;
      VAR_11 = VAR_5->CSR2C;
   } else {
      VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
      if((VAR_5->SiS_VBType & VAR_3) &&
  (VAR_5->SiS_VBInfo & VAR_2)) {

  if((VAR_9 == 0x21) && (VAR_5->Alternate1600x1200)) VAR_9 = 0x72;
  VAR_10 = VAR_5->SiS_VBVCLKData[VAR_9].Part4_A;
  VAR_11 = VAR_5->SiS_VBVCLKData[VAR_9].Part4_B;
      } else {
  VAR_10 = VAR_5->SiS_VCLKData[VAR_9].SR2B;
  VAR_11 = VAR_5->SiS_VCLKData[VAR_9].SR2C;
      }
   }

   FUNC_4(VAR_5->SiS_P3c4,0x31,0xCF);

   FUNC_3(VAR_5->SiS_P3c4,0x2b,VAR_10);
   FUNC_3(VAR_5->SiS_P3c4,0x2c,VAR_11);

   if(VAR_5->ChipType >= VAR_1) {
   } else {
      FUNC_3(VAR_5->SiS_P3c4,0x2D,0x80);
   }
}
