
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_12__ {int key_frame; int* linesize; int ** data; int pict_type; } ;
struct TYPE_11__ {int size; int * data; } ;
struct TYPE_10__ {int change_field_order; } ;
typedef TYPE_1__ FRWUContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float,char,char,char) ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, void *VAR_4, int *VAR_5,
                        AVPacket *VAR_6)
{
    FRWUContext *VAR_7 = VAR_3->priv_data;
    int VAR_8, VAR_9;
    AVFrame *VAR_10 = VAR_4;
    const uint8_t *VAR_11 = VAR_6->data;
    const uint8_t *VAR_12 = VAR_11 + VAR_6->size;

    if (VAR_6->size < VAR_3->width * 2 * VAR_3->height + 4 + 2*8) {
        FUNC_1(VAR_3, VAR_1, "Packet is too small.\n");
        return VAR_0;
    }
    if (FUNC_2(&VAR_11) != FUNC_0('F', 'R', 'W', '1')) {
        FUNC_1(VAR_3, VAR_1, "incorrect marker\n");
        return VAR_0;
    }

    if ((VAR_9 = FUNC_3(VAR_3, VAR_10, 0)) < 0)
        return VAR_9;

    VAR_10->pict_type = VAR_2;
    VAR_10->key_frame = 1;

    for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
        int VAR_13;
        int VAR_14 = (VAR_3->height + !VAR_8) >> 1;
        int VAR_15, VAR_16 = VAR_3->width * 2 * VAR_14;
        uint8_t *VAR_17 = VAR_10->data[0];
        if (VAR_12 - VAR_11 < 8)
            return VAR_0;
        VAR_11 += 4;
        VAR_15 = FUNC_2(&VAR_11);
        if (VAR_15 < VAR_16) {
            FUNC_1(VAR_3, VAR_1, "Field size %i is too small (required %i)\n", VAR_15, VAR_16);
            return VAR_0;
        }
        if (VAR_12 - VAR_11 < VAR_15) {
            FUNC_1(VAR_3, VAR_1, "Packet is too small, need %i, have %i\n", VAR_15, (int)(VAR_12 - VAR_11));
            return VAR_0;
        }
        if (VAR_8 ^ VAR_7->change_field_order) {
            VAR_17 += VAR_10->linesize[0];
        } else if (VAR_7->change_field_order) {
            VAR_17 += 2 * VAR_10->linesize[0];
        }
        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
            if (VAR_7->change_field_order && VAR_8 && VAR_13 == VAR_14 - 1)
                VAR_17 = VAR_10->data[0];
            FUNC_4(VAR_17, VAR_11, VAR_3->width * 2);
            VAR_11 += VAR_3->width * 2;
            VAR_17 += VAR_10->linesize[0] << 1;
        }
        VAR_11 += VAR_15 - VAR_16;
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
