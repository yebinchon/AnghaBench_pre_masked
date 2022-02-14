
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static
int FUNC_7(uint16_t VAR_3, uint16_t VAR_4)
{
 int VAR_5 = FUNC_0(VAR_3,4,0xF), VAR_6 = FUNC_0(VAR_4,4,0xF);

 if (((0 <= VAR_5) && (VAR_5 <= 5)) && (VAR_6 & 0x8) == 0x8) {
  if (FUNC_2(VAR_3,VAR_4) != VAR_2 && FUNC_1(VAR_3,VAR_4) != VAR_2)
   return VAR_0;
 }

 if ((VAR_5 & 0x8) == 0 && VAR_6 == 0) {
  if (FUNC_2(VAR_3,VAR_4) != VAR_2 && FUNC_1(VAR_3,VAR_4) != VAR_2 && FUNC_3(VAR_3,VAR_4) != VAR_2)
   return VAR_0;
 }

 if ((VAR_5 & 0x8) == 0x8 && (VAR_6 & 0xC) == 0)
  return FUNC_5(VAR_3,VAR_4);

 if ((VAR_5 & 0x8) == 0x8 && (VAR_6 & 0xC) == 0x4)
  return FUNC_6(VAR_3,VAR_4);

 if ((VAR_5 & 0xC) == 0x8 && (VAR_6 & 0xC) == 0x8)
  return FUNC_4(VAR_3,VAR_4);

 return VAR_1;
}
