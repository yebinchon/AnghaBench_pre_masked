
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static
int FUNC_4(uint32_t VAR_4)
{
 int VAR_5 = FUNC_3(VAR_4,20,0x1F), VAR_6 = FUNC_3(VAR_4,7,0x1F), VAR_7 = FUNC_3(VAR_4,5,0x3);

 if (VAR_5 == 0x11 || VAR_5 == 0x13 || VAR_5 == 0x15 || VAR_5 == 0x17) {

  if (FUNC_2(VAR_4) != VAR_3 && FUNC_1(VAR_4) != VAR_3)
   return VAR_0;

  return VAR_1;
 }





 if (VAR_5 == 0x1A && VAR_6 == 0 && VAR_7 == 0 && FUNC_0(VAR_4) == VAR_3)
  return VAR_2;


 if (FUNC_2(VAR_4) != VAR_3 && FUNC_0(VAR_4) != VAR_3 && FUNC_1(VAR_4) != VAR_3)
  return VAR_0;

 return VAR_1;
}
