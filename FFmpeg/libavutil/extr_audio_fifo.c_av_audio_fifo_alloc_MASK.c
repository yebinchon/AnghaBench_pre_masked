
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_5__ {int channels; int sample_fmt; int sample_size; int nb_buffers; int allocated_samples; int * buf; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int * FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int*,int,int,int,int) ;

AVAudioFifo *FUNC_6(enum AVSampleFormat VAR_0, int VAR_1,
                                 int VAR_2)
{
    AVAudioFifo *VAR_3;
    int VAR_4, VAR_5;


    if (FUNC_5(&VAR_4, VAR_1, VAR_2, VAR_0, 1) < 0)
        return ((void*)0);

    VAR_3 = FUNC_2(sizeof(*VAR_3));
    if (!VAR_3)
        return ((void*)0);

    VAR_3->channels = VAR_1;
    VAR_3->sample_fmt = VAR_0;
    VAR_3->sample_size = VAR_4 / VAR_2;
    VAR_3->nb_buffers = FUNC_4(VAR_0) ? VAR_1 : 1;

    VAR_3->buf = FUNC_3(VAR_3->nb_buffers, sizeof(*VAR_3->buf));
    if (!VAR_3->buf)
        goto error;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_buffers; VAR_5++) {
        VAR_3->buf[VAR_5] = FUNC_1(VAR_4);
        if (!VAR_3->buf[VAR_5])
            goto error;
    }
    VAR_3->allocated_samples = VAR_2;

    return VAR_3;

error:
    FUNC_0(VAR_3);
    return ((void*)0);
}
