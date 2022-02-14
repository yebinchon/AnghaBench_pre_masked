
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
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
int FUNC_3(uint16_t VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5,6,0xF);

 if (VAR_6 == 0x4) {

  return VAR_3;
 } else if ((VAR_6 & 0xC) == 0xC) {


  if ((VAR_6 & 0x2) == 0)
   return VAR_0;
  return VAR_3;
 } else {

  if ((VAR_6 & 0xC) == 0x8 && FUNC_1(VAR_5) == VAR_4)
   return VAR_2;

  if (FUNC_2(VAR_5) != VAR_4 && FUNC_1(VAR_5) != VAR_4)
   return VAR_1;
 }

 return VAR_3;
}
