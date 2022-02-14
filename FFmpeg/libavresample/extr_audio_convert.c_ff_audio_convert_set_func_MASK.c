
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {int func_type; int in_fmt; int out_fmt; char const* func_descr; int ptr_align; int samples_align; char const* func_descr_generic; int has_optimized_func; int channels; int avr; void* conv_deinterleave_generic; void* conv_deinterleave; void* conv_interleave_generic; void* conv_interleave; void* conv_flat_generic; void* conv_flat; } ;
typedef TYPE_1__ AudioConvert ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int ,int ,char const*) ;

void FUNC_3(AudioConvert *VAR_1, enum AVSampleFormat VAR_2,
                               enum AVSampleFormat VAR_3, int VAR_4,
                               int VAR_5, int VAR_6,
                               const char *VAR_7, void *VAR_8)
{
    int VAR_9 = 0;

    switch (VAR_1->func_type) {
    case 129:
        if (FUNC_0(VAR_1->in_fmt) == VAR_3 &&
            FUNC_0(VAR_1->out_fmt) == VAR_2) {
            VAR_1->conv_flat = VAR_8;
            VAR_1->func_descr = VAR_7;
            VAR_1->ptr_align = VAR_5;
            VAR_1->samples_align = VAR_6;
            if (VAR_5 == 1 && VAR_6 == 1) {
                VAR_1->conv_flat_generic = VAR_8;
                VAR_1->func_descr_generic = VAR_7;
            } else {
                VAR_1->has_optimized_func = 1;
            }
            VAR_9 = 1;
        }
        break;
    case 128:
        if (VAR_1->in_fmt == VAR_3 && VAR_1->out_fmt == VAR_2 &&
            (!VAR_4 || VAR_1->channels == VAR_4)) {
            VAR_1->conv_interleave = VAR_8;
            VAR_1->func_descr = VAR_7;
            VAR_1->ptr_align = VAR_5;
            VAR_1->samples_align = VAR_6;
            if (VAR_5 == 1 && VAR_6 == 1) {
                VAR_1->conv_interleave_generic = VAR_8;
                VAR_1->func_descr_generic = VAR_7;
            } else {
                VAR_1->has_optimized_func = 1;
            }
            VAR_9 = 1;
        }
        break;
    case 130:
        if (VAR_1->in_fmt == VAR_3 && VAR_1->out_fmt == VAR_2 &&
            (!VAR_4 || VAR_1->channels == VAR_4)) {
            VAR_1->conv_deinterleave = VAR_8;
            VAR_1->func_descr = VAR_7;
            VAR_1->ptr_align = VAR_5;
            VAR_1->samples_align = VAR_6;
            if (VAR_5 == 1 && VAR_6 == 1) {
                VAR_1->conv_deinterleave_generic = VAR_8;
                VAR_1->func_descr_generic = VAR_7;
            } else {
                VAR_1->has_optimized_func = 1;
            }
            VAR_9 = 1;
        }
        break;
    }
    if (VAR_9) {
        FUNC_2(VAR_1->avr, VAR_0, "audio_convert: found function: %-4s "
               "to %-4s (%s)\n", FUNC_1(VAR_1->in_fmt),
               FUNC_1(VAR_1->out_fmt), VAR_7);
    }
}
