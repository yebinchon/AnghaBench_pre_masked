
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int** data; } ;
struct TYPE_5__ {int bits_per_pixel; scalar_t__ color_type; int height; int width; int image_linesize; } ;
typedef TYPE_1__ PNGDecContext ;
typedef TYPE_2__ AVFrame ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(PNGDecContext *VAR_1, AVFrame *VAR_2)
{
    if (VAR_1->bits_per_pixel == 1 && VAR_1->color_type == VAR_0) {
        int VAR_3, VAR_4, VAR_5;
        uint8_t *VAR_6 = VAR_2->data[0];
        for (VAR_4 = 0; VAR_4 < VAR_1->height; VAR_4++) {
            VAR_3 = VAR_1->width / 8;
            for (VAR_5 = 7; VAR_5 >= 1; VAR_5--)
                if ((VAR_1->width&7) >= VAR_5)
                    VAR_6[8*VAR_3 + VAR_5 - 1] = (VAR_6[VAR_3]>>(8-VAR_5)) & 1;
            for (VAR_3--; VAR_3 >= 0; VAR_3--) {
                VAR_6[8*VAR_3 + 7]= VAR_6[VAR_3] & 1;
                VAR_6[8*VAR_3 + 6]= (VAR_6[VAR_3]>>1) & 1;
                VAR_6[8*VAR_3 + 5]= (VAR_6[VAR_3]>>2) & 1;
                VAR_6[8*VAR_3 + 4]= (VAR_6[VAR_3]>>3) & 1;
                VAR_6[8*VAR_3 + 3]= (VAR_6[VAR_3]>>4) & 1;
                VAR_6[8*VAR_3 + 2]= (VAR_6[VAR_3]>>5) & 1;
                VAR_6[8*VAR_3 + 1]= (VAR_6[VAR_3]>>6) & 1;
                VAR_6[8*VAR_3 + 0]= VAR_6[VAR_3]>>7;
            }
            VAR_6 += VAR_1->image_linesize;
        }
    } else if (VAR_1->bits_per_pixel == 2) {
        int VAR_7, VAR_8;
        uint8_t *VAR_9 = VAR_2->data[0];
        for (VAR_8 = 0; VAR_8 < VAR_1->height; VAR_8++) {
            VAR_7 = VAR_1->width / 4;
            if (VAR_1->color_type == VAR_0) {
                if ((VAR_1->width&3) >= 3) VAR_9[4*VAR_7 + 2]= (VAR_9[VAR_7] >> 2) & 3;
                if ((VAR_1->width&3) >= 2) VAR_9[4*VAR_7 + 1]= (VAR_9[VAR_7] >> 4) & 3;
                if ((VAR_1->width&3) >= 1) VAR_9[4*VAR_7 + 0]= VAR_9[VAR_7] >> 6;
                for (VAR_7--; VAR_7 >= 0; VAR_7--) {
                    VAR_9[4*VAR_7 + 3]= VAR_9[VAR_7] & 3;
                    VAR_9[4*VAR_7 + 2]= (VAR_9[VAR_7]>>2) & 3;
                    VAR_9[4*VAR_7 + 1]= (VAR_9[VAR_7]>>4) & 3;
                    VAR_9[4*VAR_7 + 0]= VAR_9[VAR_7]>>6;
                }
            } else {
                if ((VAR_1->width&3) >= 3) VAR_9[4*VAR_7 + 2]= ((VAR_9[VAR_7]>>2) & 3)*0x55;
                if ((VAR_1->width&3) >= 2) VAR_9[4*VAR_7 + 1]= ((VAR_9[VAR_7]>>4) & 3)*0x55;
                if ((VAR_1->width&3) >= 1) VAR_9[4*VAR_7 + 0]= ( VAR_9[VAR_7]>>6 )*0x55;
                for (VAR_7--; VAR_7 >= 0; VAR_7--) {
                    VAR_9[4*VAR_7 + 3]= ( VAR_9[VAR_7] & 3)*0x55;
                    VAR_9[4*VAR_7 + 2]= ((VAR_9[VAR_7]>>2) & 3)*0x55;
                    VAR_9[4*VAR_7 + 1]= ((VAR_9[VAR_7]>>4) & 3)*0x55;
                    VAR_9[4*VAR_7 + 0]= ( VAR_9[VAR_7]>>6 )*0x55;
                }
            }
            VAR_9 += VAR_1->image_linesize;
        }
    } else if (VAR_1->bits_per_pixel == 4) {
        int VAR_10, VAR_11;
        uint8_t *VAR_12 = VAR_2->data[0];
        for (VAR_11 = 0; VAR_11 < VAR_1->height; VAR_11++) {
            VAR_10 = VAR_1->width/2;
            if (VAR_1->color_type == VAR_0) {
                if (VAR_1->width&1) VAR_12[2*VAR_10+0]= VAR_12[VAR_10]>>4;
                for (VAR_10--; VAR_10 >= 0; VAR_10--) {
                    VAR_12[2*VAR_10 + 1] = VAR_12[VAR_10] & 15;
                    VAR_12[2*VAR_10 + 0] = VAR_12[VAR_10] >> 4;
                }
            } else {
                if (VAR_1->width & 1) VAR_12[2*VAR_10 + 0]= (VAR_12[VAR_10] >> 4) * 0x11;
                for (VAR_10--; VAR_10 >= 0; VAR_10--) {
                    VAR_12[2*VAR_10 + 1] = (VAR_12[VAR_10] & 15) * 0x11;
                    VAR_12[2*VAR_10 + 0] = (VAR_12[VAR_10] >> 4) * 0x11;
                }
            }
            VAR_12 += VAR_1->image_linesize;
        }
    }
}
