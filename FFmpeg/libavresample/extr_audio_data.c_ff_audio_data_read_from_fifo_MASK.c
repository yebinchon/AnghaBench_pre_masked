
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nb_samples; scalar_t__ data; scalar_t__ read_only; } ;
typedef TYPE_1__ AudioData ;
typedef int AVAudioFifo ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,void**,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(AVAudioFifo *VAR_1, AudioData *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_2->read_only)
        return FUNC_0(VAR_0);

    VAR_4 = FUNC_2(VAR_2, VAR_3);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_4 = FUNC_1(VAR_1, (void **)VAR_2->data, VAR_3);
    if (VAR_4 >= 0)
        VAR_2->nb_samples = VAR_4;
    return VAR_4;
}
