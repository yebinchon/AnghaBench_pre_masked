
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int,int) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 int VAR_3 = !FUNC_1();
 if (VAR_1.EmuOpt & VAR_0) {

  int VAR_4, VAR_5, *VAR_6;
  if (VAR_3) {
   for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
    VAR_6 = (int *)VAR_2[VAR_4] + (240-8) / 4;
    for (VAR_5 = 320; VAR_5 > 0; VAR_5--, VAR_6 += 240/4)
     VAR_6[0] = VAR_6[1] = 0xe0e0e0e0;
   }
  } else {
   for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
    VAR_6 = (int *)VAR_2[VAR_4] + (240-8)*2 / 4;
    for (VAR_5 = 320; VAR_5 > 0; VAR_5--, VAR_6 += 240*2/4)
     VAR_6[0] = VAR_6[1] = VAR_6[2] = VAR_6[3] = 0;
   }
  }
  return;
 }

 if (VAR_3)
  FUNC_0(320*232, 0xe0, 320*8);
 else
  FUNC_0(320*232*2, 0, 320*8*2);
}
