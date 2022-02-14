
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char io_ctl; } ;
struct TYPE_4__ {TYPE_1__ ms; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,char*,unsigned short,unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;

__attribute__((used)) static void FUNC_4(unsigned short VAR_4, unsigned char VAR_5)
{
  FUNC_1(VAR_0, "z80 port %04x write %02x", VAR_4, VAR_5);
  VAR_4 &= 0xc1;
  switch (VAR_4)
  {
    case 0x01:
      VAR_2.ms.io_ctl = VAR_5;
      break;

    case 0x40:
    case 0x41:
      if (VAR_3 & VAR_1)
        FUNC_0(VAR_5);
      break;

    case 0x80:
      FUNC_3(VAR_5);
      break;

    case 0x81:
      FUNC_2(VAR_5);
      break;
  }
}
