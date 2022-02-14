
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int s64 ;
struct TYPE_6__ {int bits; } ;
typedef TYPE_1__ ieee754dp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__) ;
 int FUNC_3 (int ,char*,TYPE_1__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

int FUNC_4(ieee754dp VAR_16, ieee754dp VAR_17, int VAR_18, int VAR_19)
{
 VAR_1;
 VAR_2;

 VAR_4;
 VAR_5;
 VAR_6;
 VAR_7;
 VAR_0;

 if (FUNC_2(VAR_16) || FUNC_2(VAR_17)) {
  if (VAR_19 || VAR_14 == VAR_10 || VAR_15 == VAR_10)
   FUNC_1(VAR_13);
  if (VAR_18 & VAR_12)
   return 1;
  if (VAR_18 & (VAR_11 | VAR_9)) {
   if (VAR_19 && FUNC_0(VAR_13))
    return FUNC_3(0, "fcmpf", VAR_16);
  }
  return 0;
 } else {
  s64 VAR_20 = VAR_16.bits;
  s64 VAR_21 = VAR_17.bits;

  if (VAR_20 < 0)
   VAR_20 = -VAR_20 ^ VAR_3;
  if (VAR_21 < 0)
   VAR_21 = -VAR_21 ^ VAR_3;

  if (VAR_20 < VAR_21)
   return (VAR_18 & VAR_11) != 0;
  else if (VAR_20 == VAR_21)
   return (VAR_18 & VAR_8) != 0;
  else
   return (VAR_18 & VAR_9) != 0;
 }
}
