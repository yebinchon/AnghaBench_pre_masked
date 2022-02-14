
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;

void FUNC_3(u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_2 & (VAR_0 - 1);

 if (FUNC_0(VAR_1, VAR_4) == 16) {
  VAR_5 = FUNC_1(VAR_1, VAR_4);

  if (VAR_2 < VAR_0)
   VAR_3 = (VAR_3 << 16) | (VAR_5 & 0xffff);
  else
   VAR_3 = (VAR_3 & 0xffff) | (VAR_5 & 0xffff0000);
 }

 FUNC_2(VAR_1, VAR_4, VAR_3);
}
