
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct page {int dummy; } ;
struct TYPE_2__ {void* dma_area; } ;


 struct page* FUNC_0 (void*) ;

__attribute__((used)) static struct page *FUNC_1(struct snd_pcm_substream *VAR_0,
     unsigned long VAR_1)
{
 void *VAR_2 = VAR_0->runtime->dma_area + VAR_1;
 return FUNC_0(VAR_2);
}
