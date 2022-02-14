
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned long u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u8 *VAR_2)
{
 int VAR_3;
 u32 VAR_4, VAR_5;

    VAR_2 += VAR_0;
 VAR_4 = 1;
 VAR_5 = 0;
 for (VAR_3=0; VAR_3<(VAR_1-VAR_0); VAR_3++) {
  if ((VAR_3 % 5000) == 0) {
   VAR_5 %= 65521UL;
   VAR_5 %= 65521UL;
  }
  VAR_4 += VAR_2[VAR_3];
  VAR_5 += VAR_4;
 }
 VAR_4 %= 65521UL;
 VAR_5 %= 65521UL;

 return (VAR_5 << 16) | VAR_4;
}
