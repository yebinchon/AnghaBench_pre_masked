
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fft_complex_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(fft_complex_t *VAR_1, int VAR_2)
{
   int VAR_3;
   VAR_1 += VAR_2;
   for (VAR_3 = -VAR_2; VAR_3 <= VAR_2; VAR_3++)
      VAR_1[VAR_3] = FUNC_0((VAR_0 * VAR_3) / VAR_2);
}
