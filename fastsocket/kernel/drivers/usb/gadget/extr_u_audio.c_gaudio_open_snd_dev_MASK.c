
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_file {int * substream; } ;
struct gaudio_snd_dev {struct gaudio* card; int * substream; TYPE_1__* filp; } ;
struct gaudio {struct gaudio_snd_dev capture; struct gaudio_snd_dev playback; struct gaudio_snd_dev control; } ;
struct TYPE_3__ {struct snd_pcm_file* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct gaudio*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct gaudio_snd_dev*) ;

__attribute__((used)) static int FUNC_5(struct gaudio *VAR_7)
{
 struct snd_pcm_file *VAR_8;
 struct gaudio_snd_dev *VAR_9;

 if (!VAR_7)
  return -VAR_0;


 VAR_9 = &VAR_7->control;
 VAR_9->filp = FUNC_3(VAR_5, VAR_2, 0);
 if (FUNC_1(VAR_9->filp)) {
  int VAR_10 = FUNC_2(VAR_9->filp);
  FUNC_0(VAR_7, "unable to open sound control device file: %s\n",
    VAR_5);
  VAR_9->filp = ((void*)0);
  return VAR_10;
 }
 VAR_9->card = VAR_7;


 VAR_9 = &VAR_7->playback;
 VAR_9->filp = FUNC_3(VAR_6, VAR_3, 0);
 if (FUNC_1(VAR_9->filp)) {
  FUNC_0(VAR_7, "No such PCM playback device: %s\n", VAR_6);
  VAR_9->filp = ((void*)0);
 }
 VAR_8 = VAR_9->filp->private_data;
 VAR_9->substream = VAR_8->substream;
 VAR_9->card = VAR_7;
 FUNC_4(VAR_9);


 VAR_9 = &VAR_7->capture;
 VAR_9->filp = FUNC_3(VAR_4, VAR_1, 0);
 if (FUNC_1(VAR_9->filp)) {
  FUNC_0(VAR_7, "No such PCM capture device: %s\n", VAR_4);
  VAR_9->substream = ((void*)0);
  VAR_9->card = ((void*)0);
 } else {
  VAR_8 = VAR_9->filp->private_data;
  VAR_9->substream = VAR_8->substream;
  VAR_9->card = VAR_7;
 }

 return 0;
}
