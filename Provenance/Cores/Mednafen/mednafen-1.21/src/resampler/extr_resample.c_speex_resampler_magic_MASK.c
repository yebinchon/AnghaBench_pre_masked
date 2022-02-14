
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spx_word16_t ;
typedef size_t spx_uint32_t ;
struct TYPE_4__ {size_t* magic_samples; size_t mem_alloc_size; int filt_len; size_t out_stride; int * mem; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int FUNC_0 (TYPE_1__*,size_t,size_t*,int *,size_t*) ;

__attribute__((used)) static int FUNC_1(SpeexResamplerState *VAR_0, spx_uint32_t VAR_1, spx_word16_t **VAR_2, spx_uint32_t VAR_3) {
   spx_uint32_t VAR_4 = VAR_0->magic_samples[VAR_1];
   spx_word16_t *VAR_5 = VAR_0->mem + VAR_1 * VAR_0->mem_alloc_size;
   const int VAR_6 = VAR_0->filt_len;

   FUNC_0(VAR_0, VAR_1, &VAR_4, *VAR_2, &VAR_3);

   VAR_0->magic_samples[VAR_1] -= VAR_4;


   if (VAR_0->magic_samples[VAR_1])
   {
      spx_uint32_t VAR_7;
      for (VAR_7=0;VAR_7<VAR_0->magic_samples[VAR_1];VAR_7++)
         VAR_5[VAR_6-1+VAR_7]=VAR_5[VAR_6-1+VAR_7+VAR_4];
   }
   *VAR_2 += VAR_3*VAR_0->out_stride;
   return VAR_3;
}
