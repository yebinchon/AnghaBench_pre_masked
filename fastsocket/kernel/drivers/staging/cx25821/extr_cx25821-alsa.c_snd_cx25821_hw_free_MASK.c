
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
typedef int snd_cx25821_card_t ;
struct TYPE_2__ {int * dma_area; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 snd_cx25821_card_t *VAR_1 = FUNC_1(VAR_0);

 if (VAR_0->runtime->dma_area) {
  FUNC_0(VAR_1);
  VAR_0->runtime->dma_area = ((void*)0);
 }

 return 0;
}
