
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_samples; int sample_size; int nb_buffers; int * buf; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(AVAudioFifo *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    if (VAR_2 < 0)
        return FUNC_0(VAR_0);
    VAR_2 = FUNC_1(VAR_2, VAR_1->nb_samples);

    if (VAR_2) {
        VAR_4 = VAR_2 * VAR_1->sample_size;
        for (VAR_3 = 0; VAR_3 < VAR_1->nb_buffers; VAR_3++)
            FUNC_2(VAR_1->buf[VAR_3], VAR_4);
        VAR_1->nb_samples -= VAR_2;
    }
    return 0;
}
