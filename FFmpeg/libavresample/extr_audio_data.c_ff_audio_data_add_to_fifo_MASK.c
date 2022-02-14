
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int nb_samples; int stride; int planes; int ** data; } ;
typedef TYPE_1__ AudioData ;
typedef int AVAudioFifo ;


 int VAR_0 ;
 int FUNC_0 (int *,void**,int) ;

int FUNC_1(AVAudioFifo *VAR_1, AudioData *VAR_2, int VAR_3,
                              int VAR_4)
{
    uint8_t *VAR_5[VAR_0];
    int VAR_6, VAR_7;

    if (VAR_3 >= VAR_2->nb_samples)
        return 0;
    VAR_6 = VAR_3 * VAR_2->stride;
    for (VAR_7 = 0; VAR_7 < VAR_2->planes; VAR_7++)
        VAR_5[VAR_7] = VAR_2->data[VAR_7] + VAR_6;

    return FUNC_0(VAR_1, (void **)VAR_5, VAR_4);
}
