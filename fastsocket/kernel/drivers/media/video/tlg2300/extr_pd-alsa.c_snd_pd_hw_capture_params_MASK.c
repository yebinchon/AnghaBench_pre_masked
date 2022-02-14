
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int dma_bytes; scalar_t__ dma_area; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_3->dma_area) {
  if (VAR_3->dma_bytes > VAR_4)
   return 0;
  FUNC_1(VAR_3->dma_area);
 }
 VAR_3->dma_area = FUNC_2(VAR_4);
 if (!VAR_3->dma_area)
  return -VAR_0;
 else
  VAR_3->dma_bytes = VAR_4;
 return 0;
}
