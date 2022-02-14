
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int sample1; int sample2; } ;
typedef int AVCodecContext ;
typedef TYPE_1__ ADPCMChannelStatus ;


 int FUNC_0 (int**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int,int) ;
 int** VAR_0 ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, int16_t *VAR_2, int16_t *VAR_3,
                     const uint8_t *VAR_4, ADPCMChannelStatus *VAR_5,
                     ADPCMChannelStatus *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10;
    int VAR_11,VAR_12,VAR_13,VAR_14;
    int VAR_15,VAR_16;
    int VAR_17,VAR_18,VAR_19;

    VAR_2 += VAR_8;
    if (VAR_7 == 1)
        VAR_3 = VAR_2 + 28;
    else
        VAR_3 += VAR_8;

    for(VAR_9=0;VAR_9<4;VAR_9++) {
        VAR_11 = 12 - (VAR_4[4+VAR_9*2] & 15);
        VAR_12 = VAR_4[4+VAR_9*2] >> 4;
        if (VAR_12 >= FUNC_0(VAR_0)) {
            FUNC_2(VAR_1, "unknown XA-ADPCM filter %d", VAR_12);
            VAR_12=0;
        }
        VAR_13 = VAR_0[VAR_12][0];
        VAR_14 = VAR_0[VAR_12][1];

        VAR_15 = VAR_5->sample1;
        VAR_16 = VAR_5->sample2;

        for(VAR_10=0;VAR_10<28;VAR_10++) {
            VAR_17 = VAR_4[16+VAR_9+VAR_10*4];

            VAR_19 = FUNC_3(VAR_17, 4);
            VAR_18 = ( VAR_19<<VAR_11 ) + ((VAR_15*VAR_13 + VAR_16*VAR_14+32)>>6);
            VAR_16 = VAR_15;
            VAR_15 = FUNC_1(VAR_18);
            VAR_2[VAR_10] = VAR_15;
        }

        if (VAR_7 == 2) {
            VAR_5->sample1 = VAR_15;
            VAR_5->sample2 = VAR_16;
            VAR_15 = VAR_6->sample1;
            VAR_16 = VAR_6->sample2;
        }

        VAR_11 = 12 - (VAR_4[5+VAR_9*2] & 15);
        VAR_12 = VAR_4[5+VAR_9*2] >> 4;
        if (VAR_12 >= FUNC_0(VAR_0)) {
            FUNC_2(VAR_1, "unknown XA-ADPCM filter %d", VAR_12);
            VAR_12=0;
        }

        VAR_13 = VAR_0[VAR_12][0];
        VAR_14 = VAR_0[VAR_12][1];

        for(VAR_10=0;VAR_10<28;VAR_10++) {
            VAR_17 = VAR_4[16+VAR_9+VAR_10*4];

            VAR_19 = FUNC_3(VAR_17 >> 4, 4);
            VAR_18 = ( VAR_19<<VAR_11 ) + ((VAR_15*VAR_13 + VAR_16*VAR_14+32)>>6);
            VAR_16 = VAR_15;
            VAR_15 = FUNC_1(VAR_18);
            VAR_3[VAR_10] = VAR_15;
        }

        if (VAR_7 == 2) {
            VAR_6->sample1 = VAR_15;
            VAR_6->sample2 = VAR_16;
        } else {
            VAR_5->sample1 = VAR_15;
            VAR_5->sample2 = VAR_16;
        }

        VAR_2 += 28 * (3 - VAR_7);
        VAR_3 += 28 * (3 - VAR_7);
    }

    return 0;
}
