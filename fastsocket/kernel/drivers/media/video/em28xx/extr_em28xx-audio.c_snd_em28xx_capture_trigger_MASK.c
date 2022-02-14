
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct em28xx {int wq_trigger; int stream_started; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct em28xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
          int VAR_2)
{
 struct em28xx *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 switch (VAR_2) {
 case 129:
  FUNC_0(&VAR_3->stream_started, 1);
  break;
 case 128:
  FUNC_0(&VAR_3->stream_started, 1);
  break;
 default:
  VAR_4 = -VAR_0;
 }
 FUNC_1(&VAR_3->wq_trigger);
 return 0;
}
