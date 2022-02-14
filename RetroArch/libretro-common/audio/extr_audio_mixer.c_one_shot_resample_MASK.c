
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resampler_data {float const* data_in; float* data_out; size_t input_frames; float ratio; scalar_t__ output_frames; } ;
struct TYPE_3__ {int (* free ) (void*) ;int (* process ) (void*,struct resampler_data*) ;} ;
typedef TYPE_1__ retro_resampler_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (void**,TYPE_1__ const**,int *,int ,float) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (void*,struct resampler_data*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static bool FUNC_4(const float* VAR_2, size_t VAR_3,
      unsigned VAR_4, float** VAR_5, size_t* VAR_6)
{
   struct resampler_data VAR_7;
   void* VAR_8 = ((void*)0);
   const retro_resampler_t* VAR_9 = ((void*)0);
   float VAR_10 = (double)VAR_1 / (double)VAR_4;

   if (!FUNC_1(&VAR_8, &VAR_9, ((void*)0),
            VAR_0, VAR_10))
      return 0;
   *VAR_6 = VAR_3 * VAR_10 + 4;
   *VAR_5 = (float*)FUNC_0(16,
         ((*VAR_6 + 15) & ~15) * sizeof(float));

   if (*VAR_5 == ((void*)0))
      return 0;

   VAR_7.data_in = VAR_2;
   VAR_7.data_out = *VAR_5;
   VAR_7.input_frames = VAR_3 / 2;
   VAR_7.output_frames = 0;
   VAR_7.ratio = VAR_10;

   VAR_9->process(VAR_8, &VAR_7);
   VAR_9->free(VAR_8);
   return 1;
}
