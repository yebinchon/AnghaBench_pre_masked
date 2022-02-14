
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_5;
 int VAR_6 = 30000;

 VAR_5 = FUNC_0(VAR_4 + VAR_0);


 FUNC_2((VAR_5 >> 16) & 0x3ff, VAR_4 + VAR_1);


 VAR_5 = FUNC_0(VAR_4 + VAR_2);

 VAR_5 &= ~0x00000002;
 FUNC_2(VAR_5, VAR_4 + VAR_2);


 FUNC_2(0x00000002, VAR_4 + VAR_3);


 FUNC_2((VAR_5 | 0x00000002), VAR_4 + VAR_2);


 FUNC_2(0x00000002, VAR_4 + VAR_3);

 while(VAR_6 > 0) {
  if (FUNC_0(VAR_4 + VAR_3) & 0x00000002)
   break;
  FUNC_1(1);
  VAR_6--;
 }


 FUNC_2(VAR_5, VAR_4 + VAR_2);


 FUNC_2(0x00000002, VAR_4 + VAR_3);
}
