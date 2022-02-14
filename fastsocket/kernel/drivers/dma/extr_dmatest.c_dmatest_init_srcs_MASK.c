
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_0(u8 **VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 u8 *VAR_8;

 for (; (VAR_8 = *VAR_4); VAR_4++) {
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   VAR_8[VAR_7] = VAR_2 | (~VAR_7 & VAR_1);
  for ( ; VAR_7 < VAR_5 + VAR_6; VAR_7++)
   VAR_8[VAR_7] = VAR_2 | VAR_0
    | (~VAR_7 & VAR_1);
  for ( ; VAR_7 < VAR_3; VAR_7++)
   VAR_8[VAR_7] = VAR_2 | (~VAR_7 & VAR_1);
  VAR_8++;
 }
}
