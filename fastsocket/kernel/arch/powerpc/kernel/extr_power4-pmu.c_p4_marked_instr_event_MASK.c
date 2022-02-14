
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static int FUNC_0(u64 VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15;

 VAR_10 = (VAR_9 >> VAR_5) & VAR_4;
 VAR_11 = VAR_9 & VAR_3;
 if (VAR_10) {
  if (VAR_8[VAR_10 - 1] & (1 << VAR_11))
   return 1;
  if (VAR_11 == 0)
   VAR_14 = (VAR_10 <= 4)? VAR_10 - 1: 8 - VAR_10;
  else if (VAR_11 == 6)
   VAR_14 = 4;
  else
   return 0;
 } else
  VAR_14 = VAR_11;

 VAR_13 = (VAR_9 >> VAR_1) & VAR_0;
 VAR_12 = (VAR_9 >> VAR_7) & VAR_6;
 VAR_15 = 0;
 switch (VAR_12) {
 case 128:
  if (VAR_9 & VAR_2)
   VAR_15 = 1 << 28;
  else
   VAR_15 = 6 << 24;
  break;
 case 129:

  VAR_15 = 0x083dff00;
 }
 return (VAR_15 >> (VAR_13 * 8 + VAR_14)) & 1;
}
