
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int dummy; } ;
struct snd_line6_pcm {struct urb** urb_audio_in; int unlink_urb_in; int active_urb_in; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 scalar_t__ FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct snd_line6_pcm *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = VAR_0; VAR_2--;) {
  if (FUNC_1(VAR_2, &VAR_1->active_urb_in)) {
   if (!FUNC_0(VAR_2, &VAR_1->unlink_urb_in)) {
    struct urb *VAR_3 = VAR_1->urb_audio_in[VAR_2];
    FUNC_2(VAR_3);
   }
  }
 }
}
