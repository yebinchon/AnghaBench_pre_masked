
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int8_t ;
struct TYPE_11__ {int height; int width; } ;
struct TYPE_10__ {int** data; int* linesize; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_2,
                             void *VAR_3, int *VAR_4,
                             AVPacket *VAR_5)
{
    AVFrame *VAR_6 = VAR_3;
    uint8_t *VAR_7, *VAR_8, *VAR_9;
    uint8_t VAR_10;
    int VAR_11, VAR_12, VAR_13;
    const uint8_t *VAR_14 = VAR_5->data;


    const int8_t *VAR_15 = (const int8_t*)VAR_14 + 16;

    if (VAR_5->size != 48 + VAR_2->height * VAR_2->width) {
        FUNC_0(VAR_2, VAR_1, "got a buffer with %d bytes when %d were expected\n",
               VAR_5->size, 48 + VAR_2->height * VAR_2->width);
        return VAR_0;
    }


    VAR_14 += 48;

    if ((VAR_13 = FUNC_1(VAR_2, VAR_6, 0)) < 0)
        return VAR_13;

    VAR_7 = VAR_6->data[0];
    VAR_8 = VAR_6->data[1];
    VAR_9 = VAR_6->data[2];


    for (VAR_12 = 0; VAR_12 < VAR_2->height; VAR_12++) {

        VAR_10 = *VAR_14++;
        VAR_8[0] = VAR_10 & 0xF0;
        VAR_7[0] = VAR_10 << 4;
        VAR_10 = *VAR_14++;
        VAR_9[0] = VAR_10 & 0xF0;
        VAR_7[1] = VAR_7[0] + VAR_15[VAR_10 & 0xF];
        VAR_7 += 2; VAR_8++; VAR_9++;


        for (VAR_11 = 1; VAR_11 < (VAR_2->width >> 1); VAR_11++) {
            VAR_10 = *VAR_14++;
            VAR_8[0] = VAR_8[-1] + VAR_15[VAR_10 >> 4];
            VAR_7[0] = VAR_7[-1] + VAR_15[VAR_10 & 0xF];
            VAR_10 = *VAR_14++;
            VAR_9[0] = VAR_9[-1] + VAR_15[VAR_10 >> 4];
            VAR_7[1] = VAR_7[ 0] + VAR_15[VAR_10 & 0xF];
            VAR_7 += 2; VAR_8++; VAR_9++;
        }
        VAR_7 += VAR_6->linesize[0] - VAR_2->width;
        VAR_8 += VAR_6->linesize[1] - (VAR_2->width >> 1);
        VAR_9 += VAR_6->linesize[2] - (VAR_2->width >> 1);
    }

    *VAR_4 = 1;

    return VAR_5->size;
}
