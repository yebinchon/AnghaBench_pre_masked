
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short* regs; unsigned short* sh2_regs; int sh2irqs; int emu_flags; unsigned short* vdp_regs; int* sh2irqi; int* sh2irq_mask; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char*,...) ;
 int VAR_4 ;

char *FUNC_6(void)
{

  char *VAR_5 = VAR_2;
  unsigned short *VAR_6;
  int VAR_7;

  VAR_6 = VAR_1.regs;
  FUNC_5(VAR_5, "regs:\n"); VAR_0;
  for (VAR_7 = 0; VAR_7 < 0x40/2; VAR_7 += 8) {
    FUNC_5(VAR_5, "%02x: %04x %04x %04x %04x %04x %04x %04x %04x\n",
      VAR_7*2, VAR_6[VAR_7+0], VAR_6[VAR_7+1], VAR_6[VAR_7+2], VAR_6[VAR_7+3], VAR_6[VAR_7+4], VAR_6[VAR_7+5], VAR_6[VAR_7+6], VAR_6[VAR_7+7]); VAR_0;
  }
  VAR_6 = VAR_1.sh2_regs;
  FUNC_5(VAR_5, "SH: %04x %04x %04x      IRQs: %02x  eflags: %02x\n",
    VAR_6[0], VAR_6[1], VAR_6[2], VAR_1.sh2irqs, VAR_1.emu_flags); VAR_0;

  VAR_7 = 0;
  VAR_6 = VAR_1.vdp_regs;
  FUNC_5(VAR_5, "VDP regs:\n"); VAR_0;
  FUNC_5(VAR_5, "%02x: %04x %04x %04x %04x %04x %04x %04x %04x\n",
    VAR_7*2, VAR_6[VAR_7+0], VAR_6[VAR_7+1], VAR_6[VAR_7+2], VAR_6[VAR_7+3], VAR_6[VAR_7+4], VAR_6[VAR_7+5], VAR_6[VAR_7+6], VAR_6[VAR_7+7]); VAR_0;

  FUNC_5(VAR_5, "                   mSH2              sSH2\n"); VAR_0;
  FUNC_5(VAR_5, "PC,SR %08x,     %03x %08x,     %03x\n", FUNC_1(&VAR_3), FUNC_3(0), FUNC_1(&VAR_4), FUNC_3(1)); VAR_0;
  for (VAR_7 = 0; VAR_7 < 16/2; VAR_7++) {
    FUNC_5(VAR_5, "R%d,%2d %08x,%08x %08x,%08x\n", VAR_7, VAR_7 + 8,
      FUNC_2(0,VAR_7), FUNC_2(0,VAR_7+8), FUNC_2(1,VAR_7), FUNC_2(1,VAR_7+8)); VAR_0;
  }
  FUNC_5(VAR_5, "gb,vb %08x,%08x %08x,%08x\n", FUNC_0(0), FUNC_4(0), FUNC_0(1), FUNC_4(1)); VAR_0;
  FUNC_5(VAR_5, "IRQs/mask:        %02x/%02x             %02x/%02x\n",
    VAR_1.sh2irqi[0], VAR_1.sh2irq_mask[0], VAR_1.sh2irqi[1], VAR_1.sh2irq_mask[1]); VAR_0;




  return VAR_2;
}
