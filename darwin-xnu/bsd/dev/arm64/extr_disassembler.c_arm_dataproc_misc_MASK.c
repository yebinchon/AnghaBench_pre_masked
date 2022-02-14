
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static
int FUNC_12(uint32_t VAR_3)
{
 int VAR_4 = FUNC_1(VAR_3,25,0x1), VAR_5 = FUNC_1(VAR_3,20,0x1F), VAR_6 = FUNC_1(VAR_3,4,0xF);

 if (VAR_4 == 0) {
  if ((VAR_5 & 0x19) != 0x10 && (VAR_6 & 0x1) == 0)
   return FUNC_3(VAR_3);

  if ((VAR_5 & 0x19) != 0x10 && (VAR_6 & 0x9) == 0x1)
   return FUNC_4(VAR_3);

  if ((VAR_5 & 0x19) == 0x10 && (VAR_6 & 0x8) == 0)
   return FUNC_8(VAR_3);

  if ((VAR_5 & 0x19) == 0x19 && (VAR_6 & 0x9) == 0x8)
   return FUNC_7(VAR_3);

  if ((VAR_5 & 0x10) == 0 && VAR_6 == 0x9)
   return FUNC_10(VAR_3);

  if ((VAR_5 & 0x10) == 0x10 && VAR_6 == 0x9)
   return FUNC_11(VAR_3);

  if ((VAR_5 & 0x12) != 0x02 && (VAR_6 == 0xB || (VAR_6 & 0xD) == 0xD))
   return FUNC_5(VAR_3);

  if ((VAR_5 & 0x12) == 0x02 && (VAR_6 == 0xB || (VAR_6 & 0xD) == 0xD))
   return FUNC_6(VAR_3);
 } else {
  if ((VAR_5 & 0x19) != 0x10)
   return FUNC_2(VAR_3);

  if (VAR_5 == 0x10) {

   if (FUNC_0(VAR_3) != VAR_2)
    return VAR_0;

   return VAR_1;
  }

  if (VAR_5 == 0x14) {

   if (FUNC_0(VAR_3) != VAR_2)
    return VAR_0;

   return VAR_1;
  }

  if ((VAR_5 & 0x1B) == 0x12)
   return FUNC_9(VAR_3);
 }

 return VAR_1;
}
