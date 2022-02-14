
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int TVSTAT; } ;
struct TYPE_3__ {int IsPal; int MaxLineCount; int tickfreq; int OneFrameTime; int CurSH2FreqType; } ;
typedef int LARGE_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 TYPE_1__ VAR_2 ;

void FUNC_5(int VAR_3) {
   VAR_2.IsPal = VAR_3;
   VAR_2.MaxLineCount = VAR_3 ? 313 : 263;
   VAR_2.OneFrameTime =
      VAR_3 ? (VAR_2.tickfreq / 50) : (VAR_2.tickfreq * 1001 / 60000);
   VAR_0->TVSTAT = VAR_0->TVSTAT | (VAR_3 & 0x1);
   FUNC_1(VAR_3);
   FUNC_2(VAR_2.CurSH2FreqType);
   VAR_1 = FUNC_3();
}
