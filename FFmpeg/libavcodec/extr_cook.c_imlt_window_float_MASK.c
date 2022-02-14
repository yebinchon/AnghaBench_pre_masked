
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* previous; } ;
typedef TYPE_1__ cook_gains ;
struct TYPE_6__ {int samples_per_channel; float* mlt_window; } ;
typedef TYPE_2__ COOKContext ;


 float* VAR_0 ;

__attribute__((used)) static void FUNC_0(COOKContext *VAR_1, float *VAR_2,
                              cook_gains *VAR_3, float *VAR_4)
{
    const float VAR_5 = VAR_0[VAR_3->previous[0] + 63];
    int VAR_6;







    for (VAR_6 = 0; VAR_6 < VAR_1->samples_per_channel; VAR_6++)
        VAR_2[VAR_6] = VAR_2[VAR_6] * VAR_5 * VAR_1->mlt_window[VAR_6] -
                      VAR_4[VAR_6] * VAR_1->mlt_window[VAR_1->samples_per_channel - 1 - VAR_6];
}
