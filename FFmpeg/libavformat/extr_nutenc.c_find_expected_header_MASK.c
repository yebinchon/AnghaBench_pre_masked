
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int sample_rate; scalar_t__ codec_id; } ;
typedef TYPE_1__ AVCodecParameters ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,unsigned int) ;
 int*** VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_2(AVCodecParameters *VAR_8, int VAR_9, int VAR_10,
                                uint8_t VAR_11[64])
{
    int VAR_12 = VAR_8->sample_rate;

    if (VAR_9 > 4096)
        return 0;

    FUNC_0(VAR_11, 1);

    if (VAR_8->codec_id == VAR_5) {
        if (VAR_10) {
            return 3;
        } else {
            VAR_11[3] = 0xB6;
            return 4;
        }
    } else if (VAR_8->codec_id == VAR_3 ||
               VAR_8->codec_id == VAR_4) {
        return 3;
    } else if (VAR_8->codec_id == VAR_0) {
        return 3;
    } else if (VAR_8->codec_id == VAR_2 ||
               VAR_8->codec_id == VAR_1) {
        int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
        int VAR_18 = VAR_8->codec_id == VAR_2 ? 3 : 2;
        unsigned int VAR_19 = 0xFFF00000;

        VAR_13 = VAR_12 < (24000 + 32000) / 2;
        VAR_14 = VAR_12 < (12000 + 16000) / 2;
        VAR_12 <<= VAR_13 + VAR_14;
        if (VAR_12 < (32000 + 44100) / 2) VAR_15 = 2;
        else if (VAR_12 < (44100 + 48000) / 2) VAR_15 = 0;
        else VAR_15 = 1;

        VAR_12 = VAR_7[VAR_15] >> (VAR_13 + VAR_14);

        for (VAR_16 = 2; VAR_16 < 30; VAR_16++) {
            VAR_17 =
                VAR_6[VAR_13][VAR_18 - 1][VAR_16 >> 1];
            VAR_17 = (VAR_17 * 144000) / (VAR_12 << VAR_13) +
                (VAR_16 & 1);

            if (VAR_17 == VAR_9)
                break;
        }

        VAR_19 |= (!VAR_13) << 19;
        VAR_19 |= (4 - VAR_18) << 17;
        VAR_19 |= 1 << 16;
        FUNC_1(VAR_11, VAR_19);
        if (VAR_9 <= 0)
            return 2;
        if (VAR_16 == 30)
            return -1;

        VAR_19 |= (VAR_16 >> 1) << 12;
        VAR_19 |= VAR_15 << 10;
        VAR_19 |= (VAR_16 & 1) << 9;

        return 2;


    }
    return 0;
}
