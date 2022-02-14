
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int busreq; int stopwatch_base_c; } ;
struct TYPE_4__ {int* s68k_regs; TYPE_1__ m; int bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(u32 VAR_5)
{
  u32 VAR_6 = 0;
  VAR_5 &= 0x3e;

  switch (VAR_5) {
    case 0:

      VAR_6 = ((VAR_3->s68k_regs[0x33] << 13) & 0x8000)
        | VAR_3->m.busreq;
      goto end;
    case 2:
      FUNC_3(VAR_5);
      VAR_6 = (VAR_3->s68k_regs[VAR_5]<<8) | (VAR_3->s68k_regs[VAR_5+1]&0xc7);
      FUNC_2(VAR_0, "m68k_regs r3: %02x @%06x", (u8)VAR_6, VAR_4);
      goto end;
    case 4:
      VAR_6 = VAR_3->s68k_regs[4]<<8;
      goto end;
    case 6:
      VAR_6 = *(u16 *)(VAR_3->bios + 0x72);
      goto end;
    case 8:
      VAR_6 = FUNC_1();
      goto end;
    case 0xA:
      FUNC_2(VAR_2, "m68k FIXME: reserved read");
      goto end;
    case 0xC:

      VAR_6 = FUNC_4(FUNC_0());
      VAR_6 = (VAR_6 - VAR_3->m.stopwatch_base_c) / 384;
      VAR_6 &= 0x0fff;
      FUNC_2(VAR_1, "m68k stopwatch timer read (%04x)", VAR_6);
      goto end;
  }

  if (VAR_5 < 0x30) {

    FUNC_3(VAR_5);
    VAR_6 = (VAR_3->s68k_regs[VAR_5]<<8) | VAR_3->s68k_regs[VAR_5+1];
    goto end;
  }

  FUNC_2(VAR_2, "m68k_regs FIXME invalid read @ %02x", VAR_5);

end:
  return VAR_6;
}
