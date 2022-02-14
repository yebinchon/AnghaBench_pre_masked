
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(uint32_t VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1,28,0xF), VAR_3 = FUNC_0(VAR_1,25,0x7), VAR_4 = FUNC_0(VAR_1,4,0x1);

 if (VAR_2 == 0xF)
  return FUNC_6(VAR_1);

 if ((VAR_3 & 0x6) == 0)
  return FUNC_2(VAR_1);

 if (VAR_3 == 0x2)
  return FUNC_3(VAR_1);

 if (VAR_3 == 0x3 && VAR_4 == 0)
  return FUNC_3(VAR_1);

 if (VAR_3 == 0x3 && VAR_4 == 1)
  return FUNC_4(VAR_1);

 if ((VAR_3 & 0x6) == 0x4)
  return FUNC_1(VAR_1);

 if ((VAR_3 & 0x6) == 0x6)
  return FUNC_5(VAR_1);

 return VAR_0;
}
