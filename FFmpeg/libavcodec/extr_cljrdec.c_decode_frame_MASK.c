
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int height; int width; } ;
struct TYPE_10__ {int key_frame; int** data; int* linesize; int pict_type; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__* const,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_3,
                        void *VAR_4, int *VAR_5,
                        AVPacket *VAR_6)
{
    const uint8_t *VAR_7 = VAR_6->data;
    int VAR_8 = VAR_6->size;
    GetBitContext VAR_9;
    AVFrame * const VAR_10 = VAR_4;
    int VAR_11, VAR_12, VAR_13;

    if (VAR_3->height <= 0 || VAR_3->width <= 0) {
        FUNC_0(VAR_3, VAR_1, "Invalid width or height\n");
        return VAR_0;
    }

    if (VAR_8 / VAR_3->height < VAR_3->width) {
        FUNC_0(VAR_3, VAR_1,
               "Resolution larger than buffer size. Invalid header?\n");
        return VAR_0;
    }

    if ((VAR_13 = FUNC_1(VAR_3, VAR_10, 0)) < 0)
        return VAR_13;
    VAR_10->pict_type = VAR_2;
    VAR_10->key_frame = 1;

    FUNC_3(&VAR_9, VAR_7, VAR_8 * 8);

    for (VAR_12 = 0; VAR_12 < VAR_3->height; VAR_12++) {
        uint8_t *VAR_14 = &VAR_10->data[0][VAR_12 * VAR_10->linesize[0]];
        uint8_t *VAR_15 = &VAR_10->data[1][VAR_12 * VAR_10->linesize[1]];
        uint8_t *VAR_16 = &VAR_10->data[2][VAR_12 * VAR_10->linesize[2]];
        for (VAR_11 = 0; VAR_11 < VAR_3->width; VAR_11 += 4) {
            VAR_14[3] = (FUNC_2(&VAR_9, 5)*33) >> 2;
            VAR_14[2] = (FUNC_2(&VAR_9, 5)*33) >> 2;
            VAR_14[1] = (FUNC_2(&VAR_9, 5)*33) >> 2;
            VAR_14[0] = (FUNC_2(&VAR_9, 5)*33) >> 2;
            VAR_14 += 4;
            *(VAR_15++) = FUNC_2(&VAR_9, 6) << 2;
            *(VAR_16++) = FUNC_2(&VAR_9, 6) << 2;
        }
    }

    *VAR_5 = 1;

    return VAR_8;
}
