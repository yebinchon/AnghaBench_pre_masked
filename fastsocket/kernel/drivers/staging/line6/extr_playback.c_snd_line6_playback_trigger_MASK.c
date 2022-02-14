
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_line6_pcm {int flags; scalar_t__ count_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct snd_line6_pcm* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct snd_line6_pcm*) ;

int FUNC_7(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_line6_pcm *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;
 VAR_5->count_out = 0;

 switch (VAR_4) {
 case 129:
  if (!FUNC_5(VAR_1, &VAR_5->flags)) {
   VAR_6 = FUNC_3(VAR_3);

   if (VAR_6 < 0) {
    FUNC_0(VAR_1, &VAR_5->flags);
    return VAR_6;
   }
  }

  break;

 case 128:
  if (FUNC_4(VAR_1, &VAR_5->flags))
   FUNC_6(VAR_5);

  break;

 case 131:
  FUNC_1(VAR_0, &VAR_5->flags);
  break;

 case 130:
  FUNC_0(VAR_0, &VAR_5->flags);
  break;

 default:
  return -VAR_2;
 }

 return 0;
}
