
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_5__ {int reg_lock; } ;
typedef TYPE_1__ snd_cx25821_card_t ;


 int VAR_0 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
        int VAR_2)
{
 snd_cx25821_card_t *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0;


 FUNC_3(&VAR_3->reg_lock);

 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_0(VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 FUNC_4(&VAR_3->reg_lock);

 return VAR_4;
}
