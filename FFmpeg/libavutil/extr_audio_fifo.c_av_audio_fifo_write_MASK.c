
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sample_size; int nb_buffers; int nb_samples; int * buf; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,void*,int,int *) ;

int FUNC_5(AVAudioFifo *VAR_3, void **VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;


    if (FUNC_3(VAR_3) < VAR_5) {
        int VAR_9 = FUNC_2(VAR_3);

        if (VAR_2 / 2 - VAR_9 < VAR_5)
            return FUNC_0(VAR_1);

        if ((VAR_7 = FUNC_1(VAR_3, 2 * (VAR_9 + VAR_5))) < 0)
            return VAR_7;
    }

    VAR_8 = VAR_5 * VAR_3->sample_size;
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_buffers; VAR_6++) {
        VAR_7 = FUNC_4(VAR_3->buf[VAR_6], VAR_4[VAR_6], VAR_8, ((void*)0));
        if (VAR_7 != VAR_8)
            return VAR_0;
    }
    VAR_3->nb_samples += VAR_5;

    return VAR_5;
}
