
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int vsram; int vram; int ram; int vramb; int cram; int zram; } ;
struct TYPE_9__ {int pal; int * dram; int sdram; } ;
struct TYPE_8__ {int* s68k_regs; int bram; int pcm_ram; int word_ram2M; int * word_ram1M; int prg_ram; } ;
struct TYPE_7__ {int data_array; } ;
struct TYPE_6__ {int data_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__* VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(void)
{
  FUNC_1(VAR_3.zram, "dumps/zram.bin");
  FUNC_0(VAR_3.cram, "dumps/cram.bin");

  if (VAR_5 & VAR_2)
  {
    FUNC_1(VAR_3.vramb, "dumps/vram.bin");
  }
  else
  {
    FUNC_0(VAR_3.ram, "dumps/ram.bin");
    FUNC_0(VAR_3.vram, "dumps/vram.bin");
    FUNC_0(VAR_3.vsram,"dumps/vsram.bin");
  }

  if (VAR_5 & VAR_1)
  {
    FUNC_0(VAR_6->prg_ram, "dumps/prg_ram.bin");
    if (VAR_6->s68k_regs[3]&4)
      FUNC_2(VAR_6->word_ram2M);
    FUNC_0(VAR_6->word_ram2M, "dumps/word_ram_2M.bin");
    FUNC_3(VAR_6->word_ram2M);
    FUNC_0(VAR_6->word_ram1M[0], "dumps/word_ram_1M_0.bin");
    FUNC_0(VAR_6->word_ram1M[1], "dumps/word_ram_1M_1.bin");
    if (!(VAR_6->s68k_regs[3]&4))
      FUNC_3(VAR_6->word_ram2M);
    FUNC_1(VAR_6->pcm_ram,"dumps/pcm_ram.bin");
    FUNC_1(VAR_6->bram, "dumps/bram.bin");
  }


  if (VAR_5 & VAR_0)
  {
    FUNC_0(VAR_4->sdram, "dumps/sdram.bin");
    FUNC_0(VAR_4->dram[0], "dumps/dram0.bin");
    FUNC_0(VAR_4->dram[1], "dumps/dram1.bin");
    FUNC_0(VAR_4->pal, "dumps/pal32x.bin");
    FUNC_0(VAR_7, "dumps/data_array0.bin");
    FUNC_0(VAR_8, "dumps/data_array1.bin");
  }

}
