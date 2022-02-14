
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eq_data {float* buffer; unsigned int block_size; unsigned int block_ptr; scalar_t__* save; int * fftblock; int fft; int * filter; scalar_t__* block; } ;
struct dspfilter_output {float* samples; scalar_t__ frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,scalar_t__*,int) ;
 int FUNC_2 (int ,float*,int *,int) ;
 int FUNC_3 (scalar_t__*,float const*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct dspfilter_output *VAR_1,
      const struct dspfilter_input *VAR_2)
{
   float *VAR_3;
   const float *VAR_4;
   unsigned VAR_5;
   struct eq_data *VAR_6 = (struct eq_data*)VAR_0;

   VAR_1->samples = VAR_6->buffer;
   VAR_1->frames = 0;

   VAR_3 = VAR_6->buffer;
   VAR_4 = VAR_2->samples;
   VAR_5 = VAR_2->frames;

   while (VAR_5)
   {
      unsigned VAR_7 = VAR_6->block_size - VAR_6->block_ptr;

      if (VAR_5 < VAR_7)
         VAR_7 = VAR_5;

      FUNC_3(VAR_6->block + VAR_6->block_ptr * 2, VAR_4, VAR_7 * 2 * sizeof(float));

      VAR_4 += VAR_7 * 2;
      VAR_5 -= VAR_7;
      VAR_6->block_ptr += VAR_7;


      if (VAR_6->block_ptr == VAR_6->block_size)
      {
         unsigned VAR_8, VAR_9;

         for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
         {
            FUNC_1(VAR_6->fft, VAR_6->fftblock, VAR_6->block + VAR_9, 2);
            for (VAR_8 = 0; VAR_8 < 2 * VAR_6->block_size; VAR_8++)
               VAR_6->fftblock[VAR_8] = FUNC_0(VAR_6->fftblock[VAR_8], VAR_6->filter[VAR_8]);
            FUNC_2(VAR_6->fft, VAR_3 + VAR_9, VAR_6->fftblock, 2);
         }


         for (VAR_8 = 0; VAR_8 < 2 * VAR_6->block_size; VAR_8++)
            VAR_3[VAR_8] += VAR_6->save[VAR_8];


         FUNC_3(VAR_6->save, VAR_3 + 2 * VAR_6->block_size, 2 * VAR_6->block_size * sizeof(float));

         VAR_3 += VAR_6->block_size * 2;
         VAR_1->frames += VAR_6->block_size;
         VAR_6->block_ptr = 0;
      }
   }
}
