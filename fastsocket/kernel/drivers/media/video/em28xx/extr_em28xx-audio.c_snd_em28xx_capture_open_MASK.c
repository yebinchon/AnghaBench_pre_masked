
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct em28xx* private_data; int hw; } ;
struct TYPE_2__ {scalar_t__ users; struct snd_pcm_substream* capture_pcm_substream; } ;
struct em28xx {int alt; int lock; TYPE_1__ adev; int udev; scalar_t__ mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct snd_pcm_runtime*,int ) ;
 struct em28xx* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_3)
{
 struct em28xx *VAR_4 = FUNC_6(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 int VAR_6 = 0;

 FUNC_0("opening device and trying to acquire exclusive lock\n");

 if (!VAR_4) {
  FUNC_2("BUG: em28xx can't find device struct."
    " Can't proceed with open\n");
  return -VAR_0;
 }



 VAR_4->mute = 0;
 FUNC_3(&VAR_4->lock);
 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  goto err;

 VAR_5->hw = VAR_2;
 if (VAR_4->alt == 0 && VAR_4->adev.users == 0) {
  int VAR_7;
  VAR_4->alt = 7;
  FUNC_0("changing alternate number to 7\n");
  VAR_7 = FUNC_7(VAR_4->udev, 0, 7);
 }

 VAR_4->adev.users++;
 FUNC_4(&VAR_4->lock);

 FUNC_5(VAR_5, VAR_1);
 VAR_4->adev.capture_pcm_substream = VAR_3;
 VAR_5->private_data = VAR_4;

 return 0;
err:
 FUNC_4(&VAR_4->lock);

 FUNC_2("Error while configuring em28xx mixer\n");
 return VAR_6;
}
