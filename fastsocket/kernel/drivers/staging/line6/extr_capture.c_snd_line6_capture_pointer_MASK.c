
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_line6_pcm {int pos_in_done; } ;
typedef int snd_pcm_uframes_t ;


 struct snd_line6_pcm* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_line6_pcm *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->pos_in_done;
}
