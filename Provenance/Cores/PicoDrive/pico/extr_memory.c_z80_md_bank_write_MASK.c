
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z80_bank68k; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned char) ;
 int FUNC_1 (unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2, unsigned char VAR_3)
{
  unsigned int VAR_4;

  VAR_4 = VAR_1.m.z80_bank68k << 15;
  VAR_4 += VAR_2 & 0x7fff;

  FUNC_0(VAR_0, "z80->68k w8 [%06x] %02x", VAR_4, VAR_3);
  FUNC_1(VAR_4, VAR_3);
}
