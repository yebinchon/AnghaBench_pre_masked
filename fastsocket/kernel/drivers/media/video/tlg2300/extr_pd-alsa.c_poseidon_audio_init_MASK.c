
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int name; struct poseidon* private_data; scalar_t__ info_flags; } ;
struct snd_card {int longname; int shortname; int driver; } ;
struct poseidon_audio {struct snd_card* card; } ;
struct poseidon {struct poseidon_audio audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ,int ,struct snd_card**) ;
 int FUNC_1 (struct snd_card*) ;
 scalar_t__ FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct snd_card*,char*,int ,int ,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct poseidon *VAR_4)
{
 struct poseidon_audio *VAR_5 = &VAR_4->audio;
 struct snd_card *VAR_6;
 struct snd_pcm *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(-1, "Telegent", VAR_2, 0, &VAR_6);
 if (VAR_8 != 0)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_6, "poseidon audio", 0, 0, 1, &VAR_7);
 FUNC_4(VAR_7, VAR_1, &VAR_3);
 VAR_7->info_flags = 0;
 VAR_7->private_data = VAR_4;
 FUNC_5(VAR_7->name, "poseidon audio capture");

 FUNC_5(VAR_6->driver, "ALSA driver");
 FUNC_5(VAR_6->shortname, "poseidon Audio");
 FUNC_5(VAR_6->longname, "poseidon ALSA Audio");

 if (FUNC_2(VAR_6)) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 VAR_5->card = VAR_6;
 return 0;
}
