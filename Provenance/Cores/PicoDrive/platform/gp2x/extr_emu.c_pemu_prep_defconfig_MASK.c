
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gp2x_soc_t ;
struct TYPE_2__ {int analog_deadzone; int EmuOpt; int s_PicoOpt; int renderer32x; int CPUclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;

void FUNC_1(void)
{
 gp2x_soc_t VAR_9;

 VAR_7.CPUclock = VAR_8;
 VAR_7.renderer32x = VAR_4;
 VAR_7.analog_deadzone = 50;

 VAR_9 = FUNC_0();
 if (VAR_9 == VAR_5)
  VAR_7.s_PicoOpt |= VAR_3;
 else if (VAR_9 == VAR_6) {
  VAR_7.EmuOpt |= VAR_1|VAR_0;
  VAR_7.s_PicoOpt |= VAR_2;
 }
}
