
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_12__ {int height; int width; scalar_t__ discard_damaged_percentage; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int* linesize; int key_frame; int pict_type; int ** data; } ;
struct TYPE_10__ {int size; int data; } ;
struct TYPE_9__ {int size; int stride; int * decbuffer; scalar_t__ initial_line; int pb; int lut; int gb; } ;
typedef TYPE_1__ ProSumerContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int *,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__* const,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int,int *,int,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_2, void *VAR_3,
                        int *VAR_4, AVPacket *VAR_5)
{
    ProSumerContext *VAR_6 = VAR_2->priv_data;
    AVFrame * const VAR_7 = VAR_3;
    int VAR_8;

    if (VAR_5->size <= 32)
        return VAR_0;

    FUNC_3(&VAR_6->gb, VAR_5->data, VAR_5->size);
    FUNC_4(&VAR_6->pb, VAR_6->decbuffer, VAR_6->size);
    VAR_8 = FUNC_6(&VAR_6->gb, FUNC_0(VAR_5->data + 28) >> 1, &VAR_6->pb, VAR_6->lut);
    if (VAR_8 < 0)
        return VAR_8;
    if (FUNC_2(&VAR_6->pb) > VAR_6->size * (int64_t)VAR_2->discard_damaged_percentage / 100)
        return VAR_0;

    FUNC_1(VAR_6->size >= FUNC_2(&VAR_6->pb));
    FUNC_8(VAR_6->decbuffer + FUNC_5(&VAR_6->pb), 0, FUNC_2(&VAR_6->pb));

    FUNC_9((uint32_t *)VAR_6->decbuffer, 0, (uint32_t *)VAR_6->initial_line, VAR_6->stride, 1);
    FUNC_9((uint32_t *)VAR_6->decbuffer, VAR_6->stride, (uint32_t *)VAR_6->decbuffer, VAR_6->stride, VAR_2->height - 1);

    VAR_8 = FUNC_7(VAR_2, VAR_7, 0);
    if (VAR_8 < 0)
        return VAR_8;

    for (int VAR_9 = VAR_2->height - 1; VAR_9 >= 0 ; VAR_9--) {
        uint8_t *VAR_10 = &VAR_7->data[0][VAR_9 * VAR_7->linesize[0]];
        uint8_t *VAR_11 = &VAR_7->data[1][VAR_9 * VAR_7->linesize[1]];
        uint8_t *VAR_12 = &VAR_7->data[2][VAR_9 * VAR_7->linesize[2]];
        const uint8_t *VAR_13 = VAR_6->decbuffer + (VAR_2->height - 1 - VAR_9) * VAR_6->stride;

        for (int VAR_14 = 0; VAR_14 < VAR_2->width; VAR_14 += 8) {
            *(VAR_11++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;
            *(VAR_12++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;

            *(VAR_11++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;
            *(VAR_12++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;

            *(VAR_10++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;
            *(VAR_10++) = *VAR_13++;
        }
    }

    VAR_7->pict_type = VAR_1;
    VAR_7->key_frame = 1;
    *VAR_4 = 1;

    return VAR_5->size;
}
