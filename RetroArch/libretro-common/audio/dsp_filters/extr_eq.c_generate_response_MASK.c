
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct eq_gain {float freq; float gain; } ;
struct TYPE_3__ {float real; float imag; } ;
typedef TYPE_1__ fft_complex_t ;



__attribute__((used)) static void FUNC_0(fft_complex_t *VAR_0,
      const struct eq_gain *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   unsigned VAR_4;

   float VAR_5 = 0.0f;
   float VAR_6 = 1.0f;

   float VAR_7 = 1.0f;
   float VAR_8 = 1.0f;

   if (VAR_2)
   {
      VAR_7 = VAR_1->freq;
      VAR_8 = VAR_1->gain;
      VAR_2--;
      VAR_1++;
   }



   for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++)
   {
      float VAR_9;
      float VAR_10 = 0.5f;
      float VAR_11 = (float)VAR_4 / VAR_3;

      while (VAR_11 >= VAR_7)
      {
         if (VAR_2)
         {
            VAR_5 = VAR_7;
            VAR_6 = VAR_8;
            VAR_7 = VAR_1->freq;
            VAR_8 = VAR_1->gain;

            VAR_1++;
            VAR_2--;
         }
         else
         {
            VAR_5 = VAR_7;
            VAR_6 = VAR_8;
            VAR_7 = 1.0f;
            VAR_8 = 1.0f;
            break;
         }
      }


      if (VAR_7 > VAR_5)
         VAR_10 = (VAR_11 - VAR_5) / (VAR_7 - VAR_5);
      VAR_9 = (1.0f - VAR_10) * VAR_6 + VAR_10 * VAR_8;

      VAR_0[VAR_4].real = VAR_9;
      VAR_0[VAR_4].imag = 0.0f;
      VAR_0[2 * VAR_3 - VAR_4].real = VAR_9;
      VAR_0[2 * VAR_3 - VAR_4].imag = 0.0f;
   }
}
