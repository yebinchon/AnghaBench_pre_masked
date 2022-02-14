
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int size; scalar_t__ phase_lut; int bitinverse_buffer; } ;
typedef TYPE_1__ fft_t ;
typedef int fft_complex_t ;


 int FUNC_0 (int *,scalar_t__,int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int *,float const*,unsigned int,unsigned int) ;

void FUNC_2(fft_t *VAR_0,
      fft_complex_t *VAR_1, const float *VAR_2, unsigned VAR_3)
{
   unsigned VAR_4;
   unsigned VAR_5 = VAR_0->size;
   FUNC_1(VAR_0->bitinverse_buffer, VAR_1, VAR_2, VAR_5, VAR_3);

   for (VAR_4 = 1; VAR_4 < VAR_0->size; VAR_4 <<= 1)
   {
      FUNC_0(VAR_1,
            VAR_0->phase_lut + VAR_5,
            -1, VAR_4, VAR_5);
   }
}
