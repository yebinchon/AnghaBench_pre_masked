
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int bitspersample; int numchannels; size_t numsamples; scalar_t__ samples; } ;
typedef TYPE_1__ rwav_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (int,size_t) ;

__attribute__((used)) static bool FUNC_1(const rwav_t* VAR_0, float** VAR_1, size_t VAR_2)
{
   size_t VAR_3;

   float *VAR_4 = (float*)FUNC_0(16,
         ((VAR_2 + 15) & ~15) * sizeof(float));

   if (!VAR_4)
      return 0;

   *VAR_1 = VAR_4;

   if (VAR_0->bitspersample == 8)
   {
      float VAR_5 = 0.0f;
      const uint8_t *VAR_6 = (const uint8_t*)VAR_0->samples;

      if (VAR_0->numchannels == 1)
      {
         for (VAR_3 = VAR_0->numsamples; VAR_3 != 0; VAR_3--)
         {
            VAR_5 = (float)*VAR_6++ / 255.0f;
            VAR_5 = VAR_5 * 2.0f - 1.0f;
            *VAR_4++ = VAR_5;
            *VAR_4++ = VAR_5;
         }
      }
      else if (VAR_0->numchannels == 2)
      {
         for (VAR_3 = VAR_0->numsamples; VAR_3 != 0; VAR_3--)
         {
            VAR_5 = (float)*VAR_6++ / 255.0f;
            VAR_5 = VAR_5 * 2.0f - 1.0f;
            *VAR_4++ = VAR_5;
            VAR_5 = (float)*VAR_6++ / 255.0f;
            VAR_5 = VAR_5 * 2.0f - 1.0f;
            *VAR_4++ = VAR_5;
         }
      }
   }
   else
   {



      float VAR_7 = 0.0f;
      const int16_t *VAR_8 = (const int16_t*)VAR_0->samples;

      if (VAR_0->numchannels == 1)
      {
         for (VAR_3 = VAR_0->numsamples; VAR_3 != 0; VAR_3--)
         {
            VAR_7 = (float)((int)*VAR_8++ + 32768) / 65535.0f;
            VAR_7 = VAR_7 * 2.0f - 1.0f;
            *VAR_4++ = VAR_7;
            *VAR_4++ = VAR_7;
         }
      }
      else if (VAR_0->numchannels == 2)
      {
         for (VAR_3 = VAR_0->numsamples; VAR_3 != 0; VAR_3--)
         {
            VAR_7 = (float)((int)*VAR_8++ + 32768) / 65535.0f;
            VAR_7 = VAR_7 * 2.0f - 1.0f;
            *VAR_4++ = VAR_7;
            VAR_7 = (float)((int)*VAR_8++ + 32768) / 65535.0f;
            VAR_7 = VAR_7 * 2.0f - 1.0f;
            *VAR_4++ = VAR_7;
         }
      }
   }

   return 1;
}
