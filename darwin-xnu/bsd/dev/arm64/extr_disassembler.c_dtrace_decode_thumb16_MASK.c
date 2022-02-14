
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
int FUNC_7(uint16_t VAR_4)
{
 int VAR_5 = FUNC_0(VAR_4,10,0x3F);

 if ((VAR_5 & 0x30) == 0)
  return FUNC_6(VAR_4);

 if (VAR_5 == 0x10)
  return FUNC_2(VAR_4);

 if (VAR_5 == 0x11)
  return FUNC_3(VAR_4);

 if ((VAR_5 & 0x3E) == 0x12) {

  return VAR_3;
 }

 if ((VAR_5 & 0x3C) == 0x14 || (VAR_5 & 0x38) == 0x18 || (VAR_5 & 0x38) == 0x20)
  return FUNC_4(VAR_4);

 if ((VAR_5 & 0x3E) == 0x28) {

  return VAR_2;
 }

 if ((VAR_5 & 0x3E) == 0x2A) {

  return VAR_1;
 }

 if ((VAR_5 & 0x3C) == 0x2C)
  return FUNC_5(VAR_4);

 if ((VAR_5 & 0x3E) == 0x30) {

  return VAR_1;
 }

 if ((VAR_5 & 0x3E) == 0x32) {

  return VAR_1;
 }

 if ((VAR_5 & 0x3C) == 0x34) {
  return FUNC_1(VAR_4);
 }

 if ((VAR_5 & 0x3E) == 0x38) {

  return VAR_0;
 }

 return VAR_2;
}
