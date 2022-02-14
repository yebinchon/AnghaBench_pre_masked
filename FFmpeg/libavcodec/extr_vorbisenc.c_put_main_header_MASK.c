
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int submaps; int coupling_steps; int* magnitude; int* angle; int* mux; int* floor; int* residue; } ;
typedef TYPE_2__ vorbis_enc_mapping ;
struct TYPE_7__ {int channels; int* log2_blocksize; int ncodebooks; int nfloors; int nresidues; int nmappings; int nmodes; TYPE_1__* modes; TYPE_2__* mappings; int * residues; int * floors; int * codebooks; int sample_rate; } ;
typedef TYPE_3__ vorbis_enc_context ;
typedef int uint8_t ;
struct TYPE_5__ {int blockflag; int mapping; } ;
typedef int PutBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(vorbis_enc_context *VAR_1, uint8_t **VAR_2)
{
    int VAR_3;
    PutBitContext VAR_4;
    int VAR_5, VAR_6[3];
    int VAR_7 = 50000;
    uint8_t *VAR_8 = FUNC_2(VAR_7), *VAR_9 = VAR_8;
    if (!VAR_8)
        return FUNC_0(VAR_0);


    FUNC_6(&VAR_4, VAR_9, VAR_7);
    FUNC_8(&VAR_4, 8, 1);
    for (VAR_3 = 0; "vorbis"[VAR_3]; VAR_3++)
        FUNC_8(&VAR_4, 8, "vorbis"[VAR_3]);
    FUNC_9(&VAR_4, 0);
    FUNC_8(&VAR_4, 8, VAR_1->channels);
    FUNC_9(&VAR_4, VAR_1->sample_rate);
    FUNC_9(&VAR_4, 0);
    FUNC_9(&VAR_4, 0);
    FUNC_9(&VAR_4, 0);
    FUNC_8(&VAR_4, 4, VAR_1->log2_blocksize[0]);
    FUNC_8(&VAR_4, 4, VAR_1->log2_blocksize[1]);
    FUNC_8(&VAR_4, 1, 1);

    FUNC_4(&VAR_4);
    VAR_6[0] = FUNC_10(&VAR_4) >> 3;
    VAR_7 -= VAR_6[0];
    VAR_9 += VAR_6[0];


    FUNC_6(&VAR_4, VAR_9, VAR_7);
    FUNC_8(&VAR_4, 8, 3);
    for (VAR_3 = 0; "vorbis"[VAR_3]; VAR_3++)
        FUNC_8(&VAR_4, 8, "vorbis"[VAR_3]);
    FUNC_9(&VAR_4, 0);
    FUNC_9(&VAR_4, 0);
    FUNC_8(&VAR_4, 1, 1);

    FUNC_4(&VAR_4);
    VAR_6[1] = FUNC_10(&VAR_4) >> 3;
    VAR_7 -= VAR_6[1];
    VAR_9 += VAR_6[1];


    FUNC_6(&VAR_4, VAR_9, VAR_7);
    FUNC_8(&VAR_4, 8, 5);
    for (VAR_3 = 0; "vorbis"[VAR_3]; VAR_3++)
        FUNC_8(&VAR_4, 8, "vorbis"[VAR_3]);


    FUNC_8(&VAR_4, 8, VAR_1->ncodebooks - 1);
    for (VAR_3 = 0; VAR_3 < VAR_1->ncodebooks; VAR_3++)
        FUNC_11(&VAR_4, &VAR_1->codebooks[VAR_3]);


    FUNC_8(&VAR_4, 6, 0);
    FUNC_8(&VAR_4, 16, 0);


    FUNC_8(&VAR_4, 6, VAR_1->nfloors - 1);
    for (VAR_3 = 0; VAR_3 < VAR_1->nfloors; VAR_3++)
        FUNC_12(&VAR_4, &VAR_1->floors[VAR_3]);


    FUNC_8(&VAR_4, 6, VAR_1->nresidues - 1);
    for (VAR_3 = 0; VAR_3 < VAR_1->nresidues; VAR_3++)
        FUNC_13(&VAR_4, &VAR_1->residues[VAR_3]);


    FUNC_8(&VAR_4, 6, VAR_1->nmappings - 1);
    for (VAR_3 = 0; VAR_3 < VAR_1->nmappings; VAR_3++) {
        vorbis_enc_mapping *VAR_10 = &VAR_1->mappings[VAR_3];
        int VAR_11;
        FUNC_8(&VAR_4, 16, 0);

        FUNC_8(&VAR_4, 1, VAR_10->submaps > 1);
        if (VAR_10->submaps > 1)
            FUNC_8(&VAR_4, 4, VAR_10->submaps - 1);

        FUNC_8(&VAR_4, 1, !!VAR_10->coupling_steps);
        if (VAR_10->coupling_steps) {
            FUNC_8(&VAR_4, 8, VAR_10->coupling_steps - 1);
            for (VAR_11 = 0; VAR_11 < VAR_10->coupling_steps; VAR_11++) {
                FUNC_8(&VAR_4, FUNC_5(VAR_1->channels - 1), VAR_10->magnitude[VAR_11]);
                FUNC_8(&VAR_4, FUNC_5(VAR_1->channels - 1), VAR_10->angle[VAR_11]);
            }
        }

        FUNC_8(&VAR_4, 2, 0);

        if (VAR_10->submaps > 1)
            for (VAR_11 = 0; VAR_11 < VAR_1->channels; VAR_11++)
                FUNC_8(&VAR_4, 4, VAR_10->mux[VAR_11]);

        for (VAR_11 = 0; VAR_11 < VAR_10->submaps; VAR_11++) {
            FUNC_8(&VAR_4, 8, 0);
            FUNC_8(&VAR_4, 8, VAR_10->floor[VAR_11]);
            FUNC_8(&VAR_4, 8, VAR_10->residue[VAR_11]);
        }
    }


    FUNC_8(&VAR_4, 6, VAR_1->nmodes - 1);
    for (VAR_3 = 0; VAR_3 < VAR_1->nmodes; VAR_3++) {
        FUNC_8(&VAR_4, 1, VAR_1->modes[VAR_3].blockflag);
        FUNC_8(&VAR_4, 16, 0);
        FUNC_8(&VAR_4, 16, 0);
        FUNC_8(&VAR_4, 8, VAR_1->modes[VAR_3].mapping);
    }

    FUNC_8(&VAR_4, 1, 1);

    FUNC_4(&VAR_4);
    VAR_6[2] = FUNC_10(&VAR_4) >> 3;

    VAR_5 = VAR_6[0] + VAR_6[1] + VAR_6[2];
    VAR_9 = *VAR_2 = FUNC_2(64 + VAR_5 + VAR_5/255);
    if (!VAR_9)
        return FUNC_0(VAR_0);

    *VAR_9++ = 2;
    VAR_9 += FUNC_3(VAR_9, VAR_6[0]);
    VAR_9 += FUNC_3(VAR_9, VAR_6[1]);
    VAR_7 = 0;
    for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
        FUNC_7(VAR_9, VAR_8 + VAR_7, VAR_6[VAR_3]);
        VAR_9 += VAR_6[VAR_3];
        VAR_7 += VAR_6[VAR_3];
    }

    FUNC_1(&VAR_8);
    return VAR_9 - *VAR_2;
}
