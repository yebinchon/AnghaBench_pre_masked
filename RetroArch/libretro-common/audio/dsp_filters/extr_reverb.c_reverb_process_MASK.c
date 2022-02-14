
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reverb_data {int right; int left; } ;
struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;


 float FUNC_0 (int *,float) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct dspfilter_output *VAR_1,
      const struct dspfilter_input *VAR_2)
{
   unsigned VAR_3;
   float *VAR_4;
   struct reverb_data *VAR_5 = (struct reverb_data*)VAR_0;

   VAR_1->samples = VAR_2->samples;
   VAR_1->frames = VAR_2->frames;
   VAR_4 = VAR_1->samples;

   for (VAR_3 = 0; VAR_3 < VAR_2->frames; VAR_3++, VAR_4 += 2)
   {
      float VAR_6[2] = { VAR_4[0], VAR_4[1] };

      VAR_4[0] = FUNC_0(&VAR_5->left, VAR_6[0]);
      VAR_4[1] = FUNC_0(&VAR_5->right, VAR_6[1]);
   }
}
