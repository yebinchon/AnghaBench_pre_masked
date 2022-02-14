
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(unsigned int VAR_1, unsigned int VAR_2)
{
 u32 VAR_3, VAR_4;

 if (VAR_1 > 7 || VAR_2 > 15)
  return;

 FUNC_0(VAR_0, VAR_3, VAR_4);

 VAR_3 &= ~(0xF << (VAR_1 * 4));
 VAR_3 |= (VAR_2 & 0xF) << (VAR_1 * 4);

 FUNC_1(VAR_0, VAR_3, VAR_4);
}
