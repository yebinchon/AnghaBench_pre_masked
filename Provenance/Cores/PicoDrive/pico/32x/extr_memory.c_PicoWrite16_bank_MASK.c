
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sram_reg; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int* regs; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_5, u32 VAR_6)
{
  if (!(VAR_1.m.sram_reg & VAR_3))
    FUNC_0(VAR_0, "m68k w16 [%06x] %04x @%06x",
      VAR_5, VAR_6 & 0xffff, VAR_4);

  VAR_5 = (VAR_2.regs[4 / 2] << 20) | (VAR_5 & 0xfffff);
  FUNC_1(VAR_5, VAR_6);
}
