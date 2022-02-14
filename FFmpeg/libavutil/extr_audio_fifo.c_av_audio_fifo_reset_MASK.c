
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_buffers; scalar_t__ nb_samples; int * buf; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (int ) ;

void FUNC_1(AVAudioFifo *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_buffers; VAR_1++)
        FUNC_0(VAR_0->buf[VAR_1]);

    VAR_0->nb_samples = 0;
}
