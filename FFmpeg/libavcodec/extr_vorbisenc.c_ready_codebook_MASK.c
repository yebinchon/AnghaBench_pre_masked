
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nentries; int lookup; int* pow2; float* dimensions; int ndimensions; float min; int* quantlist; int delta; scalar_t__ seq_p; int codewords; int lens; } ;
typedef TYPE_1__ vorbis_enc_codebook ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 float* FUNC_1 (int,int) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(vorbis_enc_codebook *VAR_1)
{
    int VAR_2;

    FUNC_4(VAR_1->lens, VAR_1->codewords, VAR_1->nentries);

    if (!VAR_1->lookup) {
        VAR_1->pow2 = VAR_1->dimensions = ((void*)0);
    } else {
        int VAR_3 = FUNC_3(VAR_1->lookup, VAR_1->ndimensions, VAR_1->nentries);
        VAR_1->dimensions = FUNC_1(VAR_1->nentries, sizeof(float) * VAR_1->ndimensions);
        VAR_1->pow2 = FUNC_2(VAR_1->nentries, sizeof(float));
        if (!VAR_1->dimensions || !VAR_1->pow2)
            return FUNC_0(VAR_0);
        for (VAR_2 = 0; VAR_2 < VAR_1->nentries; VAR_2++) {
            float VAR_4 = 0;
            int VAR_5;
            int VAR_6 = 1;
            for (VAR_5 = 0; VAR_5 < VAR_1->ndimensions; VAR_5++) {
                int VAR_7;
                if (VAR_1->lookup == 1)
                    VAR_7 = (VAR_2 / VAR_6) % VAR_3;
                else
                    VAR_7 = VAR_2 * VAR_1->ndimensions + VAR_5;

                VAR_1->dimensions[VAR_2 * VAR_1->ndimensions + VAR_5] = VAR_4 + VAR_1->min + VAR_1->quantlist[VAR_7] * VAR_1->delta;
                if (VAR_1->seq_p)
                    VAR_4 = VAR_1->dimensions[VAR_2 * VAR_1->ndimensions + VAR_5];
                VAR_1->pow2[VAR_2] += VAR_1->dimensions[VAR_2 * VAR_1->ndimensions + VAR_5] * VAR_1->dimensions[VAR_2 * VAR_1->ndimensions + VAR_5];
                VAR_6 *= VAR_3;
            }
            VAR_1->pow2[VAR_2] /= 2.0;
        }
    }
    return 0;
}
