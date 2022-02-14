
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef enum dma_type { ____Placeholder_dma_type } dma_type ;
struct TYPE_4__ {size_t bank; } ;
struct TYPE_6__ {int* s68k_regs; int word_ram2M; int * word_ram1M; int prg_ram; TYPE_1__ pcm; int ** pcm_ram_b; } ;
struct TYPE_5__ {int dac; scalar_t__ ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (void*,scalar_t__,int) ;






__attribute__((used)) static void FUNC_3(enum dma_type VAR_4, int VAR_5)
{
 int VAR_6 = (VAR_2->s68k_regs[0x0a] << 8) | VAR_2->s68k_regs[0x0b];
  int VAR_7 = VAR_3.dac & 0x3ffe;
  int VAR_8 = VAR_6;
  int VAR_9 = VAR_5;
  int VAR_10 = 0;
  uint8 *VAR_11;
  int VAR_12;

  FUNC_0(VAR_1, "dma %d %04x->%04x %x",
    VAR_4, VAR_3.dac, VAR_8, VAR_5);

  switch (VAR_4)
  {
    case 132:
      VAR_8 = (VAR_8 << 2) & 0xffc;
      if (VAR_8 + VAR_9 * 2 > 0x1000) {
        FUNC_0(VAR_0, "pcm dma oflow: %x %x", VAR_8, VAR_9);
        VAR_9 = (0x1000 - VAR_8) / 2;
      }
      VAR_11 = VAR_2->pcm_ram_b[VAR_2->pcm.bank];
      VAR_11 = VAR_11 + VAR_8;
      while (VAR_9 > 0)
      {
        if (VAR_7 + VAR_9 * 2 > 0x4000) {
          VAR_12 = 0x4000 - VAR_7;
          FUNC_1(VAR_11, VAR_3.ram + VAR_7, VAR_12);
          VAR_11 += VAR_12;
          VAR_7 = 0;
          VAR_9 -= VAR_12 / 2;
          continue;
        }
        FUNC_1(VAR_11, VAR_3.ram + VAR_7, VAR_9 * 2);
        break;
      }
      goto update_dma;

    case 131:
      VAR_8 <<= 3;
    VAR_11 = VAR_2->prg_ram + VAR_8;
      VAR_10 = 0x80000;
      break;

    case 130:
      VAR_8 = (VAR_8 << 3) & 0x1fffe;
   VAR_11 = VAR_2->word_ram1M[0] + VAR_8;
      VAR_10 = 0x20000;
      break;

    case 129:
      VAR_8 = (VAR_8 << 3) & 0x1fffe;
   VAR_11 = VAR_2->word_ram1M[1] + VAR_8;
      VAR_10 = 0x20000;
      break;

    case 128:
      VAR_8 = (VAR_8 << 3) & 0x3fffe;
   VAR_11 = VAR_2->word_ram2M + VAR_8;
      VAR_10 = 0x40000;
      break;

    default:
      FUNC_0(VAR_0, "invalid dma: %d", VAR_4);
      goto update_dma;
  }

  if (VAR_8 + VAR_9 * 2 > VAR_10) {
    FUNC_0(VAR_0, "cd dma %d oflow: %x %x", VAR_4, VAR_8, VAR_9);
    VAR_9 = (VAR_10 - VAR_8) / 2;
  }
  while (VAR_9 > 0)
  {
    if (VAR_7 + VAR_9 * 2 > 0x4000) {
      VAR_12 = 0x4000 - VAR_7;
      FUNC_2((void *)VAR_11, VAR_3.ram + VAR_7, VAR_12 / 2);
      VAR_11 += VAR_12;
      VAR_7 = 0;
      VAR_9 -= VAR_12 / 2;
      continue;
    }
    FUNC_2((void *)VAR_11, VAR_3.ram + VAR_7, VAR_9);
    break;
  }

update_dma:

  VAR_3.dac += VAR_5 * 2;
  if (VAR_4 == 132)
    VAR_6 += VAR_5 >> 1;
  else
    VAR_6 += VAR_5 >> 2;

  VAR_2->s68k_regs[0x0a] = VAR_6 >> 8;
  VAR_2->s68k_regs[0x0b] = VAR_6;
}
