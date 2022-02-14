
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {size_t* reorder_map; int channels; int ** planar_samples; } ;
struct TYPE_5__ {int nb_samples; int ** extended_data; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AACEncContext ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(AACEncContext *VAR_0, const AVFrame *VAR_1)
{
    int VAR_2;
    int VAR_3 = 2048 + (VAR_1 ? VAR_1->nb_samples : 0);
    const uint8_t *VAR_4 = VAR_0->reorder_map;


    for (VAR_2 = 0; VAR_2 < VAR_0->channels; VAR_2++) {

        FUNC_0(&VAR_0->planar_samples[VAR_2][1024], &VAR_0->planar_samples[VAR_2][2048], 1024 * sizeof(VAR_0->planar_samples[0][0]));


        if (VAR_1) {
            FUNC_0(&VAR_0->planar_samples[VAR_2][2048],
                   VAR_1->extended_data[VAR_4[VAR_2]],
                   VAR_1->nb_samples * sizeof(VAR_0->planar_samples[0][0]));
        }
        FUNC_1(&VAR_0->planar_samples[VAR_2][VAR_3], 0,
               (3072 - VAR_3) * sizeof(VAR_0->planar_samples[0][0]));
    }
}
