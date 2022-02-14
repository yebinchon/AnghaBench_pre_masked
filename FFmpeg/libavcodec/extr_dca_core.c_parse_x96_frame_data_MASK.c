
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int nsubframes; int x96_nchannels; int* nsubbands; int* joint_intensity_index; int** x96_subband_samples; int x96_subband_start; int npcmblocks; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(DCACoreDecoder *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    if ((VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4)) < 0)
        return VAR_7;

    for (VAR_5 = 0, VAR_9 = 0; VAR_5 < VAR_2->nsubframes; VAR_5++) {
        if ((VAR_7 = FUNC_6(VAR_2, VAR_4)) < 0)
            return VAR_7;
        if ((VAR_7 = FUNC_5(VAR_2, VAR_5, VAR_4, &VAR_9)) < 0)
            return VAR_7;
    }

    for (VAR_6 = VAR_4; VAR_6 < VAR_2->x96_nchannels; VAR_6++) {

        int VAR_10 = VAR_2->nsubbands[VAR_6];
        if (VAR_2->joint_intensity_index[VAR_6])
            VAR_10 = FUNC_1(VAR_10, VAR_2->nsubbands[VAR_2->joint_intensity_index[VAR_6] - 1]);


        for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
            int32_t *VAR_11 = VAR_2->x96_subband_samples[VAR_6][VAR_8] - VAR_0;
            if (VAR_8 >= VAR_2->x96_subband_start && VAR_8 < VAR_10)
                FUNC_0(VAR_11, VAR_11 + VAR_2->npcmblocks);
            else
                FUNC_3(VAR_11, 0, (VAR_0 + VAR_2->npcmblocks) * sizeof(int32_t));
        }
    }

    FUNC_2();

    return 0;
}
