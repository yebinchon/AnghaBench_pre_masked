
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cx231xx {int wq_trigger; int stream_started; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 struct cx231xx* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct cx231xx *VAR_1 = FUNC_4(VAR_0);

 FUNC_2("Stop capture, if needed\n");

 if (FUNC_0(&VAR_1->stream_started) > 0) {
  FUNC_1(&VAR_1->stream_started, 0);
  FUNC_3(&VAR_1->wq_trigger);
 }

 return 0;
}
