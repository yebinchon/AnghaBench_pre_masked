
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_21__ {TYPE_1__* priv_data; } ;
struct TYPE_20__ {int key_frame; int * data; int pict_type; } ;
struct TYPE_19__ {int size; scalar_t__ data; } ;
struct TYPE_18__ {int width; int height; int version; int palette; int current; int processed; int previous; } ;
typedef TYPE_1__ Hnm4VideoContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_4__*,int ,char*,...) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_7, void *VAR_8,
                            int *VAR_9, AVPacket *VAR_10)
{
    AVFrame *VAR_11 = VAR_8;
    Hnm4VideoContext *VAR_12 = VAR_7->priv_data;
    int VAR_13;
    uint16_t VAR_14;

    if (VAR_10->size < 8) {
        FUNC_1(VAR_7, VAR_1, "packet too small\n");
        return VAR_0;
    }

    VAR_14 = FUNC_0(VAR_10->data + 4);

    if (VAR_14 == VAR_6) {
        FUNC_7(VAR_7, VAR_10->data, VAR_10->size);
    } else if (VAR_14 == VAR_5) {
        if (VAR_10->size < 12) {
            FUNC_1(VAR_7, VAR_1, "packet too small\n");
            return VAR_0;
        }
        if ((VAR_13 = FUNC_5(VAR_7, VAR_11, 0)) < 0)
            return VAR_13;

        FUNC_10(VAR_7, VAR_10->data + 12, VAR_10->size - 12);
        FUNC_8(VAR_12->previous, VAR_12->current, VAR_12->width * VAR_12->height);
        if (VAR_12->version == 0x4a)
            FUNC_8(VAR_12->processed, VAR_12->current, VAR_12->width * VAR_12->height);
        else
            FUNC_9(VAR_7);
        FUNC_2(VAR_7, VAR_11);
        VAR_11->pict_type = VAR_2;
        VAR_11->key_frame = 1;
        FUNC_8(VAR_11->data[1], VAR_12->palette, 256 * 4);
        *VAR_9 = 1;
    } else if (VAR_14 == VAR_4) {
        if ((VAR_13 = FUNC_5(VAR_7, VAR_11, 0)) < 0)
            return VAR_13;

        if (VAR_12->version == 0x4a) {
            FUNC_4(VAR_7, VAR_10->data + 8, VAR_10->size - 8);
            FUNC_8(VAR_12->processed, VAR_12->current, VAR_12->width * VAR_12->height);
        } else {
            int VAR_15 = FUNC_3(VAR_7, VAR_10->data + 8, VAR_10->size - 8);
            if (VAR_15 < 0)
                return VAR_15;
            FUNC_9(VAR_7);
        }
        FUNC_2(VAR_7, VAR_11);
        VAR_11->pict_type = VAR_3;
        VAR_11->key_frame = 0;
        FUNC_8(VAR_11->data[1], VAR_12->palette, 256 * 4);
        *VAR_9 = 1;
        FUNC_6(VAR_12);
    } else {
        FUNC_1(VAR_7, VAR_1, "invalid chunk id: %d\n", VAR_14);
        return VAR_0;
    }

    return VAR_10->size;
}
