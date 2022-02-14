
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int emu_flags; } ;
struct TYPE_3__ {int addr; int cycles; scalar_t__ cnt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_1(u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
  int VAR_8 = 0;

  if (VAR_5 - 2 <= VAR_4.addr && VAR_4.addr <= VAR_5 + 2
    && VAR_6 - VAR_4.cycles <= 64 && !VAR_3)
  {
    if (VAR_4.cnt++ > VAR_1) {
      if (!(VAR_2.emu_flags & VAR_7)) {
        FUNC_0(VAR_0, "m68k poll addr %08x, cyc %u",
          VAR_5, VAR_6 - VAR_4.cycles);
        VAR_8 = 1;
      }
      VAR_2.emu_flags |= VAR_7;
    }
  }
  else {
    VAR_4.cnt = 0;
    VAR_4.addr = VAR_5;
    VAR_3 = 0;
  }
  VAR_4.cycles = VAR_6;

  return VAR_8;
}
