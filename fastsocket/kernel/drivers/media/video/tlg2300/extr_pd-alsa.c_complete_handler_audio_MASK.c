
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; scalar_t__ actual_length; struct poseidon_audio* context; } ;
struct snd_pcm_substream {int dummy; } ;
struct poseidon_audio {int card_close; scalar_t__ capture_stream; struct snd_pcm_substream* capture_pcm_substream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct urb*,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_2)
{
 struct poseidon_audio *VAR_3 = VAR_2->context;
 struct snd_pcm_substream *VAR_4 = VAR_3->capture_pcm_substream;
 int VAR_5 = 0;
 int VAR_6;

 if (1 == VAR_3->card_close || VAR_3->capture_stream != VAR_1)
  return;

 if (VAR_2->status != 0) {

   return;
 }

 if (VAR_4) {
  if (VAR_2->actual_length) {
   FUNC_0(VAR_2, &VAR_5);
   if (VAR_5)
    FUNC_2(VAR_4);
  }
 }

 VAR_6 = FUNC_3(VAR_2, VAR_0);
 if (VAR_6 < 0)
  FUNC_1("audio urb failed (errcod = %i)", VAR_6);
 return;
}
