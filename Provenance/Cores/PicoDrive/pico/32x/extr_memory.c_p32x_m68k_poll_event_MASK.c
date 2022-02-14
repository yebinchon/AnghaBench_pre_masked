
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int emu_flags; } ;
struct TYPE_3__ {scalar_t__ cnt; scalar_t__ addr; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 TYPE_1__ VAR_2 ;

void FUNC_2(u32 VAR_3)
{
  if (VAR_1.emu_flags & VAR_3) {
    FUNC_1(VAR_0, "m68k poll %02x -> %02x", VAR_1.emu_flags,
      VAR_1.emu_flags & ~VAR_3);
    VAR_1.emu_flags &= ~VAR_3;
    FUNC_0(0);
  }
  VAR_2.addr = VAR_2.cnt = 0;
}
