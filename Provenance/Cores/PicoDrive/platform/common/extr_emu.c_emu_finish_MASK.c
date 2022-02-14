
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ changed; } ;
struct TYPE_3__ {int EmuOpt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(void)
{

 if ((VAR_3.EmuOpt & VAR_0) && VAR_2.changed) {
  FUNC_2(0, 1);
  VAR_2.changed = 0;
 }

 if (!(VAR_3.EmuOpt & VAR_1)) {
  char VAR_4[512];
  FUNC_3(VAR_4);
  FUNC_1(VAR_4);



 }

 FUNC_4();

 FUNC_0();
 FUNC_5();
}
