
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {scalar_t__ chip; int (* SavageWaitIdle ) (struct savagefb_par*) ;} ;
struct savage_reg {unsigned char CR66; unsigned char CR3A; unsigned char CR31; unsigned char CR32; unsigned char CR58; int CR53; unsigned char SR0E; unsigned char SR0F; unsigned char SR29; unsigned char SR15; unsigned char* SR54; unsigned char CR5D; unsigned char CR5E; unsigned char CR3B; unsigned char CR3C; unsigned char CR43; unsigned char CR65; int CR67; unsigned char CR34; unsigned char CR40; unsigned char CR42; unsigned char CR45; unsigned char CR50; unsigned char CR51; unsigned char CR36; unsigned char CR60; unsigned char CR68; unsigned char CR69; unsigned char CR6F; unsigned char CR33; unsigned char CR86; unsigned char CR88; unsigned char CR90; unsigned char CR91; unsigned char CRB0; int SR10; unsigned char SR11; unsigned char SR12; unsigned char SR13; unsigned char SR18; unsigned char SR30; unsigned char SR08; int MMPR3; int MMPR2; int MMPR1; int MMPR0; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct savagefb_par*) ;
 int FUNC_2 (struct savagefb_par*) ;
 int FUNC_3 (int ,int ,struct savagefb_par*) ;
 int FUNC_4 (struct savagefb_par*) ;
 int FUNC_5 (struct savagefb_par*) ;
 int FUNC_6 (struct savagefb_par*) ;
 int FUNC_7 (struct savagefb_par*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct savagefb_par*,int) ;
 int FUNC_10 (struct savagefb_par*,struct savage_reg*) ;
 int FUNC_11 (int,struct savagefb_par*) ;
 int FUNC_12 (int,int,struct savagefb_par*) ;
 int FUNC_13 (int,unsigned char,struct savagefb_par*) ;

__attribute__((used)) static void FUNC_14(struct savagefb_par *VAR_6, struct savage_reg *VAR_7)
{
 unsigned char VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_0("savagefb_set_par_int");

 VAR_6->SavageWaitIdle(VAR_6);

 FUNC_13(0x3c2, 0x23, VAR_6);

 FUNC_12(0x3d4, 0x4838, VAR_6);
 FUNC_12(0x3d4, 0xa539, VAR_6);
 FUNC_12(0x3c4, 0x0608, VAR_6);

 FUNC_9(VAR_6, 1);
 FUNC_2(VAR_6);
 FUNC_13(0x3d4, 0x67, VAR_6);
 VAR_11 = FUNC_11(0x3d5, VAR_6);
 FUNC_13(0x3d5, VAR_11 & ~0x0c, VAR_6);

 FUNC_13(0x3d4, 0x23, VAR_6);
 FUNC_13(0x3d5, 0x00, VAR_6);
 FUNC_13(0x3d4, 0x26, VAR_6);
 FUNC_13(0x3d5, 0x00, VAR_6);


 FUNC_13(0x3d4, 0x66, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR66, VAR_6);
 FUNC_13(0x3d4, 0x3a, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR3A, VAR_6);
 FUNC_13(0x3d4, 0x31, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR31, VAR_6);
 FUNC_13(0x3d4, 0x32, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR32, VAR_6);
 FUNC_13(0x3d4, 0x58, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR58, VAR_6);
 FUNC_13(0x3d4, 0x53, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR53 & 0x7f, VAR_6);

 FUNC_12(0x3c4, 0x0608, VAR_6);



 FUNC_13(0x3c4, 0x0e, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR0E, VAR_6);
 FUNC_13(0x3c4, 0x0f, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR0F, VAR_6);
 FUNC_13(0x3c4, 0x29, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR29, VAR_6);
 FUNC_13(0x3c4, 0x15, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR15, VAR_6);


 if (VAR_6->chip == VAR_4) {
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
   FUNC_13(0x3c4, 0x54+VAR_12, VAR_6);
   FUNC_13(0x3c5, VAR_7->SR54[VAR_12], VAR_6);
  }
 }

 FUNC_10 (VAR_6, VAR_7);


 FUNC_13(0x3d4, 0x53, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR53, VAR_6);
 FUNC_13(0x3d4, 0x5d, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR5D, VAR_6);
 FUNC_13(0x3d4, 0x5e, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR5E, VAR_6);
 FUNC_13(0x3d4, 0x3b, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR3B, VAR_6);
 FUNC_13(0x3d4, 0x3c, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR3C, VAR_6);
 FUNC_13(0x3d4, 0x43, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR43, VAR_6);
 FUNC_13(0x3d4, 0x65, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR65, VAR_6);


 FUNC_13(0x3d4, 0x67, VAR_6);

 VAR_11 = FUNC_11(0x3d5, VAR_6) & 0xf;
 FUNC_13(0x3d5, 0x50 | VAR_11, VAR_6);
 FUNC_8(10000);
 FUNC_13(0x3d4, 0x67, VAR_6);

 FUNC_13(0x3d5, VAR_7->CR67 & ~0x0c, VAR_6);


 FUNC_13(0x3d4, 0x34, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR34, VAR_6);
 FUNC_13(0x3d4, 0x40, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR40, VAR_6);
 FUNC_13(0x3d4, 0x42, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR42, VAR_6);
 FUNC_13(0x3d4, 0x45, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR45, VAR_6);
 FUNC_13(0x3d4, 0x50, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR50, VAR_6);
 FUNC_13(0x3d4, 0x51, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR51, VAR_6);


 FUNC_13(0x3d4, 0x36, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR36, VAR_6);
 FUNC_13(0x3d4, 0x60, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR60, VAR_6);
 FUNC_13(0x3d4, 0x68, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR68, VAR_6);
 FUNC_13(0x3d4, 0x69, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR69, VAR_6);
 FUNC_13(0x3d4, 0x6f, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR6F, VAR_6);

 FUNC_13(0x3d4, 0x33, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR33, VAR_6);
 FUNC_13(0x3d4, 0x86, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR86, VAR_6);
 FUNC_13(0x3d4, 0x88, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR88, VAR_6);
 FUNC_13(0x3d4, 0x90, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR90, VAR_6);
 FUNC_13(0x3d4, 0x91, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR91, VAR_6);

 if (VAR_6->chip == VAR_3) {
  FUNC_13(0x3d4, 0xb0, VAR_6);
  FUNC_13(0x3d5, VAR_7->CRB0, VAR_6);
 }

 FUNC_13(0x3d4, 0x32, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR32, VAR_6);


 FUNC_13(0x3c4, 0x08, VAR_6);
 FUNC_13(0x3c5, 0x06, VAR_6);




 if (VAR_7->SR10 != 255) {
  FUNC_13(0x3c4, 0x10, VAR_6);
  FUNC_13(0x3c5, VAR_7->SR10, VAR_6);
  FUNC_13(0x3c4, 0x11, VAR_6);
  FUNC_13(0x3c5, VAR_7->SR11, VAR_6);
 }


 FUNC_13(0x3c4, 0x0e, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR0E, VAR_6);
 FUNC_13(0x3c4, 0x0f, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR0F, VAR_6);
 FUNC_13(0x3c4, 0x12, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR12, VAR_6);
 FUNC_13(0x3c4, 0x13, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR13, VAR_6);
 FUNC_13(0x3c4, 0x29, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR29, VAR_6);
 FUNC_13(0x3c4, 0x18, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR18, VAR_6);


 FUNC_13(0x3c4, 0x15, VAR_6);
 VAR_8 = FUNC_11(0x3c5, VAR_6) & ~0x21;

 FUNC_13(0x3c5, VAR_8 | 0x03, VAR_6);
 FUNC_13(0x3c5, VAR_8 | 0x23, VAR_6);
 FUNC_13(0x3c5, VAR_8 | 0x03, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR15, VAR_6);
 FUNC_8(100);

 FUNC_13(0x3c4, 0x30, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR30, VAR_6);
 FUNC_13(0x3c4, 0x08, VAR_6);
 FUNC_13(0x3c5, VAR_7->SR08, VAR_6);


 FUNC_2(VAR_6);
 FUNC_13(0x3d4, 0x67, VAR_6);
 FUNC_13(0x3d5, VAR_7->CR67, VAR_6);

 FUNC_13(0x3d4, 0x66, VAR_6);
 VAR_10 = FUNC_11(0x3d5, VAR_6);
 FUNC_13(0x3d5, VAR_10 | 0x80, VAR_6);
 FUNC_13(0x3d4, 0x3a, VAR_6);
 VAR_9 = FUNC_11(0x3d5, VAR_6);
 FUNC_13(0x3d5, VAR_9 | 0x80, VAR_6);

 if (VAR_6->chip != VAR_4) {
  FUNC_2(VAR_6);
  FUNC_3(VAR_0, VAR_7->MMPR0, VAR_6);
  VAR_6->SavageWaitIdle(VAR_6);
  FUNC_3(VAR_2, VAR_7->MMPR1, VAR_6);
  VAR_6->SavageWaitIdle(VAR_6);
  FUNC_3(VAR_5, VAR_7->MMPR2, VAR_6);
  VAR_6->SavageWaitIdle(VAR_6);
  FUNC_3(VAR_1, VAR_7->MMPR3, VAR_6);
 }

 FUNC_13(0x3d4, 0x66, VAR_6);
 FUNC_13(0x3d5, VAR_10, VAR_6);
 FUNC_13(0x3d4, 0x3a, VAR_6);
 FUNC_13(0x3d5, VAR_9, VAR_6);

 FUNC_1(VAR_6);
 FUNC_9(VAR_6, 0);
}
