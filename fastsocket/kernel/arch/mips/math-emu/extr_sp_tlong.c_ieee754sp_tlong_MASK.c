
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int s64 ;
typedef int ieee754sp ;
struct TYPE_2__ {int rm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

s64 FUNC_3(ieee754sp VAR_13)
{
 VAR_1;

 VAR_0;

 VAR_2;
 VAR_3;

 switch (VAR_9) {
 case 133:
 case 134:
 case 136:
  FUNC_0(VAR_5);
  return FUNC_2(FUNC_1(), "sp_tlong", VAR_13);
 case 132:
  return 0;
 case 137:
 case 135:
  break;
 }
 if (VAR_10 >= 63) {

  if (VAR_10 == 63 && VAR_12 && VAR_11 == VAR_6)
   return -0x8000000000000000LL;


  FUNC_0(VAR_5);
  return FUNC_2(FUNC_1(), "sp_tlong", VAR_13);
 }

 if (VAR_10 > VAR_7) {
  VAR_11 <<= VAR_10 - VAR_7;
 } else if (VAR_10 < VAR_7) {
  u32 VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;

  if (VAR_10 < -1) {
   VAR_14 = VAR_11;
   VAR_15 = 0;
   VAR_16 = VAR_14 != 0;
   VAR_11 = 0;
  }
  else {
   VAR_14 = VAR_11 << (32 - VAR_7 + VAR_10);
   VAR_15 = (VAR_14 >> 31) != 0;
   VAR_16 = (VAR_14 << 1) != 0;
   VAR_11 >>= VAR_7 - VAR_10;
  }
  VAR_17 = (VAR_11 & 0x1) != 0x0;
  switch (VAR_8.rm) {
  case 130:
   if (VAR_15 && (VAR_16 || VAR_17))
    VAR_11++;
   break;
  case 128:
   break;
  case 129:
   if ((VAR_15 || VAR_16) && !VAR_12)
    VAR_11++;
   break;
  case 131:
   if ((VAR_15 || VAR_16) && VAR_12)
    VAR_11++;
   break;
  }
  if ((VAR_11 >> 63) != 0) {

   FUNC_0(VAR_5);
   return FUNC_2(FUNC_1(), "sp_tlong", VAR_13);
  }
  if (VAR_15 || VAR_16)
   FUNC_0(VAR_4);
 }
 if (VAR_12)
  return -VAR_11;
 else
  return VAR_11;
}
