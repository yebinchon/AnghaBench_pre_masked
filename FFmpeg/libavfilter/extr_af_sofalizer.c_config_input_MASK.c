
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int channels; int sample_rate; TYPE_3__* dst; } ;
struct TYPE_7__ {scalar_t__ type; int gain; int lfe_gain; int n_conv; int buffer_length; int radius; int elevation; int rotation; int gain_lfe; int framesize; int nb_samples; } ;
typedef TYPE_1__ SOFAlizerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int ,int,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    SOFAlizerContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    if (VAR_5->type == VAR_1)
        VAR_5->nb_samples = VAR_5->framesize;


    VAR_5->gain_lfe = FUNC_1((VAR_5->gain - 3 * VAR_3->channels + VAR_5->lfe_gain) / 20 * VAR_2);

    VAR_5->n_conv = VAR_3->channels;


    if ((VAR_6 = FUNC_2(VAR_4, VAR_5->rotation, VAR_5->elevation, VAR_5->radius, VAR_3->sample_rate)) < 0)
        return VAR_6;

    FUNC_0(VAR_4, VAR_0, "Samplerate: %d Channels to convolute: %d, Length of ringbuffer: %d x %d\n",
        VAR_3->sample_rate, VAR_5->n_conv, VAR_3->channels, VAR_5->buffer_length);

    return 0;
}
