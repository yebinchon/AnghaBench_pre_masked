
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct cx231xx* private_data; int hw; } ;
struct TYPE_2__ {struct snd_pcm_substream* capture_pcm_substream; int users; } ;
struct cx231xx {TYPE_1__ adev; int lock; scalar_t__ USE_ISO; scalar_t__ mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct cx231xx*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 (struct snd_pcm_runtime*,int ) ;
 struct cx231xx* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5)
{
 struct cx231xx *VAR_6 = FUNC_7(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 int VAR_8 = 0;

 FUNC_3("opening device and trying to acquire exclusive lock\n");

 if (!VAR_6) {
  FUNC_1("BUG: cx231xx can't find device struct."
          " Can't proceed with open\n");
  return -VAR_1;
 }


 VAR_6->mute = 0;



 FUNC_4(&VAR_6->lock);
 if (VAR_6->USE_ISO)
  VAR_8 = FUNC_2(VAR_6, VAR_2, 1);
 else
  VAR_8 = FUNC_2(VAR_6, VAR_2, 0);
 FUNC_5(&VAR_6->lock);
 if (VAR_8 < 0) {
  FUNC_1("failed to set alternate setting !\n");

  return VAR_8;
 }

 VAR_7->hw = VAR_4;

 FUNC_4(&VAR_6->lock);

 VAR_8 = FUNC_0(VAR_6, 1, VAR_0);

 VAR_6->adev.users++;
 FUNC_5(&VAR_6->lock);

 FUNC_6(VAR_7, VAR_3);
 VAR_6->adev.capture_pcm_substream = VAR_5;
 VAR_7->private_data = VAR_6;

 return 0;
}
