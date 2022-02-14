
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panning_data {float* left; float* right; } ;
struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct dspfilter_output *VAR_1,
      const struct dspfilter_input *VAR_2)
{
   unsigned VAR_3;
   struct panning_data *VAR_4 = (struct panning_data*)VAR_0;
   float *VAR_5 = VAR_1->samples;

   VAR_1->samples = VAR_2->samples;
   VAR_1->frames = VAR_2->frames;

   for (VAR_3 = 0; VAR_3 < VAR_2->frames; VAR_3++, VAR_5 += 2)
   {
      float VAR_6 = VAR_5[0];
      float VAR_7 = VAR_5[1];
      VAR_5[0] = VAR_6 * VAR_4->left[0] + VAR_7 * VAR_4->left[1];
      VAR_5[1] = VAR_6 * VAR_4->right[0] + VAR_7 * VAR_4->right[1];
   }
}
