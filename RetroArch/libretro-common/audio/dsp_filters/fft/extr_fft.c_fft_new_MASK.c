
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* bitinverse_buffer; unsigned int size; int * phase_lut; int * interleave_buffer; } ;
typedef TYPE_1__ fft_t ;
typedef int fft_complex_t ;


 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;

fft_t *FUNC_4(unsigned VAR_0)
{
   unsigned VAR_1;
   fft_t *VAR_2 = (fft_t*)FUNC_2(1, sizeof(*VAR_2));
   if (!VAR_2)
      return ((void*)0);

   VAR_1 = 1 << VAR_0;
   VAR_2->interleave_buffer = (fft_complex_t*)FUNC_2(VAR_1, sizeof(*VAR_2->interleave_buffer));
   VAR_2->bitinverse_buffer = (unsigned*)FUNC_2(VAR_1, sizeof(*VAR_2->bitinverse_buffer));
   VAR_2->phase_lut = (fft_complex_t*)FUNC_2(2 * VAR_1 + 1, sizeof(*VAR_2->phase_lut));

   if (!VAR_2->interleave_buffer || !VAR_2->bitinverse_buffer || !VAR_2->phase_lut)
      goto error;

   VAR_2->size = VAR_1;

   FUNC_0(VAR_2->bitinverse_buffer, VAR_0);
   FUNC_1(VAR_2->phase_lut, VAR_1);
   return VAR_2;

error:
   FUNC_3(VAR_2);
   return ((void*)0);
}
