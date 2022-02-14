
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fft_complex_t ;



__attribute__((used)) static void FUNC_0(const unsigned *VAR_0,
      fft_complex_t *VAR_1, const fft_complex_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_2 += VAR_4)
      VAR_1[VAR_0[VAR_5]] = *VAR_2;
}
