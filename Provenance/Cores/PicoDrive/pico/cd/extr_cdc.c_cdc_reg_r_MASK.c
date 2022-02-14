
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint8 ;
struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {unsigned char ifstat; int dbc; unsigned char** head; size_t* ctrl; int pt; int wa; unsigned char* stat; int ifctrl; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned char VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_6 ;

unsigned char FUNC_1(void)
{
  switch (VAR_5->s68k_regs[0x04+1] & 0x0F)
  {
    case 0x01:
      VAR_5->s68k_regs[0x04+1] = 0x02;
      return VAR_6.ifstat;

    case 0x02:
      VAR_5->s68k_regs[0x04+1] = 0x03;
      return VAR_6.dbc & 0xff;

    case 0x03:
      VAR_5->s68k_regs[0x04+1] = 0x04;
      return (VAR_6.dbc >> 8) & 0xff;

    case 0x04:
      VAR_5->s68k_regs[0x04+1] = 0x05;
      return VAR_6.head[VAR_6.ctrl[1] & VAR_3][0];

    case 0x05:
      VAR_5->s68k_regs[0x04+1] = 0x06;
      return VAR_6.head[VAR_6.ctrl[1] & VAR_3][1];

    case 0x06:
      VAR_5->s68k_regs[0x04+1] = 0x07;
      return VAR_6.head[VAR_6.ctrl[1] & VAR_3][2];

    case 0x07:
      VAR_5->s68k_regs[0x04+1] = 0x08;
      return VAR_6.head[VAR_6.ctrl[1] & VAR_3][3];

    case 0x08:
      VAR_5->s68k_regs[0x04+1] = 0x09;
      return VAR_6.pt & 0xff;

    case 0x09:
      VAR_5->s68k_regs[0x04+1] = 0x0a;
      return (VAR_6.pt >> 8) & 0xff;

    case 0x0a:
      VAR_5->s68k_regs[0x04+1] = 0x0b;
      return VAR_6.wa & 0xff;

    case 0x0b:
      VAR_5->s68k_regs[0x04+1] = 0x0c;
      return (VAR_6.wa >> 8) & 0xff;

    case 0x0c:
      VAR_5->s68k_regs[0x04+1] = 0x0d;
      return VAR_6.stat[0];

    case 0x0d:
      VAR_5->s68k_regs[0x04+1] = 0x0e;
      return 0x00;

    case 0x0e:
      VAR_5->s68k_regs[0x04+1] = 0x0f;
      return VAR_6.stat[2];

    case 0x0f:
    {
      uint8 VAR_7 = VAR_6.stat[3];


      VAR_6.stat[3] = VAR_4;


      VAR_6.ifstat |= VAR_0;
      VAR_5->s68k_regs[0x04+1] = 0x00;
      return VAR_7;
    }

    default:
      return 0xff;
  }
}
