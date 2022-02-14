
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

void FUNC_2(u32 VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0);

 if (!VAR_3)
  return;


 if (VAR_1 & 0xFFFF)
  FUNC_1(VAR_1 & 0xFFFF, VAR_3 + VAR_2);

 VAR_1 >>= 16;
 if (VAR_1)
  FUNC_1(VAR_1, VAR_3 + 0x80 + VAR_2);
}
