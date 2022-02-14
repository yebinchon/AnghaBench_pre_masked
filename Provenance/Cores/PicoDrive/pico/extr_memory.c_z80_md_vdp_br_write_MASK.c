
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z80_bank68k; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4, unsigned char VAR_5)
{

  if ((VAR_4&0xfff9) == 0x7f11)
  {
    if (VAR_3 & VAR_1)
      FUNC_0(VAR_5);
    return;
  }

  if ((VAR_4>>8) == 0x60)
  {
    VAR_2.m.z80_bank68k >>= 1;
    VAR_2.m.z80_bank68k |= VAR_5 << 8;
    VAR_2.m.z80_bank68k &= 0x1ff;
    return;
  }

  FUNC_1(VAR_0, "z80 invalid w8 [%06x] %02x", VAR_4, VAR_5);
}
