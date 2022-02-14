
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_cx18_card {int slock; } ;
struct TYPE_2__ {int * dma_area; } ;


 int FUNC_0 (char*) ;
 struct snd_cx18_card* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_cx18_card *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->slock, VAR_2);
 if (VAR_0->runtime->dma_area) {
  FUNC_0("freeing pcm capture region\n");
  FUNC_4(VAR_0->runtime->dma_area);
  VAR_0->runtime->dma_area = ((void*)0);
 }
 FUNC_3(&VAR_1->slock, VAR_2);

 return 0;
}
