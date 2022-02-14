
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {scalar_t__ width; scalar_t__ height; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int* cursor_buf; TYPE_1__* final_frame; } ;
struct TYPE_5__ {int** data; int* linesize; } ;
typedef TYPE_2__ FICContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int*,int*,int,int*) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_0, int VAR_1, int VAR_2)
{
    FICContext *VAR_3 = VAR_0->priv_data;
    uint8_t *VAR_4 = VAR_3->cursor_buf;
    uint8_t *VAR_5[3];
    uint8_t VAR_6[4][1024];
    uint8_t VAR_7[3][256];
    int VAR_8, VAR_9, VAR_10;


    for (VAR_8 = 0; VAR_8 < 1024; VAR_8++) {
        VAR_6[0][VAR_8] = (( 25 * VAR_4[0] + 129 * VAR_4[1] + 66 * VAR_4[2]) / 255) + 16;
        VAR_6[1][VAR_8] = ((-38 * VAR_4[0] + 112 * VAR_4[1] + -74 * VAR_4[2]) / 255) + 128;
        VAR_6[2][VAR_8] = ((-18 * VAR_4[0] + 112 * VAR_4[1] + -94 * VAR_4[2]) / 255) + 128;
        VAR_6[3][VAR_8] = VAR_4[3];

        VAR_4 += 4;
    }


    for (VAR_8 = 0; VAR_8 < 32; VAR_8 += 2)
        for (VAR_9 = 0; VAR_9 < 32; VAR_9 += 2)
            for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
                VAR_7[VAR_10][16 * (VAR_8 / 2) + VAR_9 / 2] = (VAR_6[VAR_10 + 1][32 * VAR_8 + VAR_9 ] +
                                                   VAR_6[VAR_10 + 1][32 * VAR_8 + VAR_9 + 1] +
                                                   VAR_6[VAR_10 + 1][32 * (VAR_8 + 1) + VAR_9 ] +
                                                   VAR_6[VAR_10 + 1][32 * (VAR_8 + 1) + VAR_9 + 1]) / 4;


    for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
        VAR_5[VAR_8] = VAR_3->final_frame->data[VAR_8] +
                    (VAR_3->final_frame->linesize[VAR_8] * (VAR_2 >> !!VAR_8)) +
                    (VAR_1 >> !!VAR_8) + !!VAR_8;


    for (VAR_8 = 0; VAR_8 < FUNC_0(32, VAR_0->height - VAR_2) - 1; VAR_8 += 2) {
        int VAR_11 = FUNC_0(32, VAR_0->width - VAR_1);
        int VAR_12 = VAR_11 / 2;

        FUNC_1(VAR_5[0],
                        VAR_6[0] + VAR_8 * 32, VAR_11, VAR_6[3] + VAR_8 * 32);
        FUNC_1(VAR_5[0] + VAR_3->final_frame->linesize[0],
                        VAR_6[0] + (VAR_8 + 1) * 32, VAR_11, VAR_6[3] + (VAR_8 + 1) * 32);
        FUNC_1(VAR_5[1],
                        VAR_7[0] + (VAR_8 / 2) * 16, VAR_12, VAR_7[2] + (VAR_8 / 2) * 16);
        FUNC_1(VAR_5[2],
                        VAR_7[1] + (VAR_8 / 2) * 16, VAR_12, VAR_7[2] + (VAR_8 / 2) * 16);

        VAR_5[0] += VAR_3->final_frame->linesize[0] * 2;
        VAR_5[1] += VAR_3->final_frame->linesize[1];
        VAR_5[2] += VAR_3->final_frame->linesize[2];
    }
}
