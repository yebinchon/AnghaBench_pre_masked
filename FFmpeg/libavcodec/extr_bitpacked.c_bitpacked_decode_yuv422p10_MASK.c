
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_11__ {int width; int height; } ;
struct TYPE_10__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {int data; scalar_t__ size; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_2, AVFrame *VAR_3,
                                      AVPacket *VAR_4)
{
    uint64_t VAR_5 = (uint64_t)VAR_2->width * (uint64_t)VAR_2->height * 20;
    uint64_t VAR_6 = (uint64_t)VAR_4->size * 8;
    GetBitContext VAR_7;
    uint16_t *VAR_8, *VAR_9, *VAR_10;
    int VAR_11, VAR_12, VAR_13;

    VAR_11 = FUNC_0(VAR_2, VAR_3, 0);
    if (VAR_11 < 0)
        return VAR_11;

    if (VAR_5 > VAR_6)
        return VAR_0;

    if (VAR_2->width % 2)
        return VAR_1;

    VAR_11 = FUNC_2(&VAR_7, VAR_4->data, VAR_2->width * VAR_2->height * 20);
    if (VAR_11)
        return VAR_11;

    for (VAR_12 = 0; VAR_12 < VAR_2->height; VAR_12++) {
        VAR_8 = (uint16_t*)(VAR_3->data[0] + VAR_12 * VAR_3->linesize[0]);
        VAR_9 = (uint16_t*)(VAR_3->data[1] + VAR_12 * VAR_3->linesize[1]);
        VAR_10 = (uint16_t*)(VAR_3->data[2] + VAR_12 * VAR_3->linesize[2]);

        for (VAR_13 = 0; VAR_13 < VAR_2->width; VAR_13 += 2) {
            *VAR_9++ = FUNC_1(&VAR_7, 10);
            *VAR_8++ = FUNC_1(&VAR_7, 10);
            *VAR_10++ = FUNC_1(&VAR_7, 10);
            *VAR_8++ = FUNC_1(&VAR_7, 10);
        }
    }

    return 0;
}
