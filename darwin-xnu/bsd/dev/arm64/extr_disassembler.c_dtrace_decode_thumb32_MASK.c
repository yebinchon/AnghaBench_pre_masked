
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static
int FUNC_17(uint16_t VAR_1, uint16_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1,11,0x3), VAR_4 = FUNC_0(VAR_1,4,0x7F), VAR_5 = FUNC_0(VAR_2,15,0x1);

 if (VAR_3 == 0x1) {
  if ((VAR_4 & 0x64) == 0)
   return FUNC_11(VAR_1,VAR_2);

  if ((VAR_4 & 0x64) == 0x04)
   return FUNC_10(VAR_1,VAR_2);

  if ((VAR_4 & 0x60) == 0x20)
   return FUNC_6(VAR_1,VAR_2);

  if ((VAR_4 & 0x40) == 0x40)
   return FUNC_2(VAR_1,VAR_2);
 }

 if (VAR_3 == 0x2) {
  if ((VAR_4 & 0x20) == 0 && VAR_5 == 0)
   return FUNC_3(VAR_1,VAR_2);

  if ((VAR_4 & 0x20) == 0x20 && VAR_5 == 0)
   return FUNC_4(VAR_1,VAR_2);

  if (VAR_5 == 1)
   return FUNC_1(VAR_1,VAR_2);
 }

 if (VAR_3 == 0x3) {
  if ((VAR_4 & 0x71) == 0)
   return FUNC_15(VAR_1,VAR_2);

  if ((VAR_4 & 0x71) == 0x10) {
   return FUNC_16(FUNC_7(VAR_1,VAR_2));
  }

  if ((VAR_4 & 0x67) == 0x01)
   return FUNC_8(VAR_1,VAR_2);

  if ((VAR_4 & 0x67) == 0x03)
   return FUNC_9(VAR_1,VAR_2);

  if ((VAR_4 & 0x67) == 0x05)
   return FUNC_12(VAR_1,VAR_2);

  if ((VAR_4 & 0x67) == 0x07) {

   return VAR_0;
  }

  if ((VAR_4 & 0x70) == 0x20)
   return FUNC_5(VAR_1,VAR_2);

  if ((VAR_4 & 0x78) == 0x30)
   return FUNC_14(VAR_1,VAR_2);

  if ((VAR_4 & 0x78) == 0x38)
   return FUNC_13(VAR_1,VAR_2);

  if ((VAR_4 & 0x40) == 0x40)
   return FUNC_2(VAR_1,VAR_2);
 }

 return VAR_0;
}
