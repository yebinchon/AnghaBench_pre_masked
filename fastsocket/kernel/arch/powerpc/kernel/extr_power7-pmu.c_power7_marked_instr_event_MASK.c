
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(u64 VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = (VAR_5 >> VAR_2) & VAR_1;
 VAR_8 = (VAR_5 >> VAR_4) & VAR_3;
 VAR_7 = VAR_5 & VAR_0 & ~1;
 if (VAR_6 >= 5)
  return 0;

 switch (VAR_7 >> 4) {
 case 2:
  return VAR_6 == 2 || VAR_6 == 4;
 case 3:
  if (VAR_7 == 0x3c)
   return VAR_6 == 1;
  if (VAR_7 == 0x3e)
   return VAR_6 != 2;
  return 1;
 case 4:
 case 5:
  return VAR_8 == 0xd;
 case 6:
  if (VAR_7 == 0x64)
   return VAR_6 >= 3;
 case 8:
  return VAR_8 == 0xd;
 }
 return 0;
}
