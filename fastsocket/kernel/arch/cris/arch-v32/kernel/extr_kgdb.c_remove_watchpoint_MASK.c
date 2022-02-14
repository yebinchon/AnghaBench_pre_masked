
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s0_3; unsigned int s3_3; scalar_t__ s2_3; scalar_t__ s1_3; } ;


 size_t VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (scalar_t__*,char*) ;
 scalar_t__* VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_1(char VAR_4, int VAR_5, int VAR_6)
{







 if (VAR_4 < '1' || VAR_4 > '4') {
  VAR_2[0] = 0;
  return;
 }



 if (VAR_4 == '3')
  VAR_4 = '4';

 if (VAR_4 == '1') {


  if (!(VAR_3.s0_3 & 0x1)) {

   FUNC_0(VAR_2, VAR_1[VAR_0]);
   return;
  }

  VAR_3.s1_3 = 0;
  VAR_3.s2_3 = 0;
  VAR_3.s0_3 &= ~1;
 } else {
  int VAR_7;
  unsigned int *VAR_8 = &VAR_3.s3_3;







  for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
   if (VAR_8[VAR_7 * 2] == VAR_5 &&
       VAR_8[VAR_7 * 2 + 1] == (VAR_5 + VAR_6 - 1)) {

    int VAR_9 = 2 + VAR_7 * 4;
    int VAR_10;


    VAR_10 = (VAR_3.s0_3 & (0x3 << VAR_9)) >> VAR_9;

    if ((VAR_4 == '3' && VAR_10 == 0x1) ||
        (VAR_4 == '2' && VAR_10 == 0x2) ||
        (VAR_4 == '4' && VAR_10 == 0x3)) {

     break;
    }
   }
  }

  if (VAR_7 > 5) {

   FUNC_0(VAR_2, VAR_1[VAR_0]);
   return;
  }




  VAR_3.s0_3 &= ~(3 << (2 + (VAR_7 * 4)));
  VAR_8[VAR_7 * 2] = 0;
  VAR_8[VAR_7 * 2 + 1] = 0;
 }


 FUNC_0(VAR_2, "OK");
}
