
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_3__ {int* keycode; int modifiers; } ;
struct TYPE_4__ {TYPE_1__ sc_ndata; TYPE_1__ sc_odata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int ,int) ;
 int** VAR_6 ;

s32 FUNC_2(void)
{
 int VAR_7, VAR_8, VAR_9;

 if (!VAR_5)
  return -1;

 if (FUNC_0() < 0)
  return -2;

 if (VAR_5->sc_ndata.keycode[0] == VAR_0)
  return 0;

 if (VAR_5->sc_ndata.modifiers != VAR_5->sc_odata.modifiers) {
  for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
   if ((VAR_5->sc_odata.modifiers & VAR_6[VAR_7][0])
    && !(VAR_5->sc_ndata.modifiers & VAR_6[VAR_7][0]))
    FUNC_1(VAR_4, VAR_6[VAR_7][1]);
   else if ((VAR_5->sc_ndata.modifiers & VAR_6[VAR_7][0])
    && !(VAR_5->sc_odata.modifiers & VAR_6[VAR_7][0]))
    FUNC_1(VAR_3, VAR_6[VAR_7][1]);
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (VAR_5->sc_odata.keycode[VAR_7] > 3) {
   VAR_9 = -1;

   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_5->sc_odata.keycode[VAR_7] == VAR_5->sc_ndata.keycode[VAR_8]) {
     VAR_9 = VAR_8;
     break;
    }
   }

   if (VAR_9 == -1)
    FUNC_1(VAR_4, VAR_5->sc_odata.keycode[VAR_7]);
  }

  if (VAR_5->sc_ndata.keycode[VAR_7] > 3) {
   VAR_9 = -1;

   for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    if (VAR_5->sc_ndata.keycode[VAR_7] == VAR_5->sc_odata.keycode[VAR_8]) {
     VAR_9 = VAR_8;
     break;
    }
   }

   if (VAR_9 == -1)
    FUNC_1(VAR_3, VAR_5->sc_ndata.keycode[VAR_7]);
  }
 }

 VAR_5->sc_odata = VAR_5->sc_ndata;

 return 0;
}
