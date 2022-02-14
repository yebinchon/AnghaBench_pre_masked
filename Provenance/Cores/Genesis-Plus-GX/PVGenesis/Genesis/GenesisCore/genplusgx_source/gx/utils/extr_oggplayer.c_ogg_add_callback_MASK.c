
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; int pcm_indx; size_t pcmout_pos; scalar_t__* pcmout; } ;


 scalar_t__ FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
  if (!VAR_1)
  {
    FUNC_1(0);
    return;
  }

  if (VAR_3.flag & 128)
    return;

  if (VAR_3.pcm_indx >= VAR_0)
  {
    if (FUNC_0(0,
        (void *) VAR_3.pcmout[VAR_3.pcmout_pos],
        VAR_3.pcm_indx << 1) == 0)
    {
      VAR_3.pcmout_pos ^= 1;
      VAR_3.pcm_indx = 0;
      VAR_3.flag = 0;
      FUNC_2(VAR_2);
    }
  }
  else
  {
    if (VAR_3.flag & 64)
    {
      VAR_3.flag &= ~64;
      FUNC_2(VAR_2);
    }
  }
}
