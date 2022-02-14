
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* cbgain; int* cindex; scalar_t__* cbsign; } ;
struct TYPE_5__ {int bitrate; int* prev_g1; double last_codebook_gain; int erasure_count; TYPE_1__ frame; } ;
typedef TYPE_2__ QCELPContext ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 double* VAR_4 ;

__attribute__((used)) static void FUNC_2(QCELPContext *VAR_5, float *VAR_6)
{
    int VAR_7, VAR_8, VAR_9[16];
    float VAR_10;

    if (VAR_5->bitrate >= VAR_2) {
        switch (VAR_5->bitrate) {
        case 129: VAR_8 = 16; break;
        case 128: VAR_8 = 4; break;
        default: VAR_8 = 5;
        }
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
            VAR_9[VAR_7] = 4 * VAR_5->frame.cbgain[VAR_7];
            if (VAR_5->bitrate == 129 && !((VAR_7 + 1) & 3)) {
                VAR_9[VAR_7] += FUNC_1((VAR_9[VAR_7 - 1] + VAR_9[VAR_7 - 2] + VAR_9[VAR_7 - 3]) / 3 - 6, 0, 32);
            }

            VAR_6[VAR_7] = VAR_4[VAR_9[VAR_7]];

            if (VAR_5->frame.cbsign[VAR_7]) {
                VAR_6[VAR_7] = -VAR_6[VAR_7];
                VAR_5->frame.cindex[VAR_7] = (VAR_5->frame.cindex[VAR_7] - 89) & 127;
            }
        }

        VAR_5->prev_g1[0] = VAR_9[VAR_7 - 2];
        VAR_5->prev_g1[1] = VAR_9[VAR_7 - 1];
        VAR_5->last_codebook_gain = VAR_4[VAR_9[VAR_7 - 1]];

        if (VAR_5->bitrate == VAR_2) {

            VAR_6[7] = VAR_6[4];
            VAR_6[6] = 0.4 * VAR_6[3] + 0.6 * VAR_6[4];
            VAR_6[5] = VAR_6[3];
            VAR_6[4] = 0.8 * VAR_6[2] + 0.2 * VAR_6[3];
            VAR_6[3] = 0.2 * VAR_6[1] + 0.8 * VAR_6[2];
            VAR_6[2] = VAR_6[1];
            VAR_6[1] = 0.6 * VAR_6[0] + 0.4 * VAR_6[1];
        }
    } else if (VAR_5->bitrate != VAR_3) {
        if (VAR_5->bitrate == VAR_1) {
            VAR_9[0] = 2 * VAR_5->frame.cbgain[0] +
                    FUNC_1((VAR_5->prev_g1[0] + VAR_5->prev_g1[1]) / 2 - 5, 0, 54);
            VAR_8 = 8;
        } else {
            FUNC_0(VAR_5->bitrate == VAR_0);

            VAR_9[0] = VAR_5->prev_g1[1];
            switch (VAR_5->erasure_count) {
            case 1 : break;
            case 2 : VAR_9[0] -= 1; break;
            case 3 : VAR_9[0] -= 2; break;
            default: VAR_9[0] -= 6;
            }
            if (VAR_9[0] < 0)
                VAR_9[0] = 0;
            VAR_8 = 4;
        }

        VAR_10 = 0.5 * (VAR_4[VAR_9[0]] - VAR_5->last_codebook_gain) / VAR_8;
        for (VAR_7 = 1; VAR_7 <= VAR_8; VAR_7++)
                VAR_6[VAR_7 - 1] = VAR_5->last_codebook_gain + VAR_10 * VAR_7;

        VAR_5->last_codebook_gain = VAR_6[VAR_7 - 2];
        VAR_5->prev_g1[0] = VAR_5->prev_g1[1];
        VAR_5->prev_g1[1] = VAR_9[0];
    }
}
