
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int slock; } ;
struct cx231xx {int wq_trigger; TYPE_1__ adev; int stream_started; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct cx231xx* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
           int VAR_2)
{
 struct cx231xx *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 FUNC_3(&VAR_3->adev.slock);
 switch (VAR_2) {
 case 129:
  FUNC_0(&VAR_3->stream_started, 1);
  break;
 case 128:
  FUNC_0(&VAR_3->stream_started, 0);
  break;
 default:
  VAR_4 = -VAR_0;
 }
 FUNC_4(&VAR_3->adev.slock);

 FUNC_1(&VAR_3->wq_trigger);

 return 0;
}
