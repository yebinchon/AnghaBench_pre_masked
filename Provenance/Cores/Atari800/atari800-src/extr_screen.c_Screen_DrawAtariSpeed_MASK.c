
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int *,int,int,int) ;

void FUNC_2(double VAR_11)
{
 if (VAR_8) {
  static int VAR_12 = 100;
  static int VAR_13 = 0;
  static double VAR_14 = 0;
  if ((VAR_11 - VAR_14) >= 0.5) {
   VAR_12 = (int) (100 * (VAR_1 - VAR_13) / (VAR_11 - VAR_14) / (VAR_2 == VAR_0 ? 50 : 60));
   VAR_13 = VAR_1;
   VAR_14 = VAR_11;
  }

  {

   UBYTE *VAR_15 = (UBYTE *) VAR_7 + VAR_9 + 5 * VAR_5
              + (VAR_10 - VAR_3) * VAR_6;
   FUNC_0(VAR_15, VAR_4, 0x0c, 0x00);
   FUNC_1(VAR_15 - VAR_5, VAR_12, 0x0c, 0x00);
  }
 }
}
