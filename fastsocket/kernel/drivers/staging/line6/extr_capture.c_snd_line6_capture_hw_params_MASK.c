
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; int * private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_line6_pcm {int buffer_in; int period_in; } ;
struct TYPE_2__ {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_line6_pcm* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5,
           struct snd_pcm_hw_params *VAR_6)
{
 int VAR_7;
 struct snd_line6_pcm *VAR_8 = FUNC_6(VAR_5);



 if (VAR_8 == ((void*)0)) {
  if (VAR_5->pcm == ((void*)0))
   return -VAR_0;
  if (VAR_5->pcm->private_data == ((void*)0))
   return -VAR_0;
  VAR_5->private_data = VAR_5->pcm->private_data;
  VAR_8 = FUNC_6(VAR_5);
 }


 VAR_7 = FUNC_5(VAR_5,
           FUNC_2(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_8->period_in = FUNC_3(VAR_6);
 VAR_8->buffer_in = FUNC_1(VAR_2 * VAR_3 * VAR_4, VAR_1);

 if (!VAR_8->buffer_in) {
  FUNC_0(FUNC_4(VAR_5), "cannot malloc buffer_in\n");
  return -VAR_0;
 }

 return 0;
}
