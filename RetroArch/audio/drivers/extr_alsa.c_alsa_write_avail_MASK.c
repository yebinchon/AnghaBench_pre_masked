
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ snd_pcm_sframes_t ;
struct TYPE_2__ {size_t buffer_size; int frame_bits; int pcm; } ;
typedef TYPE_1__ alsa_t ;


 size_t FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_0)
{
   alsa_t *VAR_1 = (alsa_t*)VAR_0;
   snd_pcm_sframes_t VAR_2 = FUNC_1(VAR_1->pcm);

   if (VAR_2 < 0)
      return VAR_1->buffer_size;

   return FUNC_0(VAR_2, VAR_1->frame_bits);
}
