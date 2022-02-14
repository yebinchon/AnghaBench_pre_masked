
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int update_cycles; } ;
struct TYPE_4__ {int pcm_regs_dirty; int* s68k_regs; TYPE_1__ pcm; scalar_t__ pcm_mixpos; scalar_t__ pcm_mixbuf_dirty; int pcm_mixbuf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,size_t,int) ;
 scalar_t__* VAR_7 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void)
{
  unsigned int VAR_8;
  int VAR_9;

  FUNC_4();
  FUNC_5();

  FUNC_0(VAR_2->pcm_mixbuf, 0, sizeof(VAR_2->pcm_mixbuf));
  VAR_2->pcm_mixbuf_dirty = 0;
  VAR_2->pcm_mixpos = 0;
  VAR_2->pcm_regs_dirty = 1;


  VAR_8 = FUNC_1(VAR_3);
  VAR_9 = VAR_8 - VAR_4;
  if (VAR_9 < -1000 || VAR_9 > 1000) {
    VAR_5 = VAR_4 = VAR_8;
  }
  if (VAR_7[VAR_0] == 0) {
    FUNC_2(VAR_4, VAR_0, 12500000/75);

    if (VAR_2->s68k_regs[0x31])
      FUNC_2(VAR_4, VAR_1,
        VAR_2->s68k_regs[0x31] * 384);
  }

  VAR_9 = VAR_8 - VAR_2->pcm.update_cycles;
  if ((unsigned int)VAR_9 > 12500000/50)
    VAR_2->pcm.update_cycles = VAR_8;


  VAR_6 = 0;
  FUNC_3(VAR_5);
}
