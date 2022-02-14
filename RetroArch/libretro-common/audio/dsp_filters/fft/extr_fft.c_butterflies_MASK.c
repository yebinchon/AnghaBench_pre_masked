
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fft_complex_t ;


 int FUNC_0 (int *,int *,int const) ;

__attribute__((used)) static void FUNC_1(fft_complex_t *VAR_0,
      const fft_complex_t *VAR_1,
      int VAR_2, unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5, VAR_6;
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5 += VAR_3 << 1)
   {
      int VAR_7 = (int)VAR_4 * VAR_2 / (int)VAR_3;
      for (VAR_6 = VAR_5; VAR_6 < VAR_5 + VAR_3; VAR_6++)
         FUNC_0(&VAR_0[VAR_6], &VAR_0[VAR_6 + VAR_3],
               VAR_1[VAR_7 * (int)(VAR_6 - VAR_5)]);
   }
}
