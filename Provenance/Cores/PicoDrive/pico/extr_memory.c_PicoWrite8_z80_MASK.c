
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int z80Run; int z80_bank68k; scalar_t__ z80_reset; } ;
struct TYPE_4__ {TYPE_1__ m; scalar_t__* zram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int,char*,int,...) ;
 int VAR_8 ;
 int FUNC_3 (int,int,int ) ;

__attribute__((used)) static void FUNC_4(u32 VAR_9, u32 VAR_10)
{
  if ((VAR_5.m.z80Run & 1) || VAR_5.m.z80_reset) {

    FUNC_2(VAR_0, "68k z80 write with no bus or reset! [%06x] %02x @ %06x", VAR_9, VAR_10&0xff, VAR_7);
    return;
  }

  if ((VAR_9 & 0x4000) == 0x0000) {
    FUNC_1(2);
    VAR_5.zram[VAR_9 & 0x1fff] = (u8)VAR_10;
    return;
  }
  if ((VAR_9 & 0x6000) == 0x4000) {
    if (VAR_6 & VAR_3)
      VAR_8 |= FUNC_3(VAR_9&3, VAR_10&0xff, 0)&1;
    return;
  }

  if ((VAR_9 & 0x7ff9) == 0x7f11) {
    if (VAR_6 & VAR_4)
      FUNC_0(VAR_10);
    return;
  }
  if ((VAR_9 & 0x7f00) == 0x6000)
  {
    VAR_5.m.z80_bank68k >>= 1;
    VAR_5.m.z80_bank68k |= VAR_10 << 8;
    VAR_5.m.z80_bank68k &= 0x1ff;
    FUNC_2(VAR_2, "z80 bank=%06x", VAR_5.m.z80_bank68k << 15);
    return;
  }
  FUNC_2(VAR_1|VAR_0, "68k bad write [%06x] %02x @ %06x", VAR_9, VAR_10&0xff, VAR_7);
}
