
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Frameskip; int EmuOpt; } ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*) ;

void FUNC_2(int VAR_2)
{
 static void *VAR_3 = ((void*)0);
 static int VAR_4, VAR_5, VAR_6 = 0;

 if (VAR_2 && !VAR_6) {
  VAR_3 = VAR_0;
  VAR_4 = VAR_1.Frameskip;
  VAR_5 = VAR_1.EmuOpt;
  VAR_0 = ((void*)0);
  VAR_1.Frameskip = 8;
  VAR_1.EmuOpt &= ~4;
  VAR_1.EmuOpt |= 0x40000;
  VAR_6 = 1;
  FUNC_1("FAST FORWARD");
 }
 else if (!VAR_2 && VAR_6) {
  VAR_0 = VAR_3;
  VAR_1.Frameskip = VAR_4;
  VAR_1.EmuOpt = VAR_5;
  FUNC_0(1);
  VAR_6 = 0;
 }
}
