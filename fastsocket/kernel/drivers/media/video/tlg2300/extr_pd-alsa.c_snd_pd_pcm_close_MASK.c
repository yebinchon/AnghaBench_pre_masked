
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct poseidon_audio {int card_close; int users; } ;
struct poseidon {int kref; int interface; struct poseidon_audio audio; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct poseidon* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct poseidon *VAR_2 = FUNC_1(VAR_1);
 struct poseidon_audio *VAR_3 = &VAR_2->audio;

 VAR_3->users--;
 VAR_3->card_close = 1;
 FUNC_2(VAR_2->interface);
 FUNC_0(&VAR_2->kref, VAR_0);
 return 0;
}
