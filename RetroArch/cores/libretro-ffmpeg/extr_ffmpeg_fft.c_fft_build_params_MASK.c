
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vec2_t ;
typedef int fft_t ;
struct TYPE_3__ {int imag; int real; } ;
typedef TYPE_1__ fft_complex_t ;
typedef unsigned int GLuint ;


 float VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 TYPE_1__ FUNC_1 (float) ;
 unsigned int FUNC_2 (int ,int ) ;

void FUNC_3(fft_t *VAR_1, GLuint *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5, VAR_6;
   unsigned VAR_7 = 1 << VAR_3;

   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_7 << 1)
   {
      for (VAR_6 = VAR_5; VAR_6 < VAR_5 + VAR_7; VAR_6++)
      {
         vec2_t VAR_8;
         int VAR_9 = VAR_6 - VAR_5;
         float VAR_10 = -1.0f * (float)VAR_9 / VAR_7;
         unsigned VAR_11 = VAR_6;
         unsigned VAR_12 = VAR_6 + VAR_7;
         fft_complex_t VAR_13 = FUNC_1(VAR_0 * VAR_10);

         unsigned VAR_14 = (VAR_3 == 0) ? FUNC_0(VAR_11, VAR_4) : VAR_11;
         unsigned VAR_15 = (VAR_3 == 0) ? FUNC_0(VAR_12, VAR_4) : VAR_12;

         VAR_8[0] = VAR_13.real;
         VAR_8[1] = VAR_13.imag;

         VAR_2[2 * VAR_11 + 0] = (VAR_14 << 16) | VAR_15;
         VAR_2[2 * VAR_11 + 1] = FUNC_2(VAR_8[0], VAR_8[1]);
         VAR_2[2 * VAR_12 + 0] = (VAR_14 << 16) | VAR_15;
         VAR_2[2 * VAR_12 + 1] = FUNC_2(-VAR_8[0], -VAR_8[1]);
      }
   }
}
