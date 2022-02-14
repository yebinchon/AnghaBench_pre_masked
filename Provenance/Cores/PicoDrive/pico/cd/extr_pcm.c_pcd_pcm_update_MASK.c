
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pcm_mixpos; int* pcm_mixbuf; scalar_t__ pcm_mixbuf_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(int *VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6, *VAR_7;
  int VAR_8 = 0;

  FUNC_2(FUNC_0());

  if (!VAR_2->pcm_mixbuf_dirty || !(VAR_1 & VAR_0))
    goto out;

  VAR_6 = (VAR_2->pcm_mixpos << 16) / VAR_4;
  VAR_7 = VAR_2->pcm_mixbuf;

  if (VAR_5) {
    while (VAR_4-- > 0) {
      *VAR_3++ += VAR_7[0];
      *VAR_3++ += VAR_7[1];

      VAR_8 += VAR_6;
      VAR_7 += (VAR_8 >> 16) * 2;
      VAR_8 &= 0xffff;
    }
  }
  else {
    while (VAR_4-- > 0) {

      *VAR_3++ += VAR_7[0];

      VAR_8 += VAR_6;
      VAR_7 += (VAR_8 >> 16) * 2;
      VAR_8 &= 0xffff;
    }
  }

  FUNC_1(VAR_2->pcm_mixbuf, 0,
    VAR_2->pcm_mixpos * 2 * sizeof(VAR_2->pcm_mixbuf[0]));

out:
  VAR_2->pcm_mixbuf_dirty = 0;
  VAR_2->pcm_mixpos = 0;
}
