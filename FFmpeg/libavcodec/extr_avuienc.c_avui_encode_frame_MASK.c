
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {scalar_t__ field_order; int height; int width; } ;
struct TYPE_10__ {int* linesize; int ** data; } ;
struct TYPE_9__ {int flags; int * data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_1__*,int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, AVPacket *VAR_3,
                             const AVFrame *VAR_4, int *VAR_5)
{
    uint8_t *VAR_6;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_12 = VAR_2->field_order > VAR_0;

    if (VAR_2->height == 486) {
        VAR_9 = 10;
    } else {
        VAR_9 = 16;
    }
    VAR_11 = 2 * VAR_2->width * (VAR_2->height + VAR_9) + 8 * VAR_12;
    if ((VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_11, VAR_11)) < 0)
        return VAR_10;
    VAR_6 = VAR_3->data;
    if (!VAR_12) {
        FUNC_2(VAR_6, 0, VAR_2->width * VAR_9);
        VAR_6 += VAR_2->width * VAR_9;
    }

    for (VAR_7 = 0; VAR_7 <= VAR_12; VAR_7++) {
        uint8_t *VAR_13;
        if (VAR_12 && VAR_2->height == 486) {
            VAR_13 = VAR_4->data[0] + (1 - VAR_7) * VAR_4->linesize[0];
        } else {
            VAR_13 = VAR_4->data[0] + VAR_7 * VAR_4->linesize[0];
        }
        FUNC_2(VAR_6, 0, VAR_2->width * VAR_9 + 4 * VAR_7);
        VAR_6 += VAR_2->width * VAR_9 + 4 * VAR_7;
        for (VAR_8 = 0; VAR_8 < VAR_2->height; VAR_8 += VAR_12 + 1) {
            FUNC_1(VAR_6, VAR_13, VAR_2->width * 2);
            VAR_13 += (VAR_12 + 1) * VAR_4->linesize[0];
            VAR_6 += VAR_2->width * 2;
        }
    }

    VAR_3->flags |= VAR_1;
    *VAR_5 = 1;
    return 0;
}
