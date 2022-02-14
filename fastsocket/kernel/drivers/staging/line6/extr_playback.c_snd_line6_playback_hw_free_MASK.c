
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_line6_pcm {int * wrap_out; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_line6_pcm* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_line6_pcm*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_line6_pcm *VAR_1 = FUNC_2(VAR_0);
 FUNC_3(VAR_1);

 FUNC_0(VAR_1->wrap_out);
 VAR_1->wrap_out = ((void*)0);

 return FUNC_1(VAR_0);
}
