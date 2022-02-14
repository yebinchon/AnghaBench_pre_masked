
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int int64_t ;
struct TYPE_15__ {int avail_in; int avail_out; int * next_out; scalar_t__ next_in; } ;
struct TYPE_12__ {int bpp; TYPE_7__* prev_frame; TYPE_4__ zstream; int * block_data; } ;
typedef TYPE_1__ WCMVContext ;
struct TYPE_16__ {int* linesize; int key_frame; int pict_type; int ** data; } ;
struct TYPE_14__ {int width; int height; int pix_fmt; int frame_number; TYPE_1__* priv_data; } ;
struct TYPE_13__ {int size; int * data; } ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,TYPE_7__*) ;
 int FUNC_1 (int **,int*,int ,int ,int,int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 int FUNC_3 (int *) ;
 long long FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,TYPE_7__*,int) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_14(AVCodecContext *VAR_12,
                        void *VAR_13, int *VAR_14,
                        AVPacket *VAR_15)
{
    WCMVContext *VAR_16 = VAR_12->priv_data;
    AVFrame *VAR_17 = VAR_13;
    int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22 = 0, VAR_23 = 0, VAR_24 = VAR_16->bpp;
    GetByteContext VAR_25;
    uint8_t *VAR_26;

    VAR_21 = FUNC_13(&VAR_16->zstream);
    if (VAR_21 != VAR_9) {
        FUNC_2(VAR_12, VAR_2, "Inflate reset error: %d\n", VAR_21);
        return VAR_0;
    }

    FUNC_7(&VAR_25, VAR_15->data, VAR_15->size);
    VAR_19 = FUNC_5(&VAR_25);
    if (!VAR_19)
        VAR_23 |= VAR_5;

    if ((VAR_21 = FUNC_11(VAR_12, VAR_16->prev_frame, VAR_23)) < 0)
        return VAR_21;

    if (VAR_19 > 5) {
        GetByteContext VAR_27;
        int VAR_28 = 0, VAR_29;

        if (VAR_19 * 8 >= 0xFFFF)
            VAR_29 = FUNC_6(&VAR_25);
        else if (VAR_19 * 8 >= 0xFF)
            VAR_29 = FUNC_5(&VAR_25);
        else
            VAR_29 = FUNC_3(&VAR_25);

        VAR_18 = FUNC_10(&VAR_25);
        if (VAR_29 > VAR_15->size - VAR_18)
            return VAR_1;

        VAR_16->zstream.next_in = VAR_15->data + VAR_18;
        VAR_16->zstream.avail_in = VAR_29;
        VAR_16->zstream.next_out = VAR_16->block_data;
        VAR_16->zstream.avail_out = sizeof(VAR_16->block_data);

        VAR_20 = FUNC_12(&VAR_16->zstream, VAR_8);
        if (VAR_20 != VAR_10) {
            FUNC_2(VAR_12, VAR_2,
                   "Inflate failed with return code: %d.\n", VAR_20);
            return VAR_1;
        }

        VAR_21 = FUNC_13(&VAR_16->zstream);
        if (VAR_21 != VAR_9) {
            FUNC_2(VAR_12, VAR_2, "Inflate reset error: %d\n", VAR_21);
            return VAR_0;
        }

        FUNC_9(&VAR_25, VAR_29);
        FUNC_7(&VAR_27, VAR_16->block_data, VAR_19 * 8);

        for (int VAR_30 = 0; VAR_30 < VAR_19; VAR_30++) {
            int VAR_31, VAR_32;

            FUNC_9(&VAR_27, 4);
            VAR_31 = FUNC_5(&VAR_27);
            VAR_32 = FUNC_5(&VAR_27);
            if (VAR_28 + VAR_24 * (int64_t)VAR_31 * VAR_32 > VAR_6)
                return VAR_1;
            VAR_28 += VAR_24 * VAR_31 * VAR_32;
        }

        if (VAR_28 >= 0xFFFF)
            FUNC_9(&VAR_25, 3);
        else if (VAR_28 >= 0xFF)
            FUNC_9(&VAR_25, 2);
        else
            FUNC_9(&VAR_25, 1);

        VAR_18 = FUNC_10(&VAR_25);

        VAR_16->zstream.next_in = VAR_15->data + VAR_18;
        VAR_16->zstream.avail_in = VAR_15->size - VAR_18;

        FUNC_7(&VAR_25, VAR_16->block_data, VAR_19 * 8);
    } else if (VAR_19) {
        int VAR_33 = 0;

        FUNC_8(&VAR_25, 2, VAR_7);

        for (int VAR_34 = 0; VAR_34 < VAR_19; VAR_34++) {
            int VAR_35, VAR_36;

            FUNC_9(&VAR_25, 4);
            VAR_35 = FUNC_5(&VAR_25);
            VAR_36 = FUNC_5(&VAR_25);
            if (VAR_33 + VAR_24 * (int64_t)VAR_35 * VAR_36 > VAR_6)
                return VAR_1;
            VAR_33 += VAR_24 * VAR_35 * VAR_36;
        }

        if (VAR_33 >= 0xFFFF)
            FUNC_9(&VAR_25, 3);
        else if (VAR_33 >= 0xFF)
            FUNC_9(&VAR_25, 2);
        else
            FUNC_9(&VAR_25, 1);

        VAR_18 = FUNC_10(&VAR_25);

        VAR_16->zstream.next_in = VAR_15->data + VAR_18;
        VAR_16->zstream.avail_in = VAR_15->size - VAR_18;

        FUNC_8(&VAR_25, 2, VAR_7);
    }

    if (FUNC_4(&VAR_25) < 8LL * VAR_19)
        return VAR_1;

    if (!VAR_12->frame_number) {
        ptrdiff_t VAR_37[4] = { VAR_16->prev_frame->linesize[0], 0, 0, 0 };
        FUNC_1(VAR_16->prev_frame->data, VAR_37, VAR_12->pix_fmt, 0,
                            VAR_12->width, VAR_12->height);
    }

    for (int VAR_38 = 0; VAR_38 < VAR_19; VAR_38++) {
        int VAR_39, VAR_40, VAR_41, VAR_42;

        VAR_39 = FUNC_5(&VAR_25);
        VAR_40 = FUNC_5(&VAR_25);
        VAR_41 = FUNC_5(&VAR_25);
        VAR_42 = FUNC_5(&VAR_25);

        if (VAR_19 == 1 && VAR_39 == 0 && VAR_40 == 0 && VAR_41 == VAR_12->width && VAR_42 == VAR_12->height)
            VAR_22 = 1;

        if (VAR_39 + VAR_41 > VAR_12->width || VAR_40 + VAR_42 > VAR_12->height)
            return VAR_1;

        if (VAR_41 > VAR_12->width || VAR_42 > VAR_12->height)
            return VAR_1;

        VAR_26 = VAR_16->prev_frame->data[0] + (VAR_12->height - VAR_40 - 1) * VAR_16->prev_frame->linesize[0] + VAR_39 * VAR_24;
        for (int VAR_43 = 0; VAR_43 < VAR_42; VAR_43++) {
            VAR_16->zstream.next_out = VAR_26;
            VAR_16->zstream.avail_out = VAR_41 * VAR_24;

            VAR_20 = FUNC_12(&VAR_16->zstream, VAR_11);
            if (VAR_20 != VAR_9 && VAR_20 != VAR_10) {
                FUNC_2(VAR_12, VAR_2,
                       "Inflate failed with return code: %d.\n", VAR_20);
                return VAR_1;
            }

            VAR_26 -= VAR_16->prev_frame->linesize[0];
        }
    }

    VAR_16->prev_frame->key_frame = VAR_22;
    VAR_16->prev_frame->pict_type = VAR_22 ? VAR_3 : VAR_4;

    if ((VAR_21 = FUNC_0(VAR_17, VAR_16->prev_frame)) < 0)
        return VAR_21;

    *VAR_14 = 1;

    return VAR_15->size;
}
