
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static
int FUNC_4(uint16_t VAR_4, uint16_t VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4,7,0x3), VAR_7 = FUNC_0(VAR_5,6,0x3F);

 if ((VAR_6 & 0x2) == 0 && FUNC_2(VAR_4,VAR_5) == VAR_3 && FUNC_3(VAR_4,VAR_5) != VAR_3)
  return VAR_2;

 if (VAR_6 == 0 && VAR_7 == 0) {

  if (FUNC_1(VAR_4,VAR_5) == VAR_3)
   return VAR_1;
 }

 if (FUNC_3(VAR_4,VAR_5) != VAR_3 && FUNC_2(VAR_4,VAR_5) != VAR_3)
  return VAR_0;

 return VAR_1;
}
