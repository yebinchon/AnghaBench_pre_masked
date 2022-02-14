
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_6__ {int nb_samples; int** data; } ;
struct TYPE_5__ {int* data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (int*,int const*,int) ;
 int FUNC_6 (int*,int,int) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_4, void *VAR_5,
                               int *VAR_6, AVPacket *VAR_7)
{
    AVFrame *VAR_8 = VAR_5;
    const uint8_t *VAR_9 = VAR_7->data;
    int VAR_10 = VAR_7->size;

    int VAR_11, VAR_12, VAR_13;
    int VAR_14 = 128;
    uint8_t *VAR_15;
    uint8_t *VAR_16;

    if (!VAR_10)
        return 0;

    if (VAR_10 < 4) {
        FUNC_3(VAR_4, VAR_1, "packet is too small\n");
        return FUNC_0(VAR_2);
    }

    VAR_12 = FUNC_1(&VAR_9[0]);
    VAR_11 = FUNC_1(&VAR_9[2]);
    VAR_9 += 4;

    if (VAR_11 > VAR_10) {
        FUNC_3(VAR_4, VAR_1, "Frame data is larger than input buffer\n");
        return VAR_0;
    }


    VAR_8->nb_samples = VAR_12;
    if ((VAR_13 = FUNC_4(VAR_4, VAR_8, 0)) < 0)
        return VAR_13;
    VAR_15 = VAR_8->data[0];
    VAR_16 = VAR_15 + VAR_12;

    if (VAR_11 == VAR_12) {
        FUNC_5(VAR_15, VAR_9, VAR_12);
        *VAR_6 = 1;
        return VAR_10;
    }

    while (VAR_15 < VAR_16 && VAR_9 - VAR_7->data < VAR_10) {
        int VAR_17, VAR_18, VAR_19;
        uint8_t VAR_20;
        VAR_17 = *VAR_9 >> 6;
        VAR_20 = *VAR_9 & 0x3F;
        VAR_9++;


        switch (VAR_17) {
        case 0: VAR_18 = 4 * (VAR_20 + 1); break;
        case 1: VAR_18 = 2 * (VAR_20 + 1); break;
        case 2: VAR_18 = (VAR_20 & 0x20) ? 1 : VAR_20 + 1; break;
        default: VAR_18 = VAR_20 + 1; break;
        }
        if (VAR_16 - VAR_15 < VAR_18)
            break;


        VAR_19 = ((VAR_17 == 2 && (VAR_20 & 0x20)) || VAR_17 == 3) ? 0 : VAR_20 + 1;
        if ((VAR_9 - VAR_7->data) + VAR_19 > VAR_10)
            break;

        switch (VAR_17) {
        case 0:
            for (VAR_20++; VAR_20 > 0; VAR_20--) {
                VAR_17 = *VAR_9++;
                VAR_14 += ( VAR_17 & 0x3) - 2;
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
                VAR_14 += ((VAR_17 >> 2) & 0x3) - 2;
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
                VAR_14 += ((VAR_17 >> 4) & 0x3) - 2;
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
                VAR_14 += (VAR_17 >> 6) - 2;
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
            }
            break;
        case 1:
            for (VAR_20++; VAR_20 > 0; VAR_20--) {
                VAR_17 = *VAR_9++;
                VAR_14 += VAR_3[VAR_17 & 0xF];
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
                VAR_14 += VAR_3[VAR_17 >> 4];
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
            }
            break;
        case 2:
            if (VAR_20 & 0x20) {
                int8_t VAR_21;
                VAR_21 = VAR_20;
                VAR_21 <<= 3;
                VAR_14 += VAR_21 >> 3;
                VAR_14 = FUNC_2(VAR_14);
                *VAR_15++ = VAR_14;
            } else {
                FUNC_5(VAR_15, VAR_9, VAR_18);
                VAR_15 += VAR_18;
                VAR_9 += VAR_18;
                VAR_14 = VAR_9[-1];
            }
            break;
        default:
            FUNC_6(VAR_15, VAR_14, VAR_18);
            VAR_15 += VAR_18;
        }
    }

    VAR_8->nb_samples = VAR_15 - VAR_8->data[0];
    *VAR_6 = 1;

    return VAR_10;
}
