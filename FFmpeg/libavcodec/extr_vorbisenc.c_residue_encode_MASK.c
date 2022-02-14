
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int partition_size; int end; int begin; int type; size_t classbook; int classifications; float** maxes; int** books; } ;
typedef TYPE_1__ vorbis_enc_residue ;
struct TYPE_9__ {TYPE_3__* codebooks; } ;
typedef TYPE_2__ vorbis_enc_context ;
struct TYPE_10__ {int ndimensions; } ;
typedef TYPE_3__ vorbis_enc_codebook ;
typedef int PutBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 float FUNC_1 (float,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (float) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*,int) ;
 float* FUNC_6 (TYPE_3__*,int *,float*) ;

__attribute__((used)) static int FUNC_7(vorbis_enc_context *VAR_4, vorbis_enc_residue *VAR_5,
                          PutBitContext *VAR_6, float *VAR_7, int VAR_8,
                          int VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15 = VAR_5->partition_size;
    int VAR_16 = (VAR_5->end - VAR_5->begin) / VAR_15;
    int VAR_17 = (VAR_5->type == 2) ? 1 : VAR_9;
    int VAR_18[VAR_1][VAR_3];
    int VAR_19 = VAR_4->codebooks[VAR_5->classbook].ndimensions;

    FUNC_3(VAR_5->type == 2);
    FUNC_3(VAR_9 == 2);
    for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
        float VAR_20 = 0.0, VAR_21 = 0.0;
        int VAR_22 = VAR_5->begin + VAR_13 * VAR_15;
        for (VAR_14 = VAR_22; VAR_14 < VAR_22 + VAR_15; VAR_14 += 2) {
            VAR_20 = FUNC_1(VAR_20, FUNC_4(VAR_7[ VAR_14 / VAR_9]));
            VAR_21 = FUNC_1(VAR_21, FUNC_4(VAR_7[VAR_8 + VAR_14 / VAR_9]));
        }

        for (VAR_11 = 0; VAR_11 < VAR_5->classifications - 1; VAR_11++)
            if (VAR_20 < VAR_5->maxes[VAR_11][0] && VAR_21 < VAR_5->maxes[VAR_11][1])
                break;
        VAR_18[0][VAR_13] = VAR_11;
    }

    for (VAR_10 = 0; VAR_10 < 8; VAR_10++) {
        VAR_13 = 0;
        while (VAR_13 < VAR_16) {
            if (VAR_10 == 0)
                for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                    vorbis_enc_codebook * VAR_23 = &VAR_4->codebooks[VAR_5->classbook];
                    int VAR_24 = 0;
                    for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11++) {
                        VAR_24 *= VAR_5->classifications;
                        VAR_24 += VAR_18[VAR_12][VAR_13 + VAR_11];
                    }
                    if (FUNC_5(VAR_6, VAR_23, VAR_24))
                        return FUNC_0(VAR_0);
                }
            for (VAR_11 = 0; VAR_11 < VAR_19 && VAR_13 < VAR_16; VAR_11++, VAR_13++) {
                for (VAR_12 = 0; VAR_12 < VAR_17; VAR_12++) {
                    int VAR_25 = VAR_5->books[VAR_18[VAR_12][VAR_13]][VAR_10];
                    vorbis_enc_codebook * VAR_26 = &VAR_4->codebooks[VAR_25];
                    float *VAR_27 = VAR_7 + VAR_8*VAR_12 + VAR_5->begin + VAR_13*VAR_15;
                    if (VAR_25 == -1)
                        continue;

                    FUNC_2(VAR_5->type == 0 || VAR_5->type == 2);
                    FUNC_2(!(VAR_15 % VAR_26->ndimensions));

                    if (VAR_5->type == 0) {
                        for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14 += VAR_26->ndimensions) {
                            int VAR_28;
                            float *VAR_29 = FUNC_6(VAR_26, VAR_6, &VAR_27[VAR_14]);
                            if (!VAR_29)
                                return FUNC_0(VAR_0);
                            for (VAR_28 = 0; VAR_28 < VAR_26->ndimensions; VAR_28++)
                                VAR_27[VAR_14 + VAR_28] -= VAR_29[VAR_28];
                        }
                    } else {
                        int VAR_30 = VAR_5->begin + VAR_13 * VAR_15, VAR_31, VAR_32;
                        VAR_31 = (VAR_30 % VAR_9) * VAR_8;
                        VAR_32 = VAR_30 / VAR_9;
                        VAR_30 = VAR_9 * VAR_8;
                        for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14 += VAR_26->ndimensions) {
                            int VAR_33, VAR_34 = VAR_31, VAR_35 = VAR_32;
                            float VAR_36[VAR_2], *VAR_37 = VAR_36;
                            for (VAR_33 = VAR_26->ndimensions; VAR_33--; ) {
                                *VAR_37++ = VAR_7[VAR_34 + VAR_35];
                                if ((VAR_34 += VAR_8) == VAR_30) {
                                    VAR_34 = 0;
                                    VAR_35++;
                                }
                            }
                            VAR_37 = FUNC_6(VAR_26, VAR_6, VAR_36);
                            if (!VAR_37)
                                return FUNC_0(VAR_0);
                            for (VAR_33 = VAR_26->ndimensions; VAR_33--; ) {
                                VAR_7[VAR_31 + VAR_32] -= *VAR_37++;
                                if ((VAR_31 += VAR_8) == VAR_30) {
                                    VAR_31 = 0;
                                    VAR_32++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
