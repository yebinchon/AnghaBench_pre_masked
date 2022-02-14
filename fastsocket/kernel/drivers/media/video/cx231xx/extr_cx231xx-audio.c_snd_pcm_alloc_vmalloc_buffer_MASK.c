
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t dma_bytes; scalar_t__ dma_area; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
     size_t VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;

 FUNC_0("Allocating vbuffer\n");
 if (VAR_3->dma_area) {
  if (VAR_3->dma_bytes > VAR_2)
   return 0;

  FUNC_1(VAR_3->dma_area);
 }
 VAR_3->dma_area = FUNC_2(VAR_2);
 if (!VAR_3->dma_area)
  return -VAR_0;

 VAR_3->dma_bytes = VAR_2;

 return 0;
}
