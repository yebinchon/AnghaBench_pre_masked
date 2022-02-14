
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef unsigned char uint8 ;
struct TYPE_20__ {int pending; TYPE_8__* regs; } ;
struct TYPE_18__ {int l; } ;
struct TYPE_19__ {TYPE_7__ byte; } ;
struct TYPE_16__ {unsigned char l; unsigned char h; } ;
struct TYPE_17__ {TYPE_5__ byte; } ;
struct TYPE_14__ {unsigned char l; unsigned char h; } ;
struct TYPE_15__ {TYPE_3__ byte; } ;
struct TYPE_12__ {unsigned char l; unsigned char h; } ;
struct TYPE_13__ {TYPE_1__ byte; } ;
struct TYPE_11__ {unsigned char ifstat; unsigned char** head; size_t* ctrl; unsigned char* stat; int ifctrl; TYPE_6__ wa; TYPE_4__ pt; TYPE_2__ dbc; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 unsigned char VAR_4 ;
 TYPE_10__ VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_9__ VAR_6 ;

unsigned char FUNC_1(void)
{
  switch (VAR_6.regs[0x04>>1].byte.l & 0x0F)
  {
    case 0x01:
      VAR_6.regs[0x04>>1].byte.l = 0x02;
      return VAR_5.ifstat;

    case 0x02:
      VAR_6.regs[0x04>>1].byte.l = 0x03;
      return VAR_5.dbc.byte.l;

    case 0x03:
      VAR_6.regs[0x04>>1].byte.l = 0x04;
      return VAR_5.dbc.byte.h;

    case 0x04:
      VAR_6.regs[0x04>>1].byte.l = 0x05;
      return VAR_5.head[VAR_5.ctrl[1] & VAR_3][0];

    case 0x05:
      VAR_6.regs[0x04>>1].byte.l = 0x06;
      return VAR_5.head[VAR_5.ctrl[1] & VAR_3][1];

    case 0x06:
      VAR_6.regs[0x04>>1].byte.l = 0x07;
      return VAR_5.head[VAR_5.ctrl[1] & VAR_3][2];

    case 0x07:
      VAR_6.regs[0x04>>1].byte.l = 0x08;
      return VAR_5.head[VAR_5.ctrl[1] & VAR_3][3];

    case 0x08:
      VAR_6.regs[0x04>>1].byte.l = 0x09;
      return VAR_5.pt.byte.l;

    case 0x09:
      VAR_6.regs[0x04>>1].byte.l = 0x0a;
      return VAR_5.pt.byte.h;

    case 0x0a:
      VAR_6.regs[0x04>>1].byte.l = 0x0b;
      return VAR_5.wa.byte.l;

    case 0x0b:
      VAR_6.regs[0x04>>1].byte.l = 0x0c;
      return VAR_5.wa.byte.h;

    case 0x0c:
      VAR_6.regs[0x04>>1].byte.l = 0x0d;
      return VAR_5.stat[0];

    case 0x0d:
      VAR_6.regs[0x04>>1].byte.l = 0x0e;
      return 0x00;

    case 0x0e:
      VAR_6.regs[0x04>>1].byte.l = 0x0f;
      return VAR_5.stat[2];

    case 0x0f:
    {
      uint8 VAR_7 = VAR_5.stat[3];


      VAR_5.stat[3] = VAR_4;


      VAR_5.ifstat |= VAR_0;
      VAR_6.regs[0x04>>1].byte.l = 0x00;
      return VAR_7;
    }

    default:
      return 0xff;
  }
}
