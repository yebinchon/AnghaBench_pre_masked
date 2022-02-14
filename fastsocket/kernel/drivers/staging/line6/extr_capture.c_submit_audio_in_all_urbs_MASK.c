
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
 }

 return 0;
}
