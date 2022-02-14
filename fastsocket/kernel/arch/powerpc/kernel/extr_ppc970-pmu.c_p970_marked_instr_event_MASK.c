
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

 int* VAR_7 ;

__attribute__((used)) static int FUNC_0(u64 VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;

 VAR_9 = (VAR_8 >> VAR_4) & VAR_3;
 VAR_10 = VAR_8 & VAR_2;
 if (VAR_9) {
  if (VAR_7[VAR_9 - 1] & (1 << VAR_10))
   return 1;
  if (VAR_10 == 0)
   VAR_13 = (VAR_9 <= 4)? VAR_9 - 1: 8 - VAR_9;
  else if (VAR_10 == 7 || VAR_10 == 13)
   VAR_13 = 4;
  else
   return 0;
 } else
  VAR_13 = VAR_10;

 VAR_12 = (VAR_8 >> VAR_1) & VAR_0;
 VAR_11 = (VAR_8 >> VAR_6) & VAR_5;
 VAR_14 = 0;
 switch (VAR_11) {
 case 128:
  VAR_14 = 0x4c;
  break;
 case 130:

  VAR_14 = 0x085dff00;
  break;
 case 129:
  VAR_14 = 0x50 << 24;
  break;
 }
 return (VAR_14 >> (VAR_12 * 8 + VAR_13)) & 1;
}
