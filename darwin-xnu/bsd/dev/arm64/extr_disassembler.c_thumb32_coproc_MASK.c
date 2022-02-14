
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
int FUNC_5(uint16_t VAR_2, uint16_t VAR_3)
{


 int VAR_4 = FUNC_0(VAR_2,4,0x3F), VAR_5 = FUNC_0(VAR_3,8,0xF), VAR_6 = FUNC_0(VAR_3,4,0x1);

 if ((VAR_4 & 0x3E) == 0) {

  return VAR_1;
 }

 if ((VAR_5 & 0xE) == 0xA || (VAR_4 & 0x30) == 0x30) {

  uint32_t VAR_7 = FUNC_1(VAR_2,VAR_3);

  if ((VAR_4 & 0x30) == 0x30) {

   return VAR_0;
  }

  if ((VAR_4 & 0x3A) == 0x02 || (VAR_4 & 0x38) == 0x08 || (VAR_4 & 0x30) == 0x10)
   return FUNC_3(VAR_7);

  if ((VAR_4 & 0x3E) == 0x04)
   return FUNC_2(VAR_7);

  if ((VAR_4 & 0x30) == 0x20) {

   if (VAR_6 == 0) {

    return VAR_0;
   } else {
    return FUNC_4(VAR_7);
   }
  }
 }

 return VAR_1;
}
