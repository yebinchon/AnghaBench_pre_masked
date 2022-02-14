
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int width; int height; } ;
typedef int DxaDecContext ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int,...) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int,int) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_4, DxaDecContext *VAR_5, uint8_t* VAR_6,
                     int VAR_7, uint8_t *VAR_8, int VAR_9, uint8_t *VAR_10)
{
    uint8_t *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    uint8_t *VAR_17 = VAR_8 + VAR_9;
    int VAR_18, VAR_19, VAR_20;
    int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    uint32_t VAR_26;

    if (12ULL + ((VAR_4->width * VAR_4->height) >> 4) + FUNC_1(VAR_8 + 0) + FUNC_1(VAR_8 + 4) > VAR_9)
        return VAR_0;

    VAR_11 = VAR_8 + 12;
    VAR_12 = VAR_11 + ((VAR_4->width * VAR_4->height) >> 4);
    VAR_13 = VAR_12 + FUNC_1(VAR_8 + 0);
    VAR_14 = VAR_13 + FUNC_1(VAR_8 + 4);

    for(VAR_19 = 0; VAR_19 < VAR_4->height; VAR_19 += 4){
        for(VAR_18 = 0; VAR_18 < VAR_4->width; VAR_18 += 4){
            if (VAR_12 > VAR_17 || VAR_13 > VAR_17 || VAR_14 > VAR_17)
                return VAR_0;
            VAR_15 = VAR_6 + VAR_18;
            VAR_16 = VAR_10 + VAR_18;
            VAR_21 = *VAR_11++;
            switch(VAR_21){
            case 4:
                VAR_22 = (*VAR_13) >> 4; if(VAR_22 & 8) VAR_22 = 8 - VAR_22;
                VAR_23 = (*VAR_13++) & 0xF; if(VAR_23 & 8) VAR_23 = 8 - VAR_23;
                if (VAR_18 < -VAR_22 || VAR_4->width - VAR_18 - 4 < VAR_22 ||
                    VAR_19 < -VAR_23 || VAR_4->height - VAR_19 - 4 < VAR_23) {
                    FUNC_2(VAR_4, VAR_1, "MV %d %d out of bounds\n", VAR_22,VAR_23);
                    return VAR_0;
                }
                VAR_16 += VAR_22 + VAR_23*VAR_7;
            case 0:
            case 5:
                for(VAR_23 = 0; VAR_23 < 4; VAR_23++){
                    FUNC_3(VAR_15, VAR_16, 4);
                    VAR_15 += VAR_7;
                    VAR_16 += VAR_7;
                }
                break;
            case 1:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                if(VAR_21 == 1){
                    VAR_26 = FUNC_0(VAR_14);
                    VAR_14 += 2;
                }else{
                    VAR_21 -= 10;
                    VAR_26 = ((VAR_14[0] & 0xF0) << VAR_2[VAR_21]) | ((VAR_14[0] & 0xF) << VAR_3[VAR_21]);
                    VAR_14++;
                }
                for(VAR_23 = 0; VAR_23 < 4; VAR_23++){
                    for(VAR_22 = 0; VAR_22 < 4; VAR_22++){
                        VAR_15[VAR_22] = (VAR_26 & 0x8000) ? *VAR_12++ : VAR_16[VAR_22];
                        VAR_26 <<= 1;
                    }
                    VAR_15 += VAR_7;
                    VAR_16 += VAR_7;
                }
                break;
            case 2:
                for(VAR_23 = 0; VAR_23 < 4; VAR_23++){
                    FUNC_4(VAR_15, VAR_12[0], 4);
                    VAR_15 += VAR_7;
                }
                VAR_12++;
                break;
            case 3:
                for(VAR_23 = 0; VAR_23 < 4; VAR_23++){
                    FUNC_3(VAR_15, VAR_12, 4);
                    VAR_12 += 4;
                    VAR_15 += VAR_7;
                }
                break;
            case 8:
                VAR_26 = *VAR_14++;
                for(VAR_20 = 0; VAR_20 < 4; VAR_20++){
                    VAR_24 = ((VAR_20 & 1) << 1) + ((VAR_20 & 2) * VAR_7);
                    VAR_25 = ((VAR_20 & 1) << 1) + ((VAR_20 & 2) * VAR_7);
                    VAR_16 = VAR_10 + VAR_18 + VAR_25;
                    switch(VAR_26 & 0xC0){
                    case 0x80:
                        VAR_22 = (*VAR_13) >> 4; if(VAR_22 & 8) VAR_22 = 8 - VAR_22;
                        VAR_23 = (*VAR_13++) & 0xF; if(VAR_23 & 8) VAR_23 = 8 - VAR_23;
                        if (VAR_18 + 2*(VAR_20 & 1) < -VAR_22 || VAR_4->width - VAR_18 - 2*(VAR_20 & 1) - 2 < VAR_22 ||
                            VAR_19 + (VAR_20 & 2) < -VAR_23 || VAR_4->height - VAR_19 - (VAR_20 & 2) - 2 < VAR_23) {
                            FUNC_2(VAR_4, VAR_1, "MV %d %d out of bounds\n", VAR_22,VAR_23);
                            return VAR_0;
                        }
                        VAR_16 += VAR_22 + VAR_23*VAR_7;
                    case 0x00:
                        VAR_15[VAR_24 + 0 ] = VAR_16[0];
                        VAR_15[VAR_24 + 1 ] = VAR_16[1];
                        VAR_15[VAR_24 + 0 + VAR_7] = VAR_16[0 + VAR_7];
                        VAR_15[VAR_24 + 1 + VAR_7] = VAR_16[1 + VAR_7];
                        break;
                    case 0x40:
                        VAR_15[VAR_24 + 0 ] = VAR_12[0];
                        VAR_15[VAR_24 + 1 ] = VAR_12[0];
                        VAR_15[VAR_24 + 0 + VAR_7] = VAR_12[0];
                        VAR_15[VAR_24 + 1 + VAR_7] = VAR_12[0];
                        VAR_12++;
                        break;
                    case 0xC0:
                        VAR_15[VAR_24 + 0 ] = *VAR_12++;
                        VAR_15[VAR_24 + 1 ] = *VAR_12++;
                        VAR_15[VAR_24 + 0 + VAR_7] = *VAR_12++;
                        VAR_15[VAR_24 + 1 + VAR_7] = *VAR_12++;
                        break;
                    }
                    VAR_26 <<= 2;
                }
                break;
            case 32:
                VAR_26 = FUNC_0(VAR_14);
                VAR_14 += 2;
                for(VAR_23 = 0; VAR_23 < 4; VAR_23++){
                    for(VAR_22 = 0; VAR_22 < 4; VAR_22++){
                        VAR_15[VAR_22] = VAR_12[VAR_26 & 1];
                        VAR_26 >>= 1;
                    }
                    VAR_15 += VAR_7;
                    VAR_16 += VAR_7;
                }
                VAR_12 += 2;
                break;
            case 33:
            case 34:
                VAR_26 = FUNC_1(VAR_14);
                VAR_14 += 4;
                for(VAR_23 = 0; VAR_23 < 4; VAR_23++){
                    for(VAR_22 = 0; VAR_22 < 4; VAR_22++){
                        VAR_15[VAR_22] = VAR_12[VAR_26 & 3];
                        VAR_26 >>= 2;
                    }
                    VAR_15 += VAR_7;
                    VAR_16 += VAR_7;
                }
                VAR_12 += VAR_21 - 30;
                break;
            default:
                FUNC_2(VAR_4, VAR_1, "Unknown opcode %d\n", VAR_21);
                return VAR_0;
            }
        }
        VAR_6 += VAR_7 * 4;
        VAR_10 += VAR_7 * 4;
    }
    return 0;
}
