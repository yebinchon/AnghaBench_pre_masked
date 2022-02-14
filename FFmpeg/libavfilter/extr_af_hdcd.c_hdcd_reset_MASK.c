
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint64_t ;
struct TYPE_3__ {int readahead; unsigned int sustain_reset; int count_sustain_expired; unsigned int rate; scalar_t__ _ana_snb; scalar_t__ max_gain; scalar_t__* gain_counts; scalar_t__ count_transient_filter; scalar_t__ count_peak_extend; scalar_t__ code_counterC_unmatched; scalar_t__ code_counterC; scalar_t__ code_counterB_checkfails; scalar_t__ code_counterB; scalar_t__ code_counterA_almost; scalar_t__ code_counterA; scalar_t__ sustain; scalar_t__ running_gain; scalar_t__ control; scalar_t__ arg; scalar_t__ window; } ;
typedef TYPE_1__ hdcd_state ;



__attribute__((used)) static void FUNC_0(hdcd_state *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    int VAR_3;
    uint64_t VAR_4 = (uint64_t)VAR_2 * VAR_1 / 1000;

    VAR_0->window = 0;
    VAR_0->readahead = 32;
    VAR_0->arg = 0;
    VAR_0->control = 0;
    VAR_0->running_gain = 0;
    VAR_0->sustain_reset = VAR_4;
    VAR_0->sustain = 0;

    VAR_0->code_counterA = 0;
    VAR_0->code_counterA_almost = 0;
    VAR_0->code_counterB = 0;
    VAR_0->code_counterB_checkfails = 0;
    VAR_0->code_counterC = 0;
    VAR_0->code_counterC_unmatched = 0;
    VAR_0->count_peak_extend = 0;
    VAR_0->count_transient_filter = 0;
    for(VAR_3 = 0; VAR_3 < 16; VAR_3++) VAR_0->gain_counts[VAR_3] = 0;
    VAR_0->max_gain = 0;
    VAR_0->count_sustain_expired = -1;

    VAR_0->rate = VAR_1;
    VAR_0->_ana_snb = 0;
}
