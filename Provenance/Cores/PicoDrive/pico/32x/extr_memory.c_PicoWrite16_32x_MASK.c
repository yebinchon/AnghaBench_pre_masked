
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (int,int) ;

void FUNC_3(u32 VAR_5, u32 VAR_6)
{
  if ((VAR_5 & 0xffc0) == 0x5100) {
    u16 *VAR_7 = VAR_3.regs;

    FUNC_1(VAR_0, "m68k 32x w16 [%06x] %04x @%06x", VAR_5, VAR_6 & 0xffff, VAR_4);
    VAR_5 &= 0x3e;
    if (VAR_5 == 0) {
      if ((VAR_6 ^ VAR_7[0]) & VAR_6 & VAR_1) {
        FUNC_0();
        VAR_7[0] &= ~VAR_2;
        VAR_7[0] |= VAR_1;
        FUNC_2(VAR_5, VAR_6);
      }
      return;
    }


    if ((VAR_5 & 0x30) == 0x20)
      VAR_7[VAR_5 / 2] = VAR_6;
    return;
  }

  FUNC_1(VAR_0, "m68k unmapped w16 [%06x] %04x @%06x", VAR_5, VAR_6 & 0xffff, VAR_4);
}
