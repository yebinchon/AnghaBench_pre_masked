
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; size_t num_blocks; size_t* channel_map; int ** planar_samples; } ;
typedef int SampleType ;
typedef TYPE_1__ AC3EncodeContext ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(AC3EncodeContext *VAR_1, SampleType **VAR_2)
{
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_1->channels; VAR_3++) {

        FUNC_0(&VAR_1->planar_samples[VAR_3][0], &VAR_1->planar_samples[VAR_3][VAR_0 * VAR_1->num_blocks],
               VAR_0 * sizeof(VAR_1->planar_samples[0][0]));


        FUNC_0(&VAR_1->planar_samples[VAR_3][VAR_0],
               VAR_2[VAR_1->channel_map[VAR_3]],
               VAR_0 * VAR_1->num_blocks * sizeof(VAR_1->planar_samples[0][0]));
    }
}
