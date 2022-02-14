
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nb_buffers; int * buf; } ;
typedef TYPE_1__ AVAudioFifo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int **) ;

void FUNC_3(AVAudioFifo *VAR_0)
{
    if (VAR_0) {
        if (VAR_0->buf) {
            int VAR_1;
            for (VAR_1 = 0; VAR_1 < VAR_0->nb_buffers; VAR_1++) {
                FUNC_0(&VAR_0->buf[VAR_1]);
            }
            FUNC_2(&VAR_0->buf);
        }
        FUNC_1(VAR_0);
    }
}
