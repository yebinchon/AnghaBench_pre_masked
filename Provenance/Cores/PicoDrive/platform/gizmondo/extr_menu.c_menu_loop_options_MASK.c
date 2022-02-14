
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int menu_id ;
struct TYPE_2__ {int EmuOpt; } ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_1__ VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 unsigned long FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int const,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ,int) ;
 int VAR_16 ;
 int FUNC_10 () ;
 int VAR_17 ;
 int FUNC_11 (unsigned long) ;
 int VAR_18 ;
 int FUNC_12 (int,unsigned long) ;
 int VAR_19 ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(void)
{
 static int VAR_20 = 0;
 int VAR_21, VAR_22;
 unsigned long VAR_23 = 0;
 menu_id VAR_24;

 FUNC_7(VAR_17, VAR_0, 131, VAR_18);
 FUNC_7(VAR_17, VAR_0, 135, VAR_12 != VAR_13);
 VAR_21 = FUNC_6(VAR_17, VAR_0) - 1;
 if (VAR_20 > VAR_21) VAR_20 = VAR_21;

 while (1)
 {
  FUNC_2(VAR_20);
  VAR_23 = FUNC_5(VAR_7|VAR_1|VAR_2|VAR_5|VAR_3|VAR_6|VAR_4);
  if (VAR_23 & VAR_7 ) { VAR_20--; if (VAR_20 < 0) VAR_20 = VAR_21; }
  if (VAR_23 & VAR_1) { VAR_20++; if (VAR_20 > VAR_21) VAR_20 = 0; }
  VAR_24 = FUNC_8(VAR_17, VAR_0, VAR_20);
  if (VAR_23 & (VAR_2|VAR_5)) {
   if (!FUNC_9(VAR_17, VAR_0, VAR_24, (VAR_23&VAR_5) ? 1 : 0)) {
    switch (VAR_24) {
     case 133:
      if (VAR_23 & VAR_2) {
       if ((VAR_10&0x10) || !(VAR_14.EmuOpt &0x80)) {
        VAR_10&= ~0x10;
        VAR_14.EmuOpt |= 0x80;
       }
      } else {
       if (!(VAR_10&0x10) || (VAR_14.EmuOpt &0x80)) {
        VAR_10|= 0x10;
        VAR_14.EmuOpt &= ~0x80;
       }
      }
      break;
     case 128:
      if ((VAR_23 & VAR_5) && VAR_11 == 44100 &&
        !(VAR_10&0x08))
      {
       VAR_11 = 11025;
       VAR_10 |= 8;
      } else if ((VAR_23 & VAR_2) && VAR_11 == 11025 &&
        (VAR_10&0x08) && !(VAR_9&1))
      {
       VAR_11 = 44100;
       VAR_10 &= ~8;
      } else
       VAR_11 = FUNC_12(VAR_11, VAR_23 & VAR_5);
      break;
     case 134:
      FUNC_11(VAR_23 & VAR_5);
      break;
     case 136: {
        int VAR_25 = ((VAR_14.EmuOpt>>9)&1) | ((VAR_14.EmuOpt>>10)&2);
        VAR_25 += (VAR_23 & VAR_2) ? -1 : 1;
        if (VAR_25 < 0) VAR_25 = 0; else if (VAR_25 > 3) VAR_25 = 3;
        VAR_25 |= VAR_25 << 1; VAR_25 &= ~2;
        VAR_14.EmuOpt &= ~0xa00;
        VAR_14.EmuOpt |= VAR_25 << 9;
        break;
       }
     case 130:
       if (VAR_23 & VAR_5) {
        VAR_19++; if (VAR_19 > 9) VAR_19 = 0;
       } else {VAR_19--; if (VAR_19 < 0) VAR_19 = 9;
       }
       break;
     case 132:
     case 131:
     case 135:
       VAR_12 += (VAR_23&VAR_5) ? 1 : -1;
       if (VAR_12 > 9) VAR_12 = 0;
       if (VAR_12 < 0) VAR_12 = 9;
       FUNC_7(VAR_17, VAR_0, 135, VAR_12 != VAR_13);
       VAR_21 = FUNC_6(VAR_17, VAR_0) - 1;
       if (VAR_20 > VAR_21) VAR_20 = VAR_21;
       break;
     default:

      break;
    }
   }
  }
  if (VAR_23 & VAR_3) {
   if (!FUNC_9(VAR_17, VAR_0, VAR_24, 1))
   {
    switch (VAR_24)
    {
     case 129:
      FUNC_1();
      if (VAR_15 == VAR_8)
       return 0;
      break;
     case 137:
      FUNC_0();
      break;
     case 132:
      FUNC_10();
      if (FUNC_4(0)) FUNC_13(VAR_16, "config saved");
      else FUNC_13(VAR_16, "failed to write config");
      return 1;
     case 131:
      FUNC_10();
      if (FUNC_4(1)) FUNC_13(VAR_16, "config saved");
      else FUNC_13(VAR_16, "failed to write config");
      return 1;
     case 135:
      VAR_22 = FUNC_3(1, 1);
      if (!VAR_22) VAR_22 = FUNC_3(0, 1);
      if (VAR_22) FUNC_13(VAR_16, "config loaded");
      else FUNC_13(VAR_16, "failed to load config");
      return 1;
     default:

      break;
    }
   }
  }
  if(VAR_23 & (VAR_6|VAR_4)) {
   FUNC_10();
   return 0;
  }
 }
}
