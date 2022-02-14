
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_buffers; int allocated_samples; int * buf; int sample_fmt; int channels; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int*,int ,int,int ,int) ;

int FUNC_2(AVAudioFifo *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    if ((VAR_3 = FUNC_1(&VAR_4, VAR_0->channels, VAR_1,
                                          VAR_0->sample_fmt, 1)) < 0)
        return VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_buffers; VAR_2++) {
        if ((VAR_3 = FUNC_0(VAR_0->buf[VAR_2], VAR_4)) < 0)
            return VAR_3;
    }
    VAR_0->allocated_samples = VAR_1;
    return 0;
}
