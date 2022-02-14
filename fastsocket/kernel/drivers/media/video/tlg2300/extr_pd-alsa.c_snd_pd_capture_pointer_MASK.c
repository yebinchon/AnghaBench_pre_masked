
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct poseidon_audio {int rcv_position; } ;
struct poseidon {struct poseidon_audio audio; } ;
typedef int snd_pcm_uframes_t ;


 struct poseidon* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct poseidon *VAR_1 = FUNC_0(VAR_0);
 struct poseidon_audio *VAR_2 = &VAR_1->audio;
 return VAR_2->rcv_position;
}
