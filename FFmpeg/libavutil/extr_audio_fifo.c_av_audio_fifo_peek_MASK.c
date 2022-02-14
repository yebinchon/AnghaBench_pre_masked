
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sample_size; int nb_buffers; int * buf; int nb_samples; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,void*,int,int *) ;

int FUNC_3(AVAudioFifo *VAR_2, void **VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    if (VAR_4 < 0)
        return FUNC_0(VAR_1);
    VAR_4 = FUNC_1(VAR_4, VAR_2->nb_samples);
    if (!VAR_4)
        return 0;

    VAR_7 = VAR_4 * VAR_2->sample_size;
    for (VAR_5 = 0; VAR_5 < VAR_2->nb_buffers; VAR_5++) {
        if ((VAR_6 = FUNC_2(VAR_2->buf[VAR_5], VAR_3[VAR_5], VAR_7, ((void*)0))) < 0)
            return VAR_0;
    }

    return VAR_4;
}
