
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
typedef enum HeaderType { ____Placeholder_HeaderType } HeaderType ;
struct TYPE_6__ {int nsubframes; int nchannels; int* nsubbands; int* joint_intensity_index; int** subband_samples; int npcmblocks; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int*,int*) ;
 int FUNC_6 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static int FUNC_7(DCACoreDecoder *VAR_3, enum HeaderType VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if ((VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5)) < 0)
        return VAR_8;

    for (VAR_6 = 0, VAR_10 = 0, VAR_11 = VAR_1; VAR_6 < VAR_3->nsubframes; VAR_6++) {
        if ((VAR_8 = FUNC_6(VAR_3, VAR_6, VAR_4, VAR_5)) < 0)
            return VAR_8;
        if ((VAR_8 = FUNC_5(VAR_3, VAR_6, VAR_4, VAR_5, &VAR_10, &VAR_11)) < 0)
            return VAR_8;
    }

    for (VAR_7 = VAR_5; VAR_7 < VAR_3->nchannels; VAR_7++) {

        int VAR_12 = VAR_3->nsubbands[VAR_7];
        if (VAR_3->joint_intensity_index[VAR_7])
            VAR_12 = FUNC_1(VAR_12, VAR_3->nsubbands[VAR_3->joint_intensity_index[VAR_7] - 1]);


        for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
            int32_t *VAR_13 = VAR_3->subband_samples[VAR_7][VAR_9] - VAR_0;
            FUNC_0(VAR_13, VAR_13 + VAR_3->npcmblocks);
        }


        for (; VAR_9 < VAR_2; VAR_9++) {
            int32_t *VAR_14 = VAR_3->subband_samples[VAR_7][VAR_9] - VAR_0;
            FUNC_3(VAR_14, 0, (VAR_0 + VAR_3->npcmblocks) * sizeof(int32_t));
        }
    }

    FUNC_2();

    return 0;
}
