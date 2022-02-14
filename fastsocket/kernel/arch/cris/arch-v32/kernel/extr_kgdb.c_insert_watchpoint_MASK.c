
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ccs; } ;
struct TYPE_3__ {int s0_3; int s1_3; int s2_3; unsigned int s3_3; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (scalar_t__*,char*) ;
 scalar_t__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static void FUNC_1(char VAR_7, int VAR_8, int VAR_9)
{
 if (VAR_7 < '1' || VAR_7 > '4') {
  VAR_4[0] = 0;
  return;
 }



 if (VAR_7 == '3')
  VAR_7 = '4';

 if (VAR_7 == '1') {


  if (VAR_6.s0_3 & 0x1) {

   FUNC_0(VAR_4, VAR_3[VAR_1]);
   return;
  }

  VAR_6.s1_3 = VAR_8;
  VAR_6.s2_3 = (VAR_8 + VAR_9 - 1);
  VAR_6.s0_3 |= 1;
 } else {
  int VAR_10;
  unsigned int *VAR_11 = &VAR_6.s3_3;
  for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {



   if (!(VAR_6.s0_3 & (0x3 << (2 + (VAR_10 * 4))))) {
    break;
   }
  }

  if (VAR_10 > 5) {

   FUNC_0(VAR_4, VAR_3[VAR_1]);
   return;
  }


  if (VAR_7 == '3' || VAR_7 == '4') {

   VAR_6.s0_3 |= (1 << (2 + VAR_10 * 4));
  }
  if (VAR_7 == '2' || VAR_7 == '4') {

   VAR_6.s0_3 |= (2 << (2 + VAR_10 * 4));
  }


  VAR_11[VAR_10 * 2] = VAR_8;
  VAR_11[VAR_10 * 2 + 1] = (VAR_8 + VAR_9 - 1);
 }


 VAR_5.ccs |= (1 << (VAR_2 + VAR_0));
 FUNC_0(VAR_4, "OK");
}
