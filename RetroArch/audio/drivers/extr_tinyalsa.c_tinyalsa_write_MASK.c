
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int pcm; scalar_t__ nonblock; scalar_t__ has_float; int frame_bits; } ;
typedef TYPE_1__ tinyalsa_t ;
typedef int ssize_t ;
typedef int snd_pcm_sframes_t ;
typedef int int16_t ;


 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int const*,int) ;

__attribute__((used)) static ssize_t
FUNC_4(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
   tinyalsa_t *VAR_3 = (tinyalsa_t*)VAR_0;
   const uint8_t *VAR_4 = (const uint8_t*)VAR_1;
   snd_pcm_sframes_t VAR_5 = 0;
   snd_pcm_sframes_t VAR_6 = FUNC_0(VAR_2, VAR_3->frame_bits);
   size_t VAR_7 = VAR_3->has_float ? sizeof(float) : sizeof(int16_t);

   if (VAR_3->nonblock)
   {
      while (VAR_6)
      {
         snd_pcm_sframes_t VAR_8 = FUNC_3(VAR_3->pcm, VAR_4, VAR_6);

         if (VAR_8 < 0)
            FUNC_1(VAR_3->pcm);

         VAR_5 += VAR_8;
         VAR_4 += (VAR_8 << 1) * VAR_7;
         VAR_6 -= VAR_8;
      }
   }
   else
   {
      while (VAR_6)
      {
         snd_pcm_sframes_t VAR_9;
         FUNC_2(VAR_3->pcm, -1);

         VAR_9 = FUNC_3(VAR_3->pcm, VAR_4, VAR_6);

         if (VAR_9 < 0)
            return -1;

         VAR_5 += VAR_9;
         VAR_4 += (VAR_9 << 1) * VAR_7;
         VAR_6 -= VAR_9;
      }
   }

   return VAR_5;

}
