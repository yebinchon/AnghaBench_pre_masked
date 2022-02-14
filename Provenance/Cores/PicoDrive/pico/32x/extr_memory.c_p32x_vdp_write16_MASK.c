
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int* vdp_regs; } ;
struct TYPE_3__ {int** dram; } ;
typedef int SH2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_5, u32 VAR_6, SH2 *VAR_7)
{
  VAR_5 &= 0x0e;
  if (VAR_5 == 6) {
    VAR_3.vdp_regs[6 / 2] = VAR_6;
    return;
  }
  if (VAR_5 == 8) {
    u16 *VAR_8 = VAR_4->dram[(VAR_3.vdp_regs[0x0a/2] & VAR_0) ^ 1];
    int VAR_9 = VAR_3.vdp_regs[4 / 2] + 1;
    int VAR_10 = VAR_9;
    VAR_5 = VAR_3.vdp_regs[6 / 2];
    while (VAR_10--) {
      VAR_8[VAR_5] = VAR_6;
      VAR_5 = (VAR_5 & 0xff00) | ((VAR_5 + 1) & 0xff);
    }
    VAR_3.vdp_regs[0x06 / 2] = VAR_5;
    VAR_3.vdp_regs[0x08 / 2] = VAR_6;
    if (VAR_7 != ((void*)0) && VAR_9 > 4) {
      VAR_3.vdp_regs[0x0a / 2] |= VAR_1;

      FUNC_0(VAR_7, VAR_2, 3 + VAR_9);
    }
    return;
  }

  FUNC_1(VAR_5 | 1, VAR_6);
}
