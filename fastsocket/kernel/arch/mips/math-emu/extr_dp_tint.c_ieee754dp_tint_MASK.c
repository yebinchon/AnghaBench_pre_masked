
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int ieee754dp ;
struct TYPE_2__ {int rm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_3(ieee754dp VAR_12)
{
 VAR_1;

 VAR_0;

 VAR_3;
 VAR_4;

 switch (VAR_8) {
 case 133:
 case 134:
 case 136:
  FUNC_0(VAR_6);
  return FUNC_2(FUNC_1(), "dp_tint", VAR_12);
 case 132:
  return 0;
 case 137:
 case 135:
  break;
 }
 if (VAR_9 > 31) {


  FUNC_0(VAR_6);
  return FUNC_2(FUNC_1(), "dp_tint", VAR_12);
 }

 if (VAR_9 > VAR_2) {
  VAR_10 <<= VAR_9 - VAR_2;
 } else if (VAR_9 < VAR_2) {
  u64 VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;

  if (VAR_9 < -1) {
   VAR_13 = VAR_10;
   VAR_14 = 0;
   VAR_15 = VAR_13 != 0;
   VAR_10 = 0;
  }
  else {
   VAR_13 = VAR_10 << (64 - VAR_2 + VAR_9);
   VAR_14 = (VAR_13 >> 63) != 0;
   VAR_15 = (VAR_13 << 1) != 0;
   VAR_10 >>= VAR_2 - VAR_9;
  }


  VAR_16 = (VAR_10 & 0x1) != 0x0;
  switch (VAR_7.rm) {
  case 130:
   if (VAR_14 && (VAR_15 || VAR_16))
    VAR_10++;
   break;
  case 128:
   break;
  case 129:
   if ((VAR_14 || VAR_15) && !VAR_11)
    VAR_10++;
   break;
  case 131:
   if ((VAR_14 || VAR_15) && VAR_11)
    VAR_10++;
   break;
  }

  if ((VAR_10 >> 31) != 0 && (VAR_11 == 0 || VAR_10 != 0x80000000)) {

   FUNC_0(VAR_6);
   return FUNC_2(FUNC_1(), "dp_tint", VAR_12);
  }
  if (VAR_14 || VAR_15)
   FUNC_0(VAR_5);
 }
 if (VAR_11)
  return -VAR_10;
 else
  return VAR_10;
}
