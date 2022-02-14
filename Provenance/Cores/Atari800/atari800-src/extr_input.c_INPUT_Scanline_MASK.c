
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_0 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

void FUNC_1(void)
{
 if (--VAR_13 == 0) {
  FUNC_0();
  if (VAR_2 == VAR_1) {


   VAR_5[VAR_3] = ((VAR_12 & 1) << 3) | (VAR_8 << 2)
        | ((VAR_11 & 1) << 1) | VAR_9;
  }
  else {
   VAR_5[VAR_3] = (VAR_2 == VAR_0 ? VAR_7 : VAR_10)
        [(VAR_12 & 3) * 4 + (VAR_11 & 3)];
  }
  VAR_4[0] = (VAR_5[1] << 4) | VAR_5[0];
  VAR_4[1] = (VAR_5[3] << 4) | VAR_5[2];
  VAR_13 = VAR_6;
 }
}
