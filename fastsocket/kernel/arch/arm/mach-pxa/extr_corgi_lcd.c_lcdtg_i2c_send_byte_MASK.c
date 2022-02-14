
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u8 VAR_1, u8 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_2 & 0x80)
   FUNC_0(VAR_1 | VAR_0);
  else
   FUNC_0(VAR_1);
  VAR_2 <<= 1;
 }
}
