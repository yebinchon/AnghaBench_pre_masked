
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c2; int c3; int c4; int c5; int c6; int c7; TYPE_2__* dst; TYPE_2__* src; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_4__ {int width; int* linesize; unsigned char** data; int height; } ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterContext ;


 unsigned char FUNC_0 (int const) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    const ThreadData *VAR_4 = VAR_1;
    const AVFrame *VAR_5 = VAR_4->src;
    AVFrame *VAR_6 = VAR_4->dst;
    const int VAR_7 = FUNC_1(VAR_5->height, 2) >> 1;
    const int VAR_8 = VAR_5->width;
    const int VAR_9 = ((VAR_7 * VAR_2 ) / VAR_3) << 1;
    const int VAR_10 = ((VAR_7 * (VAR_2+1)) / VAR_3) << 1;
    const int VAR_11 = VAR_5->linesize[0];
    const int VAR_12 = VAR_5->linesize[1];
    const int VAR_13 = VAR_6->linesize[0];
    const int VAR_14 = VAR_6->linesize[1];
    const unsigned char *VAR_15 = VAR_5->data[0] + VAR_11 * VAR_9;
    const unsigned char *VAR_16 = VAR_5->data[1] + VAR_12 * (VAR_9 >> 1);
    const unsigned char *VAR_17 = VAR_5->data[2] + VAR_12 * (VAR_9 >> 1);
    const unsigned char *VAR_18 = VAR_5->data[0] + VAR_11 * (VAR_9 + 1);
    unsigned char *VAR_19 = VAR_6->data[1] + VAR_14 * (VAR_9 >> 1);
    unsigned char *VAR_20 = VAR_6->data[2] + VAR_14 * (VAR_9 >> 1);
    unsigned char *VAR_21 = VAR_6->data[0] + VAR_13 * VAR_9;
    unsigned char *VAR_22 = VAR_6->data[0] + VAR_13 * (VAR_9 + 1);
    const int VAR_23 = VAR_4->c2;
    const int VAR_24 = VAR_4->c3;
    const int VAR_25 = VAR_4->c4;
    const int VAR_26 = VAR_4->c5;
    const int VAR_27 = VAR_4->c6;
    const int VAR_28 = VAR_4->c7;
    int VAR_29, VAR_30;

    for (VAR_30 = VAR_9; VAR_30 < VAR_10; VAR_30 += 2) {
        for (VAR_29 = 0; VAR_29 < VAR_8; VAR_29 += 2) {
            const int VAR_31 = VAR_16[VAR_29 >> 1] - 128;
            const int VAR_32 = VAR_17[VAR_29 >> 1] - 128;
            const int VAR_33 = VAR_23 * VAR_31 + VAR_24 * VAR_32 + 1081344;
            VAR_21[VAR_29 + 0] = FUNC_0((65536 * (VAR_15[VAR_29 + 0] - 16) + VAR_33) >> 16);
            VAR_21[VAR_29 + 1] = FUNC_0((65536 * (VAR_15[VAR_29 + 1] - 16) + VAR_33) >> 16);
            VAR_22[VAR_29 + 0] = FUNC_0((65536 * (VAR_18[VAR_29 + 0] - 16) + VAR_33) >> 16);
            VAR_22[VAR_29 + 1] = FUNC_0((65536 * (VAR_18[VAR_29 + 1] - 16) + VAR_33) >> 16);
            VAR_19[VAR_29 >> 1] = FUNC_0((VAR_25 * VAR_31 + VAR_26 * VAR_32 + 8421376) >> 16);
            VAR_20[VAR_29 >> 1] = FUNC_0((VAR_27 * VAR_31 + VAR_28 * VAR_32 + 8421376) >> 16);
        }
        VAR_15 += VAR_11 << 1;
        VAR_21 += VAR_13 << 1;
        VAR_18 += VAR_11 << 1;
        VAR_22 += VAR_13 << 1;
        VAR_16 += VAR_12;
        VAR_17 += VAR_12;
        VAR_19 += VAR_14;
        VAR_20 += VAR_14;
    }

    return 0;
}
