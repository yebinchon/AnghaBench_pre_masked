
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct go7007 {int * audio_deliver; } ;
struct TYPE_2__ {scalar_t__ dma_bytes; int dma_area; } ;


 struct go7007* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct go7007 *VAR_1 = FUNC_0(VAR_0);

 VAR_1->audio_deliver = ((void*)0);
 if (VAR_0->runtime->dma_bytes > 0)
  FUNC_1(VAR_0->runtime->dma_area);
 VAR_0->runtime->dma_bytes = 0;
 return 0;
}
