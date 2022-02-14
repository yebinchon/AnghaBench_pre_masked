
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int int32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (double) ;
 scalar_t__**** VAR_1 ;

__attribute__((used)) static void FUNC_2(void) {


 static double VAR_2[16] = {
  ((0.000) * 2), ((9.000) * 2), ((12.000) * 2), ((13.875) * 2), ((15.000) * 2), ((16.125) * 2), ((16.875) * 2), ((17.625) * 2),
  ((18.000) * 2), ((18.750) * 2), ((19.125) * 2), ((19.500) * 2), ((19.875) * 2), ((20.250) * 2), ((20.625) * 2), ((21.000) * 2)
 };

 int32 VAR_3;
 int32 VAR_4, VAR_5, VAR_6, VAR_7;

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++)
  for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   for (VAR_6 = 0; VAR_6 < 64; VAR_6++)
    for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
     if (VAR_7 == 0) {
      VAR_1[VAR_4][VAR_5][VAR_6][VAR_7] = FUNC_0(VAR_6);
     } else {
      VAR_3 = (int32)(VAR_2[VAR_4] - ((3.000) * 2) * (7 - VAR_5));
      if (VAR_3 <= 0)
       VAR_1[VAR_4][VAR_5][VAR_6][VAR_7] = FUNC_0(VAR_6);
      else
       VAR_1[VAR_4][VAR_5][VAR_6][VAR_7] = (uint32)((VAR_3 >> (3 - VAR_7)) / VAR_0) + FUNC_0(VAR_6);
     }
    }
}
