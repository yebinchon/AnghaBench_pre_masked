
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_3__ {int users; } ;
struct em28xx {int mute; int lock; int wq_trigger; int stream_started; TYPE_1__ adev; } ;
struct TYPE_4__ {int * dma_area; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct em28xx* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_0)
{
 struct em28xx *VAR_1 = FUNC_7(VAR_0);

 FUNC_2("closing device\n");

 VAR_1->mute = 1;
 FUNC_4(&VAR_1->lock);
 VAR_1->adev.users--;
 if (FUNC_0(&VAR_1->stream_started) > 0) {
  FUNC_1(&VAR_1->stream_started, 0);
  FUNC_6(&VAR_1->wq_trigger);
 }

 FUNC_3(VAR_1);
 if (VAR_0->runtime->dma_area) {
  FUNC_2("freeing\n");
  FUNC_8(VAR_0->runtime->dma_area);
  VAR_0->runtime->dma_area = ((void*)0);
 }
 FUNC_5(&VAR_1->lock);

 return 0;
}
