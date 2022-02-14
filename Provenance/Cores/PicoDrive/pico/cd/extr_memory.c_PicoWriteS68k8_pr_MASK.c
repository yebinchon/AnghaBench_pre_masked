
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {size_t bank; } ;
struct TYPE_4__ {int** pcm_ram_b; TYPE_1__ pcm; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(u32 VAR_3, u32 VAR_4)
{

  if ((VAR_3 & 0xfe00) == 0x8000) {
    VAR_3 &= 0x1ff;
    FUNC_0(VAR_0, "s68k_regs w8: [%02x] %02x @%06x", VAR_3, VAR_4, VAR_2);
    if (0x59 <= VAR_3 && VAR_3 < 0x68)
      FUNC_2(VAR_3 & ~1, (VAR_4 << 8) | VAR_4);
    else
      FUNC_3(VAR_3, VAR_4);
    return;
  }


  if ((VAR_3 & 0x8000) == 0x0000) {
    VAR_3 &= 0x7fff;
    if (VAR_3 >= 0x2000)
      VAR_1->pcm_ram_b[VAR_1->pcm.bank][(VAR_3>>1)&0xfff] = VAR_4;
    else if (VAR_3 < 0x12)
      FUNC_1(VAR_3>>1, VAR_4);
    return;
  }

  FUNC_4(VAR_3, VAR_4);
}
