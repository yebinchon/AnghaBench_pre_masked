
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int height; } ;
struct TYPE_6__ {int* linesize; void*** data; } ;
typedef int GetByteContext ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void**,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (void**,void*,int) ;

__attribute__((used)) static int FUNC_13(AVCodecContext *VAR_3, AVFrame *VAR_4,
                                   int VAR_5, GetByteContext *VAR_6)
{
    uint8_t *VAR_7, *VAR_8;
    int VAR_9, VAR_10, VAR_11=VAR_3->height - 1, VAR_12=0, VAR_13;
    uint16_t VAR_14;
    uint32_t VAR_15;
    unsigned int VAR_16= FUNC_0(VAR_4->linesize[0]) / (VAR_5 >> 3);

    VAR_7 = VAR_4->data[0] + (VAR_3->height - 1) * VAR_4->linesize[0];
    VAR_8 = VAR_7 + FUNC_0(VAR_4->linesize[0]);

    while (FUNC_5(VAR_6) > 0) {
        VAR_9 = FUNC_6(VAR_6);
        if(VAR_9 == 0) {
            VAR_10 = FUNC_4(VAR_6);
            if(VAR_10 == 0) {
                if (--VAR_11 < 0) {
                    if (FUNC_2(VAR_6) == 1) {
                        return 0;
                    } else {
                        FUNC_1(VAR_3, VAR_1,
                               "Next line is beyond picture bounds (%d bytes left)\n",
                               FUNC_5(VAR_6));
                        return VAR_0;
                    }
                }
                VAR_7 = VAR_4->data[0] + VAR_11 * VAR_4->linesize[0];
                VAR_8 = VAR_7 + FUNC_0(VAR_4->linesize[0]);
                VAR_12 = 0;
                continue;
            } else if(VAR_10 == 1) {
                return 0;
            } else if(VAR_10 == 2) {
                VAR_9 = FUNC_4(VAR_6);
                VAR_10 = FUNC_4(VAR_6);
                VAR_11 -= VAR_10;
                VAR_12 += VAR_9;
                if (VAR_11 < 0 || VAR_12 >= VAR_16){
                    FUNC_1(VAR_3, VAR_1, "Skip beyond picture bounds\n");
                    return -1;
                }
                VAR_7 = VAR_4->data[0] + VAR_11 * VAR_4->linesize[0] + VAR_12 * (VAR_5 >> 3);
                VAR_8 = VAR_4->data[0] + VAR_11 * VAR_4->linesize[0] + FUNC_0(VAR_4->linesize[0]);
                continue;
            }

            if (VAR_7 + VAR_10 * (VAR_5 >> 3) > VAR_8) {
                FUNC_11(VAR_6, 2 * (VAR_5 >> 3));
                continue;
            } else if (FUNC_5(VAR_6) < VAR_10 * (VAR_5 >> 3)) {
                FUNC_1(VAR_3, VAR_1, "bytestream overrun\n");
                return VAR_0;
            }

            if ((VAR_5 == 8) || (VAR_5 == 24)) {
                FUNC_3(VAR_6, VAR_7, VAR_10 * (VAR_5 >> 3));
                VAR_7 += VAR_10 * (VAR_5 >> 3);


                if(VAR_5 == 8 && (VAR_10 & 1)) {
                    FUNC_11(VAR_6, 1);
                }
            } else if (VAR_5 == 16) {
                for(VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
                    *(uint16_t*)VAR_7 = FUNC_8(VAR_6);
                    VAR_7 += 2;
                }
            } else if (VAR_5 == 32) {
                for(VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
                    *(uint32_t*)VAR_7 = FUNC_10(VAR_6);
                    VAR_7 += 4;
                }
            }
            VAR_12 += VAR_10;
        } else {
            uint8_t VAR_17[3];
            if (VAR_7 + VAR_9 * (VAR_5 >> 3) > VAR_8)
                continue;

            switch(VAR_5){
            case 8:
                VAR_17[0] = FUNC_4(VAR_6);
                FUNC_12(VAR_7, VAR_17[0], VAR_9);
                VAR_7 += VAR_9;
                break;
            case 16:
                VAR_14 = FUNC_7(VAR_6);
                for(VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
                        *(uint16_t*)VAR_7 = VAR_14;
                        VAR_7 += 2;
                }
                break;
            case 24:
                VAR_17[0] = FUNC_4(VAR_6);
                VAR_17[1] = FUNC_4(VAR_6);
                VAR_17[2] = FUNC_4(VAR_6);
                for(VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
                        *VAR_7++ = VAR_17[0];
                        *VAR_7++ = VAR_17[1];
                        *VAR_7++ = VAR_17[2];
                }
                break;
            case 32:
                VAR_15 = FUNC_9(VAR_6);
                for(VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
                        *(uint32_t*)VAR_7 = VAR_15;
                        VAR_7 += 4;
                }
                break;
            }
            VAR_12 += VAR_9;
        }
    }

    FUNC_1(VAR_3, VAR_2, "MS RLE warning: no end-of-picture code\n");
    return 0;
}
