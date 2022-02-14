
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_dsp_data {int output_frames; int output; int input_frames; int input; } ;
struct dspfilter_output {int frames; int samples; int member_0; } ;
struct dspfilter_input {int frames; int samples; int member_0; } ;
struct TYPE_7__ {unsigned int num_instances; TYPE_2__* instances; } ;
typedef TYPE_3__ retro_dsp_filter_t ;
struct TYPE_6__ {int impl_data; TYPE_1__* impl; } ;
struct TYPE_5__ {int (* process ) (int ,struct dspfilter_output*,struct dspfilter_input*) ;} ;


 int FUNC_0 (int ,struct dspfilter_output*,struct dspfilter_input*) ;

void FUNC_1(retro_dsp_filter_t *VAR_0,
      struct retro_dsp_data *VAR_1)
{
   unsigned VAR_2;
   struct dspfilter_output VAR_3 = {0};
   struct dspfilter_input VAR_4 = {0};

   VAR_3.samples = VAR_1->input;
   VAR_3.frames = VAR_1->input_frames;

   for (VAR_2 = 0; VAR_2 < VAR_0->num_instances; VAR_2++)
   {
      VAR_4.samples = VAR_3.samples;
      VAR_4.frames = VAR_3.frames;
      VAR_0->instances[VAR_2].impl->process(
            VAR_0->instances[VAR_2].impl_data, &VAR_3, &VAR_4);
   }

   VAR_1->output = VAR_3.samples;
   VAR_1->output_frames = VAR_3.frames;
}
