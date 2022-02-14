
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int channels; double sample_rate; int format; TYPE_3__* src; } ;
struct TYPE_6__ {int channels; int num_chorus; double* delays; double* depths; int* length; int* speeds; float in_gain; double out_gain; int max_samples; int chorusbuf; int fade_out; void** phase; void* counter; scalar_t__* decays; int * lookup_table; } ;
typedef TYPE_1__ ChorusContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    ChorusContext *VAR_6 = VAR_5->priv;
    float VAR_7 = 1.0;
    int VAR_8;

    VAR_6->channels = VAR_4->channels;

    for (VAR_8 = 0; VAR_8 < VAR_6->num_chorus; VAR_8++) {
        int VAR_9 = (int) ((VAR_6->delays[VAR_8] + VAR_6->depths[VAR_8]) * VAR_4->sample_rate / 1000.0);
        int VAR_10 = (int) (VAR_6->depths[VAR_8] * VAR_4->sample_rate / 1000.0);

        VAR_6->length[VAR_8] = VAR_4->sample_rate / VAR_6->speeds[VAR_8];

        VAR_6->lookup_table[VAR_8] = FUNC_4(sizeof(int32_t) * VAR_6->length[VAR_8]);
        if (!VAR_6->lookup_table[VAR_8])
            return FUNC_0(VAR_2);

        FUNC_6(VAR_3, VAR_1, VAR_6->lookup_table[VAR_8],
                               VAR_6->length[VAR_8], 0., VAR_10, 0);
        VAR_6->max_samples = FUNC_1(VAR_6->max_samples, VAR_9);
    }

    for (VAR_8 = 0; VAR_8 < VAR_6->num_chorus; VAR_8++)
        VAR_7 += VAR_6->decays[VAR_8];

    if (VAR_6->in_gain * (VAR_7) > 1.0 / VAR_6->out_gain)
        FUNC_3(VAR_5, VAR_0, "output gain can cause saturation or clipping of output\n");

    VAR_6->counter = FUNC_2(VAR_4->channels, sizeof(*VAR_6->counter));
    if (!VAR_6->counter)
        return FUNC_0(VAR_2);

    VAR_6->phase = FUNC_2(VAR_4->channels, sizeof(*VAR_6->phase));
    if (!VAR_6->phase)
        return FUNC_0(VAR_2);

    for (VAR_8 = 0; VAR_8 < VAR_4->channels; VAR_8++) {
        VAR_6->phase[VAR_8] = FUNC_2(VAR_6->num_chorus, sizeof(int));
        if (!VAR_6->phase[VAR_8])
            return FUNC_0(VAR_2);
    }

    VAR_6->fade_out = VAR_6->max_samples;

    return FUNC_5(&VAR_6->chorusbuf, ((void*)0),
                                              VAR_4->channels,
                                              VAR_6->max_samples,
                                              VAR_4->format, 0);
}
