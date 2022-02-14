
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned short CSR2B; unsigned short CSR2C; int SiS_VBType; int SiS_TVMode; int SiS_VBInfo; int SiS_Part4Port; TYPE_1__* SiS_VBVCLKData; scalar_t__ UseCustomMode; } ;
struct TYPE_2__ {unsigned short Part4_A; unsigned short Part4_B; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,unsigned short) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_4, unsigned short VAR_5, unsigned short VAR_6,
                 unsigned short VAR_7)
{
  unsigned short VAR_8, VAR_9, VAR_10, VAR_11;

  if(VAR_4->UseCustomMode) {
     VAR_10 = VAR_4->CSR2B;
     VAR_11 = VAR_4->CSR2C;
  } else {
     VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
     VAR_10 = VAR_4->SiS_VBVCLKData[VAR_8].Part4_A;
     VAR_11 = VAR_4->SiS_VBVCLKData[VAR_8].Part4_B;
  }

  if(VAR_4->SiS_VBType & VAR_3) {
     if(VAR_4->SiS_TVMode & (VAR_2 | VAR_1)) {
        FUNC_1(VAR_4->SiS_Part4Port,0x0a,0x57);
  FUNC_1(VAR_4->SiS_Part4Port,0x0b,0x46);
 FUNC_1(VAR_4->SiS_Part4Port,0x1f,0xf6);
     } else {
        FUNC_1(VAR_4->SiS_Part4Port,0x0a,VAR_10);
        FUNC_1(VAR_4->SiS_Part4Port,0x0b,VAR_11);
     }
  } else {
     FUNC_1(VAR_4->SiS_Part4Port,0x0a,0x01);
     FUNC_1(VAR_4->SiS_Part4Port,0x0b,VAR_11);
     FUNC_1(VAR_4->SiS_Part4Port,0x0a,VAR_10);
  }
  FUNC_1(VAR_4->SiS_Part4Port,0x12,0x00);
  VAR_9 = 0x08;
  if(VAR_4->SiS_VBInfo & VAR_0) VAR_9 |= 0x20;
  FUNC_2(VAR_4->SiS_Part4Port,0x12,VAR_9);
}
