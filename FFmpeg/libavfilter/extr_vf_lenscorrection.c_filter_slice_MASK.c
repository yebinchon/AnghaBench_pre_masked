
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_3__ {int w; int h; int xcenter; int ycenter; int plane; int* correction; TYPE_2__* out; TYPE_2__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_4__ {int* linesize; int ** data; } ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ThreadData *VAR_4 = VAR_1;
    AVFrame *VAR_5 = VAR_4->in;
    AVFrame *VAR_6 = VAR_4->out;

    const int VAR_7 = VAR_4->w, VAR_8 = VAR_4->h;
    const int VAR_9 = VAR_4->xcenter;
    const int VAR_10 = VAR_4->ycenter;
    const int VAR_11 = (VAR_8 * VAR_2 ) / VAR_3;
    const int VAR_12 = (VAR_8 * (VAR_2+1)) / VAR_3;
    const int VAR_13 = VAR_4->plane;
    const int VAR_14 = VAR_5->linesize[VAR_13];
    const int VAR_15 = VAR_6->linesize[VAR_13];
    const uint8_t *VAR_16 = VAR_5->data[VAR_13];
    uint8_t *VAR_17 = VAR_6->data[VAR_13] + VAR_11 * VAR_15;
    int VAR_18;
    for (VAR_18 = VAR_11; VAR_18 < VAR_12; VAR_18++, VAR_17 += VAR_15) {
        const int VAR_19 = VAR_18 - VAR_10;
        uint8_t *VAR_20 = VAR_17;
        int VAR_21;
        for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
            const int VAR_22 = VAR_21 - VAR_9;
            const int64_t VAR_23 = VAR_4->correction[VAR_21 + VAR_18*VAR_7];
            const int VAR_24 = VAR_9 + ((VAR_23 * VAR_22 + (1<<23))>>24);
            const int VAR_25 = VAR_10 + ((VAR_23 * VAR_19 + (1<<23))>>24);
            const char VAR_26 = VAR_24 > 0 && VAR_24 < VAR_7 - 1 && VAR_25 > 0 && VAR_25 < VAR_8 - 1;
            *VAR_20++ = VAR_26 ? VAR_16[VAR_25 * VAR_14 + VAR_24] : 0;
        }
    }
    return 0;
}
