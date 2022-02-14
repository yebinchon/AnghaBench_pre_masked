
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int dummy; } ;
struct snd_line6_pcm {scalar_t__* urb_audio_in; scalar_t__* urb_audio_out; } ;


 int VAR_0 ;
 struct snd_line6_pcm* FUNC_0 (struct snd_pcm*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm *VAR_1)
{
 int VAR_2;
 struct snd_line6_pcm *VAR_3 = FUNC_0(VAR_1);

 for (VAR_2 = VAR_0; VAR_2--;) {
  if (VAR_3->urb_audio_out[VAR_2]) {
   FUNC_2(VAR_3->urb_audio_out[VAR_2]);
   FUNC_1(VAR_3->urb_audio_out[VAR_2]);
  }
  if (VAR_3->urb_audio_in[VAR_2]) {
   FUNC_2(VAR_3->urb_audio_in[VAR_2]);
   FUNC_1(VAR_3->urb_audio_in[VAR_2]);
  }
 }
}
