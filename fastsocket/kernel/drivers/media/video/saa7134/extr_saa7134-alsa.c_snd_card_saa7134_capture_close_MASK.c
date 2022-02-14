
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct saa7134_dev {int ctl_mute; } ;
struct TYPE_3__ {scalar_t__ mute_was_on; struct saa7134_dev* dev; } ;
typedef TYPE_1__ snd_card_saa7134_t ;


 int FUNC_0 (struct saa7134_dev*) ;
 TYPE_1__* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream * VAR_0)
{
 snd_card_saa7134_t *VAR_1 = FUNC_1(VAR_0);
 struct saa7134_dev *VAR_2 = VAR_1->dev;

 if (VAR_1->mute_was_on) {
  VAR_2->ctl_mute = 1;
  FUNC_0(VAR_2);
 }
 return 0;
}
