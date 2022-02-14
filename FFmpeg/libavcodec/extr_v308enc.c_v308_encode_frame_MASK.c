
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_11__ {int width; int height; } ;
struct TYPE_10__ {void*** data; int * linesize; } ;
struct TYPE_9__ {void** data; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1, AVPacket *VAR_2,
                             const AVFrame *VAR_3, int *VAR_4)
{
    uint8_t *VAR_5;
    uint8_t *VAR_6, *VAR_7, *VAR_8;
    int VAR_9, VAR_10, VAR_11;

    if ((VAR_11 = FUNC_0(VAR_1, VAR_2, VAR_1->width * VAR_1->height * 3, 0)) < 0)
        return VAR_11;
    VAR_5 = VAR_2->data;

    VAR_6 = VAR_3->data[0];
    VAR_7 = VAR_3->data[1];
    VAR_8 = VAR_3->data[2];

    for (VAR_9 = 0; VAR_9 < VAR_1->height; VAR_9++) {
        for (VAR_10 = 0; VAR_10 < VAR_1->width; VAR_10++) {
            *VAR_5++ = VAR_8[VAR_10];
            *VAR_5++ = VAR_6[VAR_10];
            *VAR_5++ = VAR_7[VAR_10];
        }
        VAR_6 += VAR_3->linesize[0];
        VAR_7 += VAR_3->linesize[1];
        VAR_8 += VAR_3->linesize[2];
    }

    VAR_2->flags |= VAR_0;
    *VAR_4 = 1;
    return 0;
}
