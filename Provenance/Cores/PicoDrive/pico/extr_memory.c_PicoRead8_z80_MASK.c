
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int z80Run; scalar_t__ z80_reset; } ;
struct TYPE_4__ {int* zram; TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_4)
{
  u32 VAR_5 = 0xff;
  if ((VAR_2.m.z80Run & 1) || VAR_2.m.z80_reset) {
    FUNC_0(VAR_0, "68k z80 read with no bus! [%06x] @ %06x", VAR_4, VAR_3);

    return 0;
  }

  if ((VAR_4 & 0x4000) == 0x0000)
    VAR_5 = VAR_2.zram[VAR_4 & 0x1fff];
  else if ((VAR_4 & 0x6000) == 0x4000)
    VAR_5 = FUNC_1();
  else
    FUNC_0(VAR_1|VAR_0, "68k bad read [%06x] @%06x", VAR_4, VAR_3);
  return VAR_5;
}
