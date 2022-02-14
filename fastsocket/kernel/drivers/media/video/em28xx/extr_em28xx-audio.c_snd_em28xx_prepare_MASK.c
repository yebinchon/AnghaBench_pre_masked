
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ capture_transfer_done; scalar_t__ hwptr_done_capture; } ;
struct em28xx {TYPE_1__ adev; } ;


 struct em28xx* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct em28xx *VAR_1 = FUNC_0(VAR_0);

 VAR_1->adev.hwptr_done_capture = 0;
 VAR_1->adev.capture_transfer_done = 0;

 return 0;
}
