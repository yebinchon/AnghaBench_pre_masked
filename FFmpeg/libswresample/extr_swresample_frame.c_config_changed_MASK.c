
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ channel_layout; scalar_t__ sample_rate; scalar_t__ format; } ;
struct TYPE_6__ {scalar_t__ in_ch_layout; scalar_t__ in_sample_rate; scalar_t__ in_sample_fmt; scalar_t__ out_ch_layout; scalar_t__ out_sample_rate; scalar_t__ out_sample_fmt; } ;
typedef TYPE_1__ SwrContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(SwrContext *VAR_2,
                          const AVFrame *VAR_3, const AVFrame *VAR_4)
{
    int VAR_5 = 0;

    if (VAR_4) {
        if (VAR_2->in_ch_layout != VAR_4->channel_layout ||
            VAR_2->in_sample_rate != VAR_4->sample_rate ||
            VAR_2->in_sample_fmt != VAR_4->format) {
            VAR_5 |= VAR_0;
        }
    }

    if (VAR_3) {
        if (VAR_2->out_ch_layout != VAR_3->channel_layout ||
            VAR_2->out_sample_rate != VAR_3->sample_rate ||
            VAR_2->out_sample_fmt != VAR_3->format) {
            VAR_5 |= VAR_1;
        }
    }

    return VAR_5;
}
