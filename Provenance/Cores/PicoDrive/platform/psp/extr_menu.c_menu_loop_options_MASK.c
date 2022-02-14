
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int menu_id ;
struct TYPE_2__ {int EmuOpt; int CPUclock; } ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 unsigned long FUNC_6 (unsigned long,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int const,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,int ,int) ;
 int VAR_14 ;
 int FUNC_11 () ;
 int VAR_15 ;
 unsigned long FUNC_12 (int ) ;
 int FUNC_13 (unsigned long) ;
 int VAR_16 ;
 int FUNC_14 (int ,unsigned long) ;
 int VAR_17 ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int FUNC_16(void)
{
 static int VAR_18 = 0;
 int VAR_19, VAR_20;
 unsigned long VAR_21 = 0;
 menu_id VAR_22;

 FUNC_8(VAR_15, VAR_0, 131, VAR_16);
 FUNC_8(VAR_15, VAR_0, 135, VAR_10 != VAR_11);
 VAR_19 = FUNC_7(VAR_15, VAR_0) - 1;
 if (VAR_18 > VAR_19) VAR_18 = VAR_19;

 while (1)
 {
  FUNC_3(VAR_18);
  VAR_21 = FUNC_6(VAR_5|VAR_2|VAR_3|VAR_4|VAR_6|VAR_1, 0);
  if (VAR_21 & VAR_5 ) { VAR_18--; if (VAR_18 < 0) VAR_18 = VAR_19; }
  if (VAR_21 & VAR_2) { VAR_18++; if (VAR_18 > VAR_19) VAR_18 = 0; }
  VAR_22 = FUNC_9(VAR_15, VAR_0, VAR_18);
  if (VAR_21 & (VAR_3|VAR_4)) {
   if (!FUNC_10(VAR_15, VAR_0, VAR_22, (VAR_21&VAR_4) ? 1 : 0)) {
    switch (VAR_22) {
     case 133:
      if ((VAR_8 & 0x10) || !(VAR_12.EmuOpt & 0x80)) {
       VAR_8 &= ~0x10;
       VAR_12.EmuOpt |= 0x80;
      } else {
       VAR_8 |= 0x10;
       VAR_12.EmuOpt &= ~0x80;
      }
      break;
     case 128:
      VAR_9 = FUNC_14(VAR_9, VAR_21 & VAR_4);
      break;
     case 134:
      FUNC_13(VAR_21 & VAR_4);
      break;
     case 138: {
        int VAR_23 = ((VAR_12.EmuOpt>>9)&1) | ((VAR_12.EmuOpt>>10)&2);
        VAR_23 += (VAR_21 & VAR_3) ? -1 : 1;
        if (VAR_23 < 0) VAR_23 = 0; else if (VAR_23 > 3) VAR_23 = 3;
        VAR_23 |= VAR_23 << 1; VAR_23 &= ~2;
        VAR_12.EmuOpt &= ~0xa00;
        VAR_12.EmuOpt |= VAR_23 << 9;
        break;
       }
     case 130:
       if (VAR_21 & VAR_4) {
        VAR_17++; if (VAR_17 > 9) VAR_17 = 0;
       } else {VAR_17--; if (VAR_17 < 0) VAR_17 = 9;
       }
       break;
     case 137:
       while ((VAR_21 = FUNC_12(0)) & (VAR_3|VAR_4)) {
        VAR_12.CPUclock += (VAR_21 & VAR_3) ? -1 : 1;
        if (VAR_12.CPUclock < 19) VAR_12.CPUclock = 19;
        if (VAR_12.CPUclock > 333) VAR_12.CPUclock = 333;
        FUNC_3(VAR_18);
       }
       break;
     case 132:
     case 131:
     case 135:
       VAR_10 += (VAR_21&VAR_4) ? 1 : -1;
       if (VAR_10 > 9) VAR_10 = 0;
       if (VAR_10 < 0) VAR_10 = 9;
       FUNC_8(VAR_15, VAR_0, 135, VAR_10 != VAR_11);
       VAR_19 = FUNC_7(VAR_15, VAR_0) - 1;
       if (VAR_18 > VAR_19) VAR_18 = VAR_19;
       break;
     default:

      break;
    }
   }
  }
  if (VAR_21 & VAR_1) {
   if (!FUNC_10(VAR_15, VAR_0, VAR_22, 1))
   {
    switch (VAR_22)
    {
     case 136:
      FUNC_2();
      break;
     case 129:
      FUNC_1();
      if (VAR_13 == VAR_7)
       return 0;
      break;
     case 139:
      FUNC_0();
      break;
     case 132:
      FUNC_11();
      if (FUNC_5(0)) FUNC_15(VAR_14, "config saved");
      else FUNC_15(VAR_14, "failed to write config");
      return 1;
     case 131:
      FUNC_11();
      if (FUNC_5(1)) FUNC_15(VAR_14, "config saved");
      else FUNC_15(VAR_14, "failed to write config");
      return 1;
     case 135:
      VAR_20 = FUNC_4(1, 1);
      if (!VAR_20) VAR_20 = FUNC_4(0, 1);
      if (VAR_20) FUNC_15(VAR_14, "config loaded");
      else FUNC_15(VAR_14, "failed to load config");
      return 1;
     default:

      break;
    }
   }
  }
  if(VAR_21 & VAR_6) {
   FUNC_11();
   return 0;
  }
 }
}
