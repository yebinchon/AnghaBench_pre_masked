
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_11__ {int width; int height; scalar_t__ codec_id; } ;
struct TYPE_10__ {void*** data; int * linesize; } ;
struct TYPE_9__ {void** data; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_2, AVPacket *VAR_3,
                             const AVFrame *VAR_4, int *VAR_5)
{
    uint8_t *VAR_6;
    uint8_t *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    int VAR_11, VAR_12, VAR_13;

    if ((VAR_13 = FUNC_0(VAR_2, VAR_3, VAR_2->width * VAR_2->height * 4, 0)) < 0)
        return VAR_13;
    VAR_6 = VAR_3->data;

    VAR_7 = VAR_4->data[0];
    VAR_8 = VAR_4->data[1];
    VAR_9 = VAR_4->data[2];
    VAR_10 = VAR_4->data[3];

    for (VAR_11 = 0; VAR_11 < VAR_2->height; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_2->width; VAR_12++) {
           if (VAR_2->codec_id==VAR_0) {
                *VAR_6++ = VAR_9[VAR_12];
                *VAR_6++ = VAR_8[VAR_12];
                *VAR_6++ = VAR_7[VAR_12];
                *VAR_6++ = VAR_10[VAR_12];
            } else {
                *VAR_6++ = VAR_8[VAR_12];
                *VAR_6++ = VAR_7[VAR_12];
                *VAR_6++ = VAR_9[VAR_12];
                *VAR_6++ = VAR_10[VAR_12];
            }
        }
        VAR_7 += VAR_4->linesize[0];
        VAR_8 += VAR_4->linesize[1];
        VAR_9 += VAR_4->linesize[2];
        VAR_10 += VAR_4->linesize[3];
    }

    VAR_3->flags |= VAR_1;
    *VAR_5 = 1;
    return 0;
}
