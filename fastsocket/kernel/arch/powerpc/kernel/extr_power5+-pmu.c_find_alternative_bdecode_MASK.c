
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int** VAR_4 ;

__attribute__((used)) static s64 FUNC_0(u64 VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = (VAR_5 >> VAR_3) & VAR_1;
 if (VAR_6 == 0 || VAR_6 > 4)
  return -1;
 VAR_7 = 5 - VAR_6;
 VAR_8 = VAR_5 & VAR_0;
 for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
  if (VAR_4[VAR_6 - 1][VAR_9] == VAR_8) {
   return (VAR_5 & ~(VAR_2 | VAR_0)) |
    (VAR_7 << VAR_3) |
    VAR_4[VAR_7 - 1][VAR_9];
  }
 }


 if (VAR_6 == 1 && (VAR_8 == 0x0d || VAR_8 == 0x0e))
  return VAR_5 + (2 << VAR_3) + (0x2e - 0x0d);
 if (VAR_6 == 3 && (VAR_8 == 0x2e || VAR_8 == 0x2f))
  return VAR_5 - (2 << VAR_3) - (0x2e - 0x0d);


 if (VAR_8 == 0x10 || VAR_8 == 0x28)
  return ((VAR_5 ^ (0x10 ^ 0x28)) & ~VAR_2) |
   (VAR_7 << VAR_3);

 return -1;
}
