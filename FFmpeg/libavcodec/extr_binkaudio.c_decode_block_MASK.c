
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int (* dct_calc ) (TYPE_4__*,double*) ;} ;
struct TYPE_8__ {int (* rdft_calc ) (TYPE_3__*,double*) ;} ;
struct TYPE_6__ {TYPE_3__ rdft; TYPE_4__ dct; } ;
struct TYPE_7__ {int channels; double root; int num_bands; int frame_len; int* bands; int overlap_len; int** previous; scalar_t__ first; TYPE_1__ trans; scalar_t__ version_b; int gb; } ;
typedef int GetBitContext ;
typedef double FFTSample ;
typedef TYPE_2__ BinkAudioContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int,int) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 double FUNC_6 (int *) ;
 int FUNC_7 (int*,float*,int) ;
 int FUNC_8 (double*,int ,int) ;
 float* VAR_3 ;
 int* VAR_4 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_4__*,double*) ;
 int FUNC_11 (TYPE_3__*,double*) ;

__attribute__((used)) static int FUNC_12(BinkAudioContext *VAR_5, float **VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11;
    float VAR_12, VAR_13[25];
    int VAR_14, VAR_15;
    GetBitContext *VAR_16 = &VAR_5->gb;

    if (VAR_7)
        FUNC_9(VAR_16, 2);

    for (VAR_8 = 0; VAR_8 < VAR_5->channels; VAR_8++) {
        FFTSample *VAR_17 = VAR_6[VAR_8];

        if (VAR_5->version_b) {
            if (FUNC_4(VAR_16) < 64)
                return VAR_0;
            VAR_17[0] = FUNC_1(FUNC_5(VAR_16, 32)) * VAR_5->root;
            VAR_17[1] = FUNC_1(FUNC_5(VAR_16, 32)) * VAR_5->root;
        } else {
            if (FUNC_4(VAR_16) < 58)
                return VAR_0;
            VAR_17[0] = FUNC_6(VAR_16) * VAR_5->root;
            VAR_17[1] = FUNC_6(VAR_16) * VAR_5->root;
        }

        if (FUNC_4(VAR_16) < VAR_5->num_bands * 8)
            return VAR_0;
        for (VAR_9 = 0; VAR_9 < VAR_5->num_bands; VAR_9++) {
            int VAR_18 = FUNC_2(VAR_16, 8);
            VAR_13[VAR_9] = VAR_3[FUNC_0(VAR_18, 95)];
        }

        VAR_11 = 0;
        VAR_12 = VAR_13[0];


        VAR_9 = 2;
        while (VAR_9 < VAR_5->frame_len) {
            if (VAR_5->version_b) {
                VAR_10 = VAR_9 + 16;
            } else {
                int VAR_19 = FUNC_3(VAR_16);
                if (VAR_19) {
                    VAR_19 = FUNC_2(VAR_16, 4);
                    VAR_10 = VAR_9 + VAR_4[VAR_19] * 8;
                } else {
                    VAR_10 = VAR_9 + 8;
                }
            }

            VAR_10 = FUNC_0(VAR_10, VAR_5->frame_len);

            VAR_14 = FUNC_2(VAR_16, 4);
            if (VAR_14 == 0) {
                FUNC_8(VAR_17 + VAR_9, 0, (VAR_10 - VAR_9) * sizeof(*VAR_17));
                VAR_9 = VAR_10;
                while (VAR_5->bands[VAR_11] < VAR_9)
                    VAR_12 = VAR_13[VAR_11++];
            } else {
                while (VAR_9 < VAR_10) {
                    if (VAR_5->bands[VAR_11] == VAR_9)
                        VAR_12 = VAR_13[VAR_11++];
                    VAR_15 = FUNC_2(VAR_16, VAR_14);
                    if (VAR_15) {
                        int VAR_20;
                        VAR_20 = FUNC_3(VAR_16);
                        if (VAR_20)
                            VAR_17[VAR_9] = -VAR_12 * VAR_15;
                        else
                            VAR_17[VAR_9] = VAR_12 * VAR_15;
                    } else {
                        VAR_17[VAR_9] = 0.0f;
                    }
                    VAR_9++;
                }
            }
        }

        if (VAR_1 && VAR_7) {
            VAR_17[0] /= 0.5;
            VAR_5->trans.dct.dct_calc(&VAR_5->trans.dct, VAR_17);
        }
        else if (VAR_2)
            VAR_5->trans.rdft.rdft_calc(&VAR_5->trans.rdft, VAR_17);
    }

    for (VAR_8 = 0; VAR_8 < VAR_5->channels; VAR_8++) {
        int VAR_21;
        int VAR_22 = VAR_5->overlap_len * VAR_5->channels;
        if (!VAR_5->first) {
            VAR_21 = VAR_8;
            for (VAR_9 = 0; VAR_9 < VAR_5->overlap_len; VAR_9++, VAR_21 += VAR_5->channels)
                VAR_6[VAR_8][VAR_9] = (VAR_5->previous[VAR_8][VAR_9] * (VAR_22 - VAR_21) +
                                      VAR_6[VAR_8][VAR_9] * VAR_21) / VAR_22;
        }
        FUNC_7(VAR_5->previous[VAR_8], &VAR_6[VAR_8][VAR_5->frame_len - VAR_5->overlap_len],
               VAR_5->overlap_len * sizeof(*VAR_5->previous[VAR_8]));
    }

    VAR_5->first = 0;

    return 0;
}
