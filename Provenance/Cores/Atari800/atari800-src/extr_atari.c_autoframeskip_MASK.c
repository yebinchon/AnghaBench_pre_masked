
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 double FUNC_0 () ;

__attribute__((used)) static void FUNC_1(double VAR_6, double VAR_7)
{
 static int VAR_8 = 0, VAR_9 = 0;
 static double VAR_10 = 0.0, VAR_11 = 0.0;
 double VAR_12, VAR_13, VAR_14, VAR_15;

 if (VAR_7 - VAR_6 > 0)
  VAR_11 += VAR_7 - VAR_6;
 if (VAR_6 - VAR_10 > 0.5) {
  VAR_14 = ((double) (VAR_3 - VAR_8)) /
      ((double) (VAR_5 == VAR_2 ? VAR_1 : VAR_0));
  VAR_15 = VAR_6 - VAR_10;
  VAR_12 = 100.0 * VAR_14 / VAR_15;
  VAR_13 = 100.0 * VAR_11 / VAR_15;

  if (VAR_9 < 3 && (VAR_15 > 2.0 * VAR_14)) {
   VAR_9++;
  } else {
   VAR_9 = 0;
   if (VAR_12 < 90.0) {
    if (VAR_4 < 4)
     VAR_4++;
   } else {
    if (VAR_13 > 20.0 && VAR_4 > 1)
     VAR_4--;
   }
  }

  VAR_11 = 0.0;
  VAR_8 = VAR_3;
  VAR_10 = FUNC_0();
 }
}
