
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UWORD ;
typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_6(void)
{
 int VAR_9 = FUNC_0();
 if (VAR_6) {
  UWORD VAR_10;
  UWORD VAR_11;
  UBYTE VAR_12;
  UBYTE VAR_13;

  switch (VAR_0) {
  case 140:
  case 130:
  case 143:
   VAR_10 = 0xef74;
   VAR_11 = 0xefbc;
   VAR_12 = 0xa0;
   VAR_13 = 0x80;
   break;
  case 139:
   VAR_10 = 0xef74;
   VAR_11 = 0xefbc;
   VAR_12 = 0xa0;
   VAR_13 = 0xc0;
   break;
  case 142:
   VAR_10 = 0xed47;
   VAR_11 = 0xed94;
   VAR_12 = 0xa9;
   VAR_13 = 0x03;
   break;
  case 141:
  case 138:
  case 137:
  case 132:
  case 131:
  case 136:
  case 135:
  case 134:
  case 133:
  case 128:
   VAR_10 = 0xfd13;
   VAR_11 = 0xfd60;
   VAR_12 = 0xa9;
   VAR_13 = 0x03;
   break;
  case 129:
   VAR_10 = 0xef74;
   VAR_11 = 0xefbc;
   VAR_12 = 0xa9;
   VAR_13 = 0x03;
   break;
  default:
   return;
  }

  if (FUNC_4(VAR_10) == 0xa9 && FUNC_4(VAR_10 + 1) == 0x03
   && FUNC_4(VAR_10 + 2) == 0x8d && FUNC_4(VAR_10 + 3) == 0x2a
   && FUNC_4(VAR_10 + 4) == 0x02
   && FUNC_4(VAR_11) == VAR_12
   && FUNC_4(VAR_11 + 1) == VAR_13
   && FUNC_4(VAR_11 + 2) == 0x20 && FUNC_4(VAR_11 + 3) == 0x5c
   && FUNC_4(VAR_11 + 4) == 0xe4) {
   FUNC_1(VAR_10, VAR_3, VAR_1);
   FUNC_1(VAR_11, VAR_4, VAR_2);
  }
  FUNC_2(0xe459, VAR_5, VAR_7);
  VAR_9 = VAR_8;
 }
 else {
  FUNC_3(VAR_3);
  FUNC_3(VAR_4);
  FUNC_3(VAR_5);
 };
 if (VAR_9){
  UWORD VAR_14;
  switch (VAR_0) {
  case 142:
   VAR_14 = 0xc3d2;
   break;
  case 141:
   VAR_14 = 0xc346;
   break;
  case 138:
   VAR_14 = 0xc32b;
   break;
  case 137:
  case 132:
  case 136:
  case 135:
  case 134:
  case 133:
  case 128:
   VAR_14 = 0xc31d;
   break;
  case 131:
   VAR_14 = 0xc32c;
   break;
  case 129:
   VAR_14 = 0xc2e0;
   break;
  default:

   return;
  }

  FUNC_5(VAR_14, 0xea);
  FUNC_5(VAR_14+1, 0xea);
 }
}
