
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* samples_offset; int**** sb_samples; short** samples_buf; short* filter_bank; } ;
typedef TYPE_1__ MpegAudioContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (short*,short*,int) ;

__attribute__((used)) static void FUNC_2(MpegAudioContext *VAR_2, int VAR_3, const short *VAR_4, int VAR_5)
{
    short *VAR_6, *VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12[64];
    int VAR_13[32];
    int *VAR_14;

    VAR_9 = VAR_2->samples_offset[VAR_3];
    VAR_14 = &VAR_2->sb_samples[VAR_3][0][0][0];
    for(VAR_11=0;VAR_11<36;VAR_11++) {

        for(VAR_10=0;VAR_10<32;VAR_10++) {
            VAR_2->samples_buf[VAR_3][VAR_9 + (31 - VAR_10)] = VAR_4[0];
            VAR_4 += VAR_5;
        }


        VAR_6 = VAR_2->samples_buf[VAR_3] + VAR_9;
        VAR_7 = VAR_2->filter_bank;

        for(VAR_10=0;VAR_10<64;VAR_10++) {
            VAR_8 = VAR_6[0*64] * VAR_7[0*64];
            VAR_8 += VAR_6[1*64] * VAR_7[1*64];
            VAR_8 += VAR_6[2*64] * VAR_7[2*64];
            VAR_8 += VAR_6[3*64] * VAR_7[3*64];
            VAR_8 += VAR_6[4*64] * VAR_7[4*64];
            VAR_8 += VAR_6[5*64] * VAR_7[5*64];
            VAR_8 += VAR_6[6*64] * VAR_7[6*64];
            VAR_8 += VAR_6[7*64] * VAR_7[7*64];
            VAR_12[VAR_10] = VAR_8;
            VAR_6++;
            VAR_7++;
        }
        VAR_13[0] = VAR_12[16] >> VAR_1;
        for( VAR_10=1; VAR_10<=16; VAR_10++ ) VAR_13[VAR_10] = (VAR_12[VAR_10+16]+VAR_12[16-VAR_10]) >> VAR_1;
        for( VAR_10=17; VAR_10<=31; VAR_10++ ) VAR_13[VAR_10] = (VAR_12[VAR_10+16]-VAR_12[80-VAR_10]) >> VAR_1;

        FUNC_0(VAR_14, VAR_13);


        VAR_9 -= 32;
        VAR_14 += 32;

        if (VAR_9 < 0) {
            FUNC_1(VAR_2->samples_buf[VAR_3] + VAR_0 - (512 - 32),
                    VAR_2->samples_buf[VAR_3], (512 - 32) * 2);
            VAR_9 = VAR_0 - 512;
        }
    }
    VAR_2->samples_offset[VAR_3] = VAR_9;
}
