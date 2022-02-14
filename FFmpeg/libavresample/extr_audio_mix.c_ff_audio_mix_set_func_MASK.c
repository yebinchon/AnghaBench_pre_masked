
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVMixCoeffType { ____Placeholder_AVMixCoeffType } AVMixCoeffType ;
typedef int chan_str ;
struct TYPE_3__ {int fmt; int coeff_type; int in_matrix_channels; int out_matrix_channels; char const* func_descr; int ptr_align; int samples_align; char const* func_descr_generic; int has_optimized_func; int avr; void* mix_generic; void* mix; } ;
typedef TYPE_1__ AudioMix ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int ,int ,char*,char const*) ;
 int * VAR_1 ;
 int FUNC_2 (char*,int,char*,...) ;

void FUNC_3(AudioMix *VAR_2, enum AVSampleFormat VAR_3,
                           enum AVMixCoeffType VAR_4, int VAR_5,
                           int VAR_6, int VAR_7, int VAR_8,
                           const char *VAR_9, void *VAR_10)
{
    if (VAR_3 == VAR_2->fmt && VAR_4 == VAR_2->coeff_type &&
        ( VAR_5 == VAR_2->in_matrix_channels || VAR_5 == 0) &&
        (VAR_6 == VAR_2->out_matrix_channels || VAR_6 == 0)) {
        char VAR_11[16];
        VAR_2->mix = VAR_10;
        VAR_2->func_descr = VAR_9;
        VAR_2->ptr_align = VAR_7;
        VAR_2->samples_align = VAR_8;
        if (VAR_7 == 1 && VAR_8 == 1) {
            VAR_2->mix_generic = VAR_10;
            VAR_2->func_descr_generic = VAR_9;
        } else {
            VAR_2->has_optimized_func = 1;
        }
        if (VAR_5) {
            if (VAR_6)
                FUNC_2(VAR_11, sizeof(VAR_11), "[%d to %d] ",
                         VAR_5, VAR_6);
            else
                FUNC_2(VAR_11, sizeof(VAR_11), "[%d to any] ",
                         VAR_5);
        } else if (VAR_6) {
                FUNC_2(VAR_11, sizeof(VAR_11), "[any to %d] ",
                         VAR_6);
        } else {
            FUNC_2(VAR_11, sizeof(VAR_11), "[any to any] ");
        }
        FUNC_1(VAR_2->avr, VAR_0, "audio_mix: found function: [fmt=%s] "
               "[c=%s] %s(%s)\n", FUNC_0(VAR_3),
               VAR_1[VAR_4], VAR_11, VAR_9);
    }
}
