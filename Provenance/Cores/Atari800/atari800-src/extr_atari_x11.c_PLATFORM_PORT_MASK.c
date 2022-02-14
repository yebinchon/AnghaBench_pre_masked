
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_13 ;

int FUNC_2(int VAR_14)
{
 int VAR_15 = 0x0f;
 int VAR_16 = 0x0f;

 if (VAR_14 == 0) {
  if (VAR_10 == 0)
   VAR_15 = VAR_11;
  else if (VAR_10 == 1)
   VAR_16 = VAR_11;

  if (VAR_1 == VAR_0) {
   if (VAR_13 == 0) {
    FUNC_0(VAR_13);
    VAR_15 = VAR_12;
   }
   else if (VAR_13 == 1) {
    FUNC_0(VAR_13);
    VAR_16 = VAR_12;
   }
  }
 }
 else {
  if (VAR_10 == 2)
   VAR_15 = VAR_11;
  else if (VAR_10 == 3)
   VAR_16 = VAR_11;

  if (VAR_1 == VAR_0) {
   if (VAR_13 == 2) {
    FUNC_0(VAR_13);
    VAR_15 = VAR_12;
   }
   else if (VAR_13 == 3) {
    FUNC_0(VAR_13);
    VAR_16 = VAR_12;
   }
  }
 }

 return (VAR_16 << 4) | VAR_15;
}
