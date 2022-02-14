
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ users; int shutdown; } ;
struct cx231xx {int mute; int wq_trigger; int stream_started; TYPE_1__ adev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cx231xx*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cx231xx*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct cx231xx* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_2)
{
 int VAR_3;
 struct cx231xx *VAR_4 = FUNC_9(VAR_2);

 FUNC_5("closing device\n");


 FUNC_6(&VAR_4->lock);
 VAR_3 = FUNC_2(VAR_4, 0, VAR_0);



 VAR_3 = FUNC_4(VAR_4, VAR_1, 0);
 if (VAR_3 < 0) {
  FUNC_3("failed to set alternate setting !\n");

  FUNC_7(&VAR_4->lock);
  return VAR_3;
 }

 VAR_4->mute = 1;
 VAR_4->adev.users--;
 FUNC_7(&VAR_4->lock);

 if (VAR_4->adev.users == 0 && VAR_4->adev.shutdown == 1) {
  FUNC_5("audio users: %d\n", VAR_4->adev.users);
  FUNC_5("disabling audio stream!\n");
  VAR_4->adev.shutdown = 0;
  FUNC_5("released lock\n");
  if (FUNC_0(&VAR_4->stream_started) > 0) {
   FUNC_1(&VAR_4->stream_started, 0);
   FUNC_8(&VAR_4->wq_trigger);
  }
 }
 return 0;
}
