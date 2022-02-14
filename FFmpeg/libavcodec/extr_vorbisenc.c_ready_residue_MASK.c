
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; float** maxes; int classifications; int** books; } ;
typedef TYPE_1__ vorbis_enc_residue ;
struct TYPE_7__ {TYPE_3__* codebooks; } ;
typedef TYPE_2__ vorbis_enc_context ;
struct TYPE_8__ {int ndimensions; int lookup; int nentries; int * dimensions; int * lens; } ;
typedef TYPE_3__ vorbis_enc_codebook ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 float** FUNC_3 (int,int) ;
 float FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(vorbis_enc_residue *VAR_1, vorbis_enc_context *VAR_2)
{
    int VAR_3;
    FUNC_2(VAR_1->type == 2);
    VAR_1->maxes = FUNC_3(VAR_1->classifications, sizeof(float[2]));
    if (!VAR_1->maxes)
        return FUNC_0(VAR_0);
    for (VAR_3 = 0; VAR_3 < VAR_1->classifications; VAR_3++) {
        int VAR_4;
        vorbis_enc_codebook * VAR_5;
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            if (VAR_1->books[VAR_3][VAR_4] != -1)
                break;
        if (VAR_4 == 8)
            continue;
        VAR_5 = &VAR_2->codebooks[VAR_1->books[VAR_3][VAR_4]];
        FUNC_1(VAR_5->ndimensions >= 2);
        FUNC_1(VAR_5->lookup);

        for (VAR_4 = 0; VAR_4 < VAR_5->nentries; VAR_4++) {
            float VAR_6;
            if (!VAR_5->lens[VAR_4])
                continue;
            VAR_6 = FUNC_4(VAR_5->dimensions[VAR_4 * VAR_5->ndimensions]);
            if (VAR_6 > VAR_1->maxes[VAR_3][0])
                VAR_1->maxes[VAR_3][0] = VAR_6;
            VAR_6 = FUNC_4(VAR_5->dimensions[VAR_4 * VAR_5->ndimensions + 1]);
            if (VAR_6 > VAR_1->maxes[VAR_3][1])
                VAR_1->maxes[VAR_3][1] = VAR_6;
        }
    }

    for (VAR_3 = 0; VAR_3 < VAR_1->classifications; VAR_3++) {
        VAR_1->maxes[VAR_3][0] += 0.8;
        VAR_1->maxes[VAR_3][1] += 0.8;
    }
    return 0;
}
