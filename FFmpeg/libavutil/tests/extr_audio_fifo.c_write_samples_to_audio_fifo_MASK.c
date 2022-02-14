
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int nb_samples_pch; scalar_t__* data_planes; } ;
typedef TYPE_1__ TestStruct ;
struct TYPE_7__ {int sample_size; int nb_buffers; } ;
typedef TYPE_2__ AVAudioFifo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,void**,int) ;

__attribute__((used)) static int FUNC_1(AVAudioFifo* VAR_1, const TestStruct *VAR_2,
                                       int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    void *VAR_7[VAR_0];

    if(VAR_3 > VAR_2->nb_samples_pch - VAR_4){
        return 0;
    }
    if(VAR_4 >= VAR_2->nb_samples_pch){
        return 0;
    }
    VAR_5 = VAR_4 * VAR_1->sample_size;

    for (VAR_6 = 0; VAR_6 < VAR_1->nb_buffers ; ++VAR_6){
        VAR_7[VAR_6] = (uint8_t*)VAR_2->data_planes[VAR_6] + VAR_5;
    }

    return FUNC_0(VAR_1, VAR_7, VAR_3);
}
