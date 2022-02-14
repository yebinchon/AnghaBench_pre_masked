
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int z80_bank68k; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int emu_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned char) ;
 int FUNC_1 (unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4, unsigned char VAR_5)
{
  unsigned int VAR_6;

  VAR_6 = VAR_2.m.z80_bank68k << 15;
  VAR_6 += VAR_4 & 0x7fff;
  if ((VAR_6 & 0xfff000) == 0xa15000)
    VAR_3.emu_flags |= VAR_1;

  FUNC_0(VAR_0, "z80->68k w8 [%06x] %02x", VAR_6, VAR_5);
  FUNC_1(VAR_6, VAR_5);
}
