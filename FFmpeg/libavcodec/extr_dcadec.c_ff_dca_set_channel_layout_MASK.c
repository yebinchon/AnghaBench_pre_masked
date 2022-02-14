
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int request_channel_layout; int channel_layout; int channels; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(AVCodecContext *VAR_4, int *VAR_5, int VAR_6)
{
    static const uint8_t VAR_7[28] = {
         2, 0, 1, 9, 10, 3, 8, 4, 5, 9, 10, 6, 7, 12,
        13, 14, 3, 6, 7, 11, 12, 14, 16, 15, 17, 8, 4, 5,
    };

    static const uint8_t VAR_8[28] = {
         2, 0, 1, 4, 5, 3, 8, 4, 5, 9, 10, 6, 7, 12,
        13, 14, 3, 9, 10, 11, 12, 14, 16, 15, 17, 8, 4, 5,
    };

    int VAR_9, VAR_10, VAR_11 = 0;

    if (VAR_4->request_channel_layout & VAR_0) {
        for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
            if (VAR_6 & (1U << VAR_9))
                VAR_5[VAR_11++] = VAR_9;
        VAR_4->channel_layout = VAR_6;
    } else {
        int VAR_12 = 0;
        int VAR_13[18];
        const uint8_t *VAR_14;
        if (VAR_6 == VAR_2 ||
            VAR_6 == VAR_3)
            VAR_14 = VAR_8;
        else
            VAR_14 = VAR_7;
        for (VAR_9 = 0; VAR_9 < 28; VAR_9++) {
            if (VAR_6 & (1 << VAR_9)) {
                VAR_10 = VAR_14[VAR_9];
                if (!(VAR_12 & (1 << VAR_10))) {
                    VAR_13[VAR_10] = VAR_9;
                    VAR_12 |= 1 << VAR_10;
                }
            }
        }
        for (VAR_10 = 0; VAR_10 < 18; VAR_10++)
            if (VAR_12 & (1 << VAR_10))
                VAR_5[VAR_11++] = VAR_13[VAR_10];
        VAR_4->channel_layout = VAR_12;
    }

    VAR_4->channels = VAR_11;
    return VAR_11;
}
