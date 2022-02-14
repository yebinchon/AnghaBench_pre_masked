
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_9 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void FUNC_3(void)
{
 int VAR_12;

 VAR_7 = ((void*)0);
 VAR_9.EmuOpt &= ~VAR_1;


 if (VAR_9.EmuOpt & VAR_0)
 {
  FUNC_1(0);

  VAR_12 = FUNC_0(VAR_2, VAR_8, (VAR_4 & VAR_3) ? 1 : 0, VAR_6);
  if (VAR_12 != 0) {
   FUNC_2("dsound init failed\n");
   return;
  }

  VAR_7 = (void *)VAR_10;
  VAR_5 = VAR_11;
  VAR_9.EmuOpt |= VAR_1;
 }
}
