
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gamma; int CPUclock; int EmuOpt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_0(void)
{
 if (VAR_7 != VAR_1)
  VAR_4 &= ~VAR_3;
 if (VAR_7 != VAR_2)
  VAR_5.EmuOpt &= ~VAR_0;

 if (VAR_5.gamma < 10 || VAR_5.gamma > 300)
  VAR_5.gamma = 100;

 if (VAR_5.CPUclock < 10 || VAR_5.CPUclock > 1024)
  VAR_5.CPUclock = VAR_6;
}
