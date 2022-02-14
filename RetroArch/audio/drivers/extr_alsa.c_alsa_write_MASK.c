
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
typedef int snd_pcm_sframes_t ;
typedef int int16_t ;
struct TYPE_3__ {int pcm; scalar_t__ nonblock; scalar_t__ is_paused; scalar_t__ has_float; int frame_bits; } ;
typedef TYPE_1__ alsa_t ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int const*,int) ;

__attribute__((used)) static ssize_t FUNC_5(void *VAR_4, const void *VAR_5, size_t VAR_6)
{
   alsa_t *VAR_7 = (alsa_t*)VAR_4;
   const uint8_t *VAR_8 = (const uint8_t*)VAR_5;
   snd_pcm_sframes_t VAR_9 = 0;
   snd_pcm_sframes_t VAR_10 = FUNC_0(VAR_6, VAR_7->frame_bits);
   size_t VAR_11 = VAR_7->has_float ? sizeof(float) : sizeof(int16_t);



   if (VAR_7->is_paused)
      if (!FUNC_1(VAR_7, 0))
         return -1;

   if (VAR_7->nonblock)
   {
      while (VAR_10)
      {
         snd_pcm_sframes_t VAR_12 = FUNC_4(VAR_7->pcm, VAR_8, VAR_10);

         if (VAR_12 == -VAR_2 || VAR_12 == -VAR_1 || VAR_12 == -VAR_3)
         {
            if (FUNC_2(VAR_7->pcm, VAR_12, 1) < 0)
               return -1;

            break;
         }
         else if (VAR_12 == -VAR_0)
            break;
         else if (VAR_12 < 0)
            return -1;

         VAR_9 += VAR_12;
         VAR_8 += (VAR_12 << 1) * VAR_11;
         VAR_10 -= VAR_12;
      }
   }
   else
   {
      bool VAR_13 = 1;

      while (VAR_10)
      {
         snd_pcm_sframes_t VAR_14;
         int VAR_15 = FUNC_3(VAR_7->pcm, -1);

         if (VAR_15 == -VAR_2 || VAR_15 == -VAR_3 || VAR_15 == -VAR_1)
         {
            if (FUNC_2(VAR_7->pcm, VAR_15, 1) < 0)
               return -1;
            continue;
         }

         VAR_14 = FUNC_4(VAR_7->pcm, VAR_8, VAR_10);

         if (VAR_14 == -VAR_2 || VAR_14 == -VAR_1 || VAR_14 == -VAR_3)
         {
            if (FUNC_2(VAR_7->pcm, VAR_14, 1) < 0)
               return -1;

            break;
         }
         else if (VAR_14 == -VAR_0)
         {

            if (VAR_13)
            {
               VAR_13 = 0;
               continue;
            }
            break;
         }
         else if (VAR_14 < 0)
            return -1;

         VAR_9 += VAR_14;
         VAR_8 += (VAR_14 << 1) * VAR_11;
         VAR_10 -= VAR_14;
      }
   }

   return VAR_9;
}
