
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcm_chan {int addr; int* regs; } ;
struct TYPE_3__ {unsigned int update_cycles; int enabled; int control; struct pcm_chan* ch; } ;
struct TYPE_4__ {int pcm_mixpos; int* pcm_mixbuf; int pcm_mixbuf_dirty; int* pcm_ram; TYPE_1__ pcm; scalar_t__ pcm_regs_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_0(unsigned int VAR_3)
{
  unsigned int VAR_4 = VAR_2->pcm.update_cycles;
  int VAR_5, VAR_6, VAR_7, VAR_8;
  struct pcm_chan *VAR_9;
  unsigned int VAR_10;
  int VAR_11, VAR_12, VAR_13;
  int VAR_14;
  int *VAR_15;

  if ((int)(VAR_3 - VAR_4) < 384)
    return;

  VAR_13 = (VAR_3 - VAR_4) / 384;
  if (VAR_2->pcm_mixpos + VAR_13 > VAR_0)

    VAR_13 = VAR_0 - VAR_2->pcm_mixpos;


  VAR_14 = VAR_2->pcm.enabled;
  if (!(VAR_2->pcm.control & 0x80))
    VAR_14 = 0;
  if (!VAR_14 && !VAR_2->pcm_regs_dirty)
    goto end;

  VAR_15 = VAR_2->pcm_mixbuf + VAR_2->pcm_mixpos * 2;
  VAR_2->pcm_mixbuf_dirty = 1;
  VAR_2->pcm_regs_dirty = 0;

  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
  {
    VAR_9 = &VAR_2->pcm.ch[VAR_11];

    if (!(VAR_14 & (1 << VAR_11))) {
      VAR_9->addr = VAR_9->regs[6] << (VAR_1 + 8);
      continue;
    }

    VAR_10 = VAR_9->addr;
    VAR_7 = *(unsigned short *)&VAR_9->regs[2];
    VAR_5 = ((int)VAR_9->regs[0] * (VAR_9->regs[1] & 0xf)) >> (5+1);
    VAR_6 = ((int)VAR_9->regs[0] * (VAR_9->regs[1] >> 4)) >> (5+1);

    for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++, VAR_10 = (VAR_10 + VAR_7) & 0x7FFFFFF)
    {
      VAR_8 = VAR_2->pcm_ram[VAR_10 >> VAR_1];


      if (VAR_8 == 0xff)
      {
        VAR_10 = *(unsigned short *)&VAR_9->regs[4];
        VAR_8 = VAR_2->pcm_ram[VAR_10];
        VAR_10 <<= VAR_1;
        if (VAR_8 == 0xff)
          break;
      }

      if (VAR_8 & 0x80)
        VAR_8 = -(VAR_8 & 0x7f);

      VAR_15[VAR_12*2 ] += VAR_8 * VAR_5;
      VAR_15[VAR_12*2+1] += VAR_8 * VAR_6;
    }
    VAR_9->addr = VAR_10;
  }

end:
  VAR_2->pcm.update_cycles = VAR_4 + VAR_13 * 384;
  VAR_2->pcm_mixpos += VAR_13;
}
