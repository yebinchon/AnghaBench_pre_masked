
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (int,int) ;

void FUNC_3(u32 VAR_6, u32 VAR_7)
{
  if ((VAR_6 & 0xffc0) == 0x5100) {
    u16 *VAR_8 = VAR_4.regs;

    FUNC_1(VAR_0, "m68k 32x w8  [%06x]   %02x @%06x", VAR_6, VAR_7 & 0xff, VAR_5);
    VAR_6 &= 0x3f;
    if (VAR_6 == 1) {
      if ((VAR_7 ^ VAR_8[0]) & VAR_7 & VAR_2) {
        FUNC_0();
        VAR_8[0] &= ~VAR_3;
        VAR_8[0] |= VAR_2;
        FUNC_2(VAR_6, VAR_7);
      }
      return;
    }


    if ((VAR_6 & 0x30) == 0x20) {
      u8 *VAR_9 = (u8 *)VAR_8;
      VAR_9[VAR_6 ^ 1] = VAR_7;
    }
    return;
  }

  FUNC_1(VAR_1, "m68k unmapped w8  [%06x]   %02x @%06x", VAR_6, VAR_7 & 0xff, VAR_5);
}
