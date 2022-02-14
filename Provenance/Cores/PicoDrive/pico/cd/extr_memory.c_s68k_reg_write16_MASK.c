
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ m68k_poll_cnt; } ;
struct TYPE_4__ {int* s68k_regs; TYPE_1__ m; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(u32 VAR_1, u32 VAR_2)
{
  u8 *VAR_3 = VAR_0->s68k_regs;

  if ((VAR_1 & 0x1f0) == 0x20)
    goto write_comm;

  switch (VAR_1) {
    case 0x0e:


      VAR_3[0xf] = VAR_2;
      return;
    case 0x58:
      VAR_3[0x59] = VAR_2 & 7;
      return;
    case 0x5a:
      VAR_3[0x5a] = VAR_2 >> 8;
      VAR_3[0x5b] = VAR_2 & 0xe0;
      return;
    case 0x5c:
      VAR_3[0x5d] = VAR_2 & 0x1f;
      return;
    case 0x5e:
      VAR_3[0x5e] = VAR_2 >> 8;
      VAR_3[0x5f] = VAR_2 & 0xf8;
      return;
    case 0x60:
      VAR_3[0x61] = VAR_2 & 0x3f;
      return;
    case 0x62:
      VAR_3[0x62] = (VAR_2 >> 8) & 1;
      VAR_3[0x63] = VAR_2;
      return;
    case 0x64:
      VAR_3[0x65] = VAR_2;
      return;
    case 0x66:
      VAR_2 &= 0xfffe;
      VAR_3[0x66] = VAR_2 >> 8;
      VAR_3[0x67] = VAR_2;
      FUNC_1(VAR_2);
      return;
    default:
      break;
  }

  FUNC_2(VAR_1, VAR_2 >> 8);
  FUNC_2(VAR_1 + 1, VAR_2 & 0xff);
  return;

write_comm:
  VAR_3[VAR_1] = VAR_2 >> 8;
  VAR_3[VAR_1 + 1] = VAR_2;
  if (VAR_0->m.m68k_poll_cnt)
    FUNC_0(0);
  VAR_0->m.m68k_poll_cnt = 0;
}
