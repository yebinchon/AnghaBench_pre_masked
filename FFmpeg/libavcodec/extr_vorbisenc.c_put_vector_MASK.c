
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* dimensions; int nentries; int ndimensions; float* pow2; int * lens; } ;
typedef TYPE_1__ vorbis_enc_codebook ;
typedef int PutBitContext ;


 float VAR_0 ;
 int FUNC_0 (float*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int) ;

__attribute__((used)) static float *FUNC_2(vorbis_enc_codebook *VAR_1, PutBitContext *VAR_2,
                         float *VAR_3)
{
    int VAR_4, VAR_5 = -1;
    float VAR_6 = VAR_0;
    FUNC_0(VAR_1->dimensions);
    for (VAR_4 = 0; VAR_4 < VAR_1->nentries; VAR_4++) {
        float * VAR_7 = VAR_1->dimensions + VAR_4 * VAR_1->ndimensions, VAR_8 = VAR_1->pow2[VAR_4];
        int VAR_9;
        if (!VAR_1->lens[VAR_4])
            continue;
        for (VAR_9 = 0; VAR_9 < VAR_1->ndimensions; VAR_9++)
            VAR_8 -= VAR_7[VAR_9] * VAR_3[VAR_9];
        if (VAR_6 > VAR_8) {
            VAR_5 = VAR_4;
            VAR_6 = VAR_8;
        }
    }
    if (FUNC_1(VAR_2, VAR_1, VAR_5))
        return ((void*)0);
    return &VAR_1->dimensions[VAR_5 * VAR_1->ndimensions];
}
