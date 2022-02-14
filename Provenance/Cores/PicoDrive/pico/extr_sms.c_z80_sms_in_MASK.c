
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int io_ctl; } ;
struct TYPE_6__ {int rotate; } ;
struct TYPE_5__ {unsigned char v_counter; } ;
struct TYPE_8__ {TYPE_3__ ms; TYPE_2__ m; TYPE_1__ video; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ,char*,unsigned char) ;
 unsigned char FUNC_1 () ;
 unsigned char FUNC_2 () ;

__attribute__((used)) static unsigned char FUNC_3(unsigned short VAR_4)
{
  unsigned char VAR_5 = 0;

  FUNC_0(VAR_1, "z80 port %04x read", VAR_4);
  VAR_4 &= 0xc1;
  switch (VAR_4)
  {
    case 0x00:
    case 0x01:
      VAR_5 = 0xff;
      break;

    case 0x40:
      VAR_5 = VAR_2.video.v_counter;
      FUNC_0(VAR_0, "V counter read: %02x", VAR_5);
      break;

    case 0x41:
      VAR_5 = VAR_2.m.rotate++;
      FUNC_0(VAR_0, "H counter read: %02x", VAR_5);
      break;

    case 0x80:
      VAR_5 = FUNC_2();
      break;

    case 0x81:
      VAR_5 = FUNC_1();
      break;

    case 0xc0:
      VAR_5 = ~((VAR_3[0] & 0x3f) | (VAR_3[1] << 6));
      break;

    case 0xc1:
      VAR_5 = (VAR_2.ms.io_ctl & 0x80) | ((VAR_2.ms.io_ctl << 1) & 0x40) | 0x30;
      VAR_5 |= ~(VAR_3[1] >> 2) & 0x0f;
      break;
  }

  FUNC_0(VAR_1, "ret = %02x", VAR_5);
  return VAR_5;
}
