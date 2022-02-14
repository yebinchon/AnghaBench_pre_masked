
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int update_cycles; size_t cur_ch; unsigned int bank; unsigned int control; unsigned int enabled; TYPE_1__* ch; } ;
struct TYPE_6__ {int pcm_regs_dirty; TYPE_2__ pcm; } ;
struct TYPE_4__ {unsigned int* regs; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (unsigned int) ;

void FUNC_3(unsigned int VAR_2, unsigned int VAR_3)
{
  unsigned int VAR_4 = FUNC_0();
  if ((int)(VAR_4 - VAR_1->pcm.update_cycles) >= 384)
    FUNC_2(VAR_4);

  if (VAR_2 < 7)
  {
    VAR_1->pcm.ch[VAR_1->pcm.cur_ch].regs[VAR_2] = VAR_3;
  }
  else if (VAR_2 == 7)
  {
    if (VAR_3 & 0x40)
      VAR_1->pcm.cur_ch = VAR_3 & 7;
    else
      VAR_1->pcm.bank = VAR_3 & 0xf;
    VAR_1->pcm.control = VAR_3;
    FUNC_1(VAR_0, "pcm control %02x", VAR_1->pcm.control);
  }
  else if (VAR_2 == 8)
  {
    VAR_1->pcm.enabled = ~VAR_3;
  }
  VAR_1->pcm_regs_dirty = 1;
}
