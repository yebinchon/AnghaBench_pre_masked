
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c2; int c3; int c4; int c5; int c6; int c7; TYPE_2__* dst; TYPE_2__* src; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_4__ {int height; int width; int* linesize; unsigned char** data; } ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterContext ;


 unsigned char FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    const ThreadData *VAR_4 = VAR_1;
    const AVFrame *VAR_5 = VAR_4->src;
    AVFrame *VAR_6 = VAR_4->dst;
    const int VAR_7 = VAR_5->height;
    const int VAR_8 = VAR_5->width*2;
    const int VAR_9 = VAR_5->linesize[0];
    const int VAR_10 = VAR_6->linesize[0];
    const int VAR_11 = (VAR_7 * VAR_2 ) / VAR_3;
    const int VAR_12 = (VAR_7 * (VAR_2+1)) / VAR_3;
    const unsigned char *VAR_13 = VAR_5->data[0] + VAR_11 * VAR_9;
    unsigned char *VAR_14 = VAR_6->data[0] + VAR_11 * VAR_10;
    const int VAR_15 = VAR_4->c2;
    const int VAR_16 = VAR_4->c3;
    const int VAR_17 = VAR_4->c4;
    const int VAR_18 = VAR_4->c5;
    const int VAR_19 = VAR_4->c6;
    const int VAR_20 = VAR_4->c7;
    int VAR_21, VAR_22;

    for (VAR_22 = VAR_11; VAR_22 < VAR_12; VAR_22++) {
        for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21 += 4) {
            const int VAR_23 = VAR_13[VAR_21 + 0] - 128;
            const int VAR_24 = VAR_13[VAR_21 + 2] - 128;
            const int VAR_25 = VAR_15 * VAR_23 + VAR_16 * VAR_24 + 1081344;
            VAR_14[VAR_21 + 0] = FUNC_0((VAR_17 * VAR_23 + VAR_18 * VAR_24 + 8421376) >> 16);
            VAR_14[VAR_21 + 1] = FUNC_0((65536 * (VAR_13[VAR_21 + 1] - 16) + VAR_25) >> 16);
            VAR_14[VAR_21 + 2] = FUNC_0((VAR_19 * VAR_23 + VAR_20 * VAR_24 + 8421376) >> 16);
            VAR_14[VAR_21 + 3] = FUNC_0((65536 * (VAR_13[VAR_21 + 3] - 16) + VAR_25) >> 16);
        }
        VAR_13 += VAR_9;
        VAR_14 += VAR_10;
    }

    return 0;
}
