
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(uint32_t VAR_0)
{
 uint16_t* VAR_1 = (uint16_t*) &VAR_0;
 uint16_t VAR_2 = VAR_1[0], VAR_3 = VAR_1[1];

 int VAR_4 = FUNC_0(VAR_2,11,0x1F);

 if (VAR_4 == 0x1D || VAR_4 == 0x1E || VAR_4 == 0x1F)
  return FUNC_2(VAR_2,VAR_3);
 else
  return FUNC_1(VAR_2);
}
