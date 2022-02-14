
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_samples; int stride; int planes; scalar_t__* data; } ;
typedef TYPE_1__ AudioData ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

void FUNC_1(AudioData *VAR_0, int VAR_1)
{
    if (VAR_0->nb_samples <= VAR_1) {

        VAR_0->nb_samples = 0;
    } else {
        int VAR_2;
        int VAR_3 = VAR_0->stride * VAR_1;
        int VAR_4 = VAR_0->stride * (VAR_0->nb_samples - VAR_1);

        for (VAR_2 = 0; VAR_2 < VAR_0->planes; VAR_2++)
            FUNC_0(VAR_0->data[VAR_2], VAR_0->data[VAR_2] + VAR_3, VAR_4);

        VAR_0->nb_samples -= VAR_1;
    }
}
