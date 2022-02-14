
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_cx18_card {scalar_t__ capture_transfer_done; scalar_t__ hwptr_done_capture; } ;


 struct snd_cx18_card* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_cx18_card *VAR_1 = FUNC_0(VAR_0);

 VAR_1->hwptr_done_capture = 0;
 VAR_1->capture_transfer_done = 0;

 return 0;
}
