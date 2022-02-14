
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static
int FUNC_9(uint32_t VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3,20,0x1F), VAR_5 = FUNC_4(VAR_3,5,0x7);

 if ((VAR_4 & 0x1C) == 0)
  return FUNC_6(VAR_3);

 if ((VAR_4 & 0x1C) == 0x04)
  return FUNC_7(VAR_3);

 if ((VAR_4 & 0x18) == 0x08)
  return FUNC_5(VAR_3);

 if ((VAR_4 & 0x18) == 0x10)
  return FUNC_8(VAR_3);

 if (VAR_4 == 0x1F && VAR_5 == 0x7) {

  return VAR_1;
 }

 if (VAR_4 == 0x18 && VAR_5 == 0) {




  if (FUNC_1(VAR_3) != VAR_2 && FUNC_3(VAR_3) != VAR_2 && FUNC_2(VAR_3) != VAR_2)
   return VAR_0;

  return VAR_1;
 }

 if ((VAR_4 & 0x1E) == 0x1C && (VAR_5 & 0x3) == 0) {

  if (FUNC_0(VAR_3) != VAR_2)
   return VAR_0;

  return VAR_1;
 }

 if (((VAR_4 & 0x1E) == 0x1A || (VAR_4 & 0x1E) == 0x1E) && ((VAR_5 & 0x3) == 0x2)) {

  if (FUNC_1(VAR_3) != VAR_2 && FUNC_0(VAR_3) != VAR_2)
   return VAR_0;

  return VAR_1;
 }

 return VAR_1;
}
