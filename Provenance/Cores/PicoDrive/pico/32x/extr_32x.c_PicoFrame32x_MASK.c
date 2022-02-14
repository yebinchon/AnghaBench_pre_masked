
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scanline; } ;
struct TYPE_10__ {TYPE_1__ m; } ;
struct TYPE_9__ {int* vdp_regs; int* sh2_regs; int emu_flags; } ;
struct TYPE_8__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int,int ,int ) ;
 TYPE_2__ VAR_9 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_2__ VAR_10 ;

void FUNC_8(void)
{
  VAR_5.m.scanline = 0;

  VAR_6.vdp_regs[0x0a/2] &= ~VAR_3;
  if ((VAR_6.vdp_regs[0] & VAR_1) != 0)
    VAR_6.vdp_regs[0x0a/2] &= ~VAR_2;

  if (!(VAR_6.sh2_regs[0] & 0x80))
    FUNC_4(((void*)0), FUNC_2());
  FUNC_5(&VAR_9, VAR_8, 0);
  FUNC_5(&VAR_10, VAR_8, 0);

  if (VAR_7 & VAR_4)
    FUNC_6();

  FUNC_1();
  FUNC_0();
  FUNC_7();

  FUNC_3(VAR_0, "poll: %02x %02x %02x",
    VAR_6.emu_flags & 3, VAR_9, VAR_10);
}
