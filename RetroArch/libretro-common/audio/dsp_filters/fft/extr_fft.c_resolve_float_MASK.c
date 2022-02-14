
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float real; } ;
typedef TYPE_1__ fft_complex_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const fft_complex_t *VAR_1, unsigned VAR_2,
      float VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_1++, VAR_0 += VAR_4)
      *VAR_0 = VAR_3 * VAR_1->real;
}
