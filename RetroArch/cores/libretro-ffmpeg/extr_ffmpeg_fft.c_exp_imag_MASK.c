
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int imag; int real; } ;
typedef TYPE_1__ fft_complex_t ;


 int FUNC_0 (float) ;
 int FUNC_1 (float) ;

__attribute__((used)) static fft_complex_t FUNC_2(float VAR_0)
{
   fft_complex_t VAR_1;
   VAR_1.real = FUNC_0(VAR_0);
   VAR_1.imag = FUNC_1(VAR_0);
   return VAR_1;
}
