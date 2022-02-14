
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct go7007 {int audio_deliver; } ;
struct TYPE_2__ {unsigned int dma_bytes; int * dma_area; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int VAR_1 ;
 struct go7007* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_hw_params *VAR_3)
{
 struct go7007 *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_2->runtime->dma_bytes > 0)
  FUNC_2(VAR_2->runtime->dma_area);
 VAR_2->runtime->dma_bytes = 0;
 VAR_2->runtime->dma_area = FUNC_3(VAR_5);
 if (VAR_2->runtime->dma_area == ((void*)0))
  return -VAR_0;
 VAR_2->runtime->dma_bytes = VAR_5;
 VAR_4->audio_deliver = VAR_1;
 return 0;
}
