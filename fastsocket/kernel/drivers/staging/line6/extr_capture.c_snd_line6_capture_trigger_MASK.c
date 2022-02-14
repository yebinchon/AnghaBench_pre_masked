
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_line6_pcm {int flags; scalar_t__ count_in; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int *) ;
 struct snd_line6_pcm* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct snd_line6_pcm*) ;

int FUNC_6(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_line6_pcm *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;
 VAR_4->count_in = 0;

 switch (VAR_3) {
 case 129:
  if (!FUNC_4(VAR_0, &VAR_4->flags)) {
   VAR_5 = FUNC_2(VAR_2);

   if (VAR_5 < 0) {
    FUNC_0(VAR_0, &VAR_4->flags);
    return VAR_5;
   }
  }

  break;

 case 128:
  if (FUNC_3(VAR_0, &VAR_4->flags))
   FUNC_5(VAR_4);

  break;

 default:
  return -VAR_1;
 }

 return 0;
}
