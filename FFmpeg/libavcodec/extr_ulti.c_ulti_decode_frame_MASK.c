
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int blocks; int height; int width; int* ulti_codebook; int frame; int gb; } ;
typedef TYPE_1__ UltimotionDecodeContext ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int* VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (int ,int,int,int*,int) ;
 int FUNC_11 (int ,int,int,int*,int,int) ;
 int FUNC_12 (int ,int,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_5,
                             void *VAR_6, int *VAR_7,
                             AVPacket *VAR_8)
{
    const uint8_t *VAR_9 = VAR_8->data;
    int VAR_10 = VAR_8->size;
    UltimotionDecodeContext *VAR_11=VAR_5->priv_data;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17 = 0, VAR_18 = 0;
    int VAR_19, VAR_20;
    int VAR_21;
    int VAR_22;

    if ((VAR_20 = FUNC_9(VAR_5, VAR_11->frame, 0)) < 0)
        return VAR_20;

    FUNC_8(&VAR_11->gb, VAR_9, VAR_10);

    while(!VAR_16) {
        int VAR_23;
        if(VAR_15 >= VAR_11->blocks || VAR_18 >= VAR_11->height)
            break;

        if (FUNC_6(&VAR_11->gb) < 1)
            goto err;
        VAR_23 = FUNC_7(&VAR_11->gb);
        if((VAR_23 & 0xF8) == 0x70) {
            switch(VAR_23) {
            case 0x70:
                VAR_12 = FUNC_5(&VAR_11->gb);
                if(VAR_12>1)
                    FUNC_1(VAR_5, VAR_2, "warning: modifier must be 0 or 1, got %i\n", VAR_12);
                break;
            case 0x71:
                VAR_13 = 1;
                break;
            case 0x72:
                VAR_14 = !VAR_14;
                break;
            case 0x73:
                VAR_16 = 1;
                break;
            case 0x74:
                VAR_21 = FUNC_5(&VAR_11->gb);
                if ((VAR_15 + VAR_21) >= VAR_11->blocks)
                    break;
                VAR_15 += VAR_21;
                VAR_17 += VAR_21 * 8;
                while(VAR_17 >= VAR_11->width) {
                    VAR_17 -= VAR_11->width;
                    VAR_18 += 8;
                }
                break;
            default:
                FUNC_1(VAR_5, VAR_2, "warning: unknown escape 0x%02X\n", VAR_23);
            }
        } else {
            int VAR_24;
            int VAR_25;
            int VAR_26 = 0;
            uint8_t VAR_27[4];
            int VAR_28 = 0, VAR_29 = 0;
            int VAR_30 = 0;
            if (VAR_14 || VAR_13) {
                VAR_13 = 0;
                VAR_25 = 1;
                VAR_30 = 0;
            } else {
                VAR_25 = 0;
                if (VAR_23) {
                    VAR_30 = FUNC_5(&VAR_11->gb);
                }
            }
            for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
                VAR_24 = (VAR_23 >> (6 - VAR_19*2)) & 3;
                if(!VAR_24)
                    continue;
                if(VAR_25) {
                    VAR_30 = FUNC_5(&VAR_11->gb);
                }
                VAR_28 = VAR_17 + VAR_4[VAR_19 * 2];
                VAR_29 = VAR_18 + VAR_4[(VAR_19 * 2) + 1];
                switch(VAR_24) {
                case 1:
                    VAR_22 = FUNC_5(&VAR_11->gb);

                    VAR_26 = VAR_3[(VAR_22 >> 6) & 0x3];

                    VAR_27[0] = VAR_22 & 0x3F;
                    VAR_27[1] = VAR_27[0];

                    if (VAR_26) {
                        VAR_27[2] = VAR_27[0]+1;
                        if (VAR_27[2] > 0x3F)
                            VAR_27[2] = 0x3F;
                        VAR_27[3] = VAR_27[2];
                    } else {
                        VAR_27[2] = VAR_27[0];
                        VAR_27[3] = VAR_27[0];
                    }
                    break;

                case 2:
                    if (VAR_12) {
                        VAR_22 = FUNC_3(&VAR_11->gb);

                        VAR_27[0] = (VAR_22 >> 18) & 0x3F;
                        VAR_27[1] = (VAR_22 >> 12) & 0x3F;
                        VAR_27[2] = (VAR_22 >> 6) & 0x3F;
                        VAR_27[3] = VAR_22 & 0x3F;
                        VAR_26 = 16;
                    } else {
                        VAR_22 = FUNC_2(&VAR_11->gb);

                        VAR_26 = (VAR_22 >> 12) & 0xF;
                        VAR_22 &= 0xFFF;
                        VAR_22 <<= 2;
                        VAR_27[0] = VAR_11->ulti_codebook[VAR_22];
                        VAR_27[1] = VAR_11->ulti_codebook[VAR_22 + 1];
                        VAR_27[2] = VAR_11->ulti_codebook[VAR_22 + 2];
                        VAR_27[3] = VAR_11->ulti_codebook[VAR_22 + 3];
                    }
                    break;

                case 3:
                    if (VAR_12) {
                        uint8_t VAR_31[16];

                        if (FUNC_6(&VAR_11->gb) < 12)
                            goto err;
                        VAR_22 = FUNC_4(&VAR_11->gb);
                        VAR_31[0] = (VAR_22 >> 18) & 0x3F;
                        VAR_31[1] = (VAR_22 >> 12) & 0x3F;
                        VAR_31[2] = (VAR_22 >> 6) & 0x3F;
                        VAR_31[3] = VAR_22 & 0x3F;

                        VAR_22 = FUNC_4(&VAR_11->gb);
                        VAR_31[4] = (VAR_22 >> 18) & 0x3F;
                        VAR_31[5] = (VAR_22 >> 12) & 0x3F;
                        VAR_31[6] = (VAR_22 >> 6) & 0x3F;
                        VAR_31[7] = VAR_22 & 0x3F;

                        VAR_22 = FUNC_4(&VAR_11->gb);
                        VAR_31[8] = (VAR_22 >> 18) & 0x3F;
                        VAR_31[9] = (VAR_22 >> 12) & 0x3F;
                        VAR_31[10] = (VAR_22 >> 6) & 0x3F;
                        VAR_31[11] = VAR_22 & 0x3F;

                        VAR_22 = FUNC_4(&VAR_11->gb);
                        VAR_31[12] = (VAR_22 >> 18) & 0x3F;
                        VAR_31[13] = (VAR_22 >> 12) & 0x3F;
                        VAR_31[14] = (VAR_22 >> 6) & 0x3F;
                        VAR_31[15] = VAR_22 & 0x3F;

                        FUNC_10(VAR_11->frame, VAR_28, VAR_29, VAR_31, VAR_30);
                    } else {
                        if (FUNC_6(&VAR_11->gb) < 4)
                            goto err;
                        VAR_22 = FUNC_7(&VAR_11->gb);
                        if(VAR_22 & 0x80) {
                            VAR_26 = (VAR_22 >> 4) & 0x7;
                            VAR_22 = (VAR_22 << 8) + FUNC_7(&VAR_11->gb);
                            VAR_27[0] = (VAR_22 >> 6) & 0x3F;
                            VAR_27[1] = VAR_22 & 0x3F;
                            VAR_27[2] = FUNC_7(&VAR_11->gb) & 0x3F;
                            VAR_27[3] = FUNC_7(&VAR_11->gb) & 0x3F;
                            FUNC_11(VAR_11->frame, VAR_28, VAR_29, VAR_27, VAR_30, VAR_26);
                        } else {
                            int VAR_32 = VAR_22;
                            int VAR_33 = FUNC_7(&VAR_11->gb);
                            VAR_27[0] = FUNC_7(&VAR_11->gb) & 0x3F;
                            VAR_27[1] = FUNC_7(&VAR_11->gb) & 0x3F;
                            FUNC_12(VAR_11->frame, VAR_28, VAR_29, VAR_32, VAR_33, VAR_27[0], VAR_27[1], VAR_30);
                        }
                    }
                    break;
                }
                if(VAR_24 != 3)
                    FUNC_11(VAR_11->frame, VAR_28, VAR_29, VAR_27, VAR_30, VAR_26);
            }
            VAR_15++;
                VAR_17 += 8;
            if(VAR_17 >= VAR_11->width) {
                VAR_17 = 0;
                VAR_18 += 8;
            }
        }
    }

    *VAR_7 = 1;
    if ((VAR_20 = FUNC_0(VAR_6, VAR_11->frame)) < 0)
        return VAR_20;

    return VAR_10;

err:
    FUNC_1(VAR_5, VAR_1,
           "Insufficient data\n");
    return VAR_0;
}
