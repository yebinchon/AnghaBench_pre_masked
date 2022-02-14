
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_4, u8 VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 FUNC_0(VAR_1 | VAR_2, VAR_4 + VAR_3);
 FUNC_1(30);
 FUNC_0(VAR_1 | VAR_0 | VAR_2, VAR_4 + VAR_3);
 FUNC_1(30);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if (VAR_5 & 0x80)
   VAR_7 = VAR_1 | VAR_2;
  else
   VAR_7 = VAR_1;
  FUNC_0(VAR_7, VAR_4 + VAR_3);
  FUNC_1(30);
  FUNC_0(VAR_7 | VAR_0, VAR_4 + VAR_3);
  FUNC_1(30);
  VAR_5 <<= 1;
 }
 FUNC_0(VAR_1, VAR_4 + VAR_3);
 FUNC_1(30);
}
