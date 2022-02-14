
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; struct poseidon* private_data; } ;
struct poseidon_audio {struct snd_pcm_substream* capture_pcm_substream; scalar_t__ card_close; int users; } ;
struct poseidon {int kref; int interface; struct poseidon_audio audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 struct poseidon* FUNC_2 (struct snd_pcm_substream*) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct poseidon *VAR_4 = FUNC_2(VAR_3);
 struct poseidon_audio *VAR_5 = &VAR_4->audio;
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;

 if (!VAR_4)
  return -VAR_0;
 VAR_5->users++;
 VAR_5->card_close = 0;
 VAR_5->capture_pcm_substream = VAR_3;
 VAR_6->private_data = VAR_4;

 VAR_6->hw = VAR_2;
 FUNC_1(VAR_6, VAR_1);
 FUNC_3(VAR_4->interface);
 FUNC_0(&VAR_4->kref);
 return 0;
}
