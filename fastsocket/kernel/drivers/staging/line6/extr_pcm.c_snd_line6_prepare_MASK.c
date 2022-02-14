
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_line6_pcm {scalar_t__ bytes_in; scalar_t__ pos_in_done; scalar_t__ bytes_out; scalar_t__ pos_out_done; scalar_t__ pos_out; int flags; } ;


 int VAR_0 ;
 struct snd_line6_pcm* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct snd_line6_pcm*) ;
 int FUNC_3 (struct snd_line6_pcm*) ;

int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_line6_pcm *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_0, &VAR_2->flags)) {
  FUNC_3(VAR_2);
  VAR_2->pos_out = 0;
  VAR_2->pos_out_done = 0;

  FUNC_2(VAR_2);
  VAR_2->bytes_out = 0;
  VAR_2->pos_in_done = 0;
  VAR_2->bytes_in = 0;
 }

 return 0;
}
