
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spx_word16_t ;
typedef int spx_uint32_t ;
typedef scalar_t__ spx_int32_t ;
struct TYPE_4__ {int filt_len; int mem_alloc_size; int started; int (* resampler_ptr ) (TYPE_1__*,int,int *,int*,int *,int*) ;scalar_t__* last_sample; int * mem; } ;
typedef TYPE_1__ SpeexResamplerState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *,int*,int *,int*) ;

__attribute__((used)) static int FUNC_1(SpeexResamplerState *VAR_1, spx_uint32_t VAR_2, spx_uint32_t *VAR_3, spx_word16_t *VAR_4, spx_uint32_t *VAR_5)
{
   int VAR_6=0;
   const int VAR_7 = VAR_1->filt_len;
   int VAR_8 = 0;
   spx_word16_t *VAR_9 = VAR_1->mem + VAR_2 * VAR_1->mem_alloc_size;
   spx_uint32_t VAR_10;

   VAR_1->started = 1;


   VAR_8 = VAR_1->resampler_ptr(VAR_1, VAR_2, VAR_9, VAR_3, VAR_4, VAR_5);

   if (VAR_1->last_sample[VAR_2] < (spx_int32_t)*VAR_3)
      *VAR_3 = VAR_1->last_sample[VAR_2];
   *VAR_5 = VAR_8;
   VAR_1->last_sample[VAR_2] -= *VAR_3;

   VAR_10 = *VAR_3;

   for(VAR_6=0;VAR_6<VAR_7-1;++VAR_6)
     VAR_9[VAR_6] = VAR_9[VAR_6+VAR_10];

   return VAR_0;
}
