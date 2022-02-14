
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_14__ ;


typedef int uint32_t ;
struct TYPE_31__ {int width; int height; int pix_fmt; TYPE_1__* priv_data; } ;
struct TYPE_30__ {int** data; int* linesize; int palette_has_changed; int pict_type; } ;
struct TYPE_29__ {int size; int data; } ;
struct TYPE_27__ {int* buffer; } ;
struct TYPE_28__ {int width; int height; int nb_planes; TYPE_14__ g; } ;
typedef TYPE_1__ PicContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (TYPE_14__*) ;
 int FUNC_5 (TYPE_14__*) ;
 int FUNC_6 (TYPE_14__*) ;
 int FUNC_7 (TYPE_14__*) ;
 int FUNC_8 (TYPE_14__*) ;
 int FUNC_9 (TYPE_14__*,int ,int) ;
 int FUNC_10 (TYPE_14__*) ;
 int FUNC_11 (TYPE_14__*,int,int ) ;
 int FUNC_12 (TYPE_14__*,int) ;
 int FUNC_13 (TYPE_14__*) ;
 size_t** VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_4__*,int,int) ;
 int FUNC_16 (int*,int*,int) ;
 int FUNC_17 (int*,int ,int) ;
 int FUNC_18 (TYPE_1__*,TYPE_3__*,int,int,int*,int*,int*,int) ;
 int FUNC_19 (TYPE_1__*,TYPE_3__*,int,int,int*,int*) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_9,
                        void *VAR_10, int *VAR_11,
                        AVPacket *VAR_12)
{
    PicContext *VAR_13 = VAR_9->priv_data;
    AVFrame *VAR_14 = VAR_10;
    uint32_t *VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

    FUNC_9(&VAR_13->g, VAR_12->data, VAR_12->size);

    if (FUNC_5(&VAR_13->g) < 11)
        return VAR_0;

    if (FUNC_8(&VAR_13->g) != 0x1234)
        return VAR_0;

    VAR_13->width = FUNC_8(&VAR_13->g);
    VAR_13->height = FUNC_8(&VAR_13->g);
    FUNC_12(&VAR_13->g, 4);
    VAR_26 = FUNC_6(&VAR_13->g);
    VAR_16 = VAR_26 & 0xF;
    VAR_13->nb_planes = (VAR_26 >> 4) + 1;
    VAR_17 = VAR_16 * VAR_13->nb_planes;
    if (VAR_16 > 8 || VAR_17 < 1 || VAR_17 > 32) {
        FUNC_2(VAR_9, "Unsupported bit depth");
        return VAR_1;
    }

    if (FUNC_10(&VAR_13->g) == 0xFF || VAR_17 == 1 || VAR_17 == 4 || VAR_17 == 8) {
        FUNC_12(&VAR_13->g, 2);
        VAR_18 = FUNC_7(&VAR_13->g);
        VAR_19 = FUNC_7(&VAR_13->g);
        if (FUNC_5(&VAR_13->g) < VAR_19)
            return VAR_0;
    } else {
        VAR_18 = -1;
        VAR_19 = 0;
    }

    VAR_9->pix_fmt = VAR_4;

    if (FUNC_1(VAR_13->width, VAR_13->height, 0, VAR_9) < 0)
        return -1;
    if (VAR_13->width != VAR_9->width || VAR_13->height != VAR_9->height) {
        VAR_27 = FUNC_15(VAR_9, VAR_13->width, VAR_13->height);
        if (VAR_27 < 0)
            return VAR_27;
    }

    if ((VAR_27 = FUNC_14(VAR_9, VAR_14, 0)) < 0)
        return VAR_27;
    FUNC_17(VAR_14->data[0], 0, VAR_13->height * VAR_14->linesize[0]);
    VAR_14->pict_type = VAR_3;
    VAR_14->palette_has_changed = 1;

    VAR_21 = FUNC_13(&VAR_13->g) + VAR_19;
    VAR_15 = (uint32_t*)VAR_14->data[1];
    if (VAR_18 == 1 && VAR_19 > 1 && FUNC_10(&VAR_13->g) < 6) {
        int VAR_29 = FUNC_4(&VAR_13->g);
        VAR_20 = 4;
        for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++)
            VAR_15[VAR_22] = VAR_7[ VAR_6[VAR_29][VAR_22] ];
    } else if (VAR_18 == 2) {
        VAR_20 = FUNC_0(VAR_19, 16);
        for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
            int VAR_30 = FUNC_4(&VAR_13->g);
            VAR_15[VAR_22] = VAR_7[FUNC_0(VAR_30, 15)];
        }
    } else if (VAR_18 == 3) {
        VAR_20 = FUNC_0(VAR_19, 16);
        for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
            int VAR_31 = FUNC_4(&VAR_13->g);
            VAR_15[VAR_22] = VAR_8[FUNC_0(VAR_31, 63)];
        }
    } else if (VAR_18 == 4 || VAR_18 == 5) {
        VAR_20 = FUNC_0(VAR_19 / 3, 256);
        for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
            VAR_15[VAR_22] = FUNC_3(&VAR_13->g) << 2;
            VAR_15[VAR_22] |= 0xFFU << 24 | VAR_15[VAR_22] >> 6 & 0x30303;
        }
    } else {
        if (VAR_17 == 1) {
            VAR_20 = 2;
            VAR_15[0] = 0xFF000000;
            VAR_15[1] = 0xFFFFFFFF;
        } else if (VAR_17 == 2) {
            VAR_20 = 4;
            for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++)
                VAR_15[VAR_22] = VAR_7[ VAR_6[0][VAR_22] ];
        } else {
            VAR_20 = 16;
            FUNC_16(VAR_15, VAR_7, VAR_20 * 4);
        }
    }

    FUNC_17(VAR_15 + VAR_20, 0, VAR_2 - VAR_20 * 4);

    FUNC_11(&VAR_13->g, VAR_21, VAR_5);

    VAR_28 = 0;
    VAR_24 = VAR_13->height - 1;
    if (FUNC_7(&VAR_13->g)) {
        VAR_23 = 0;
        VAR_25 = 0;
        while (FUNC_5(&VAR_13->g) >= 6) {
            int VAR_32, VAR_33, VAR_34, VAR_35;

            VAR_34 = FUNC_5(&VAR_13->g);
            VAR_35 = FUNC_7(&VAR_13->g);
            VAR_32 = VAR_34 - FUNC_0(VAR_34, VAR_35);

            FUNC_12(&VAR_13->g, 2);
            VAR_33 = FUNC_4(&VAR_13->g);

            while (VAR_25 < VAR_13->nb_planes &&
                   FUNC_5(&VAR_13->g) > VAR_32) {
                int VAR_36 = 1;
                VAR_28 = FUNC_4(&VAR_13->g);
                if (VAR_28 == VAR_33) {
                    VAR_36 = FUNC_4(&VAR_13->g);
                    if (VAR_36 == 0)
                        VAR_36 = FUNC_7(&VAR_13->g);
                    VAR_28 = FUNC_4(&VAR_13->g);
                }
                if (!FUNC_5(&VAR_13->g))
                    break;

                if (VAR_16 == 8) {
                    FUNC_19(VAR_13, VAR_14, VAR_28, VAR_36, &VAR_23, &VAR_24);
                    if (VAR_24 < 0)
                        goto finish;
                } else {
                    FUNC_18(VAR_13, VAR_14, VAR_28, VAR_36, &VAR_23, &VAR_24, &VAR_25, VAR_16);
                }
            }
        }

        if (VAR_13->nb_planes - VAR_25 > 1)
            return VAR_0;

        if (VAR_25 < VAR_13->nb_planes && VAR_23 < VAR_9->width) {
            int VAR_37 = (VAR_24 + 1) * VAR_9->width - VAR_23;
            if (VAR_16 == 8)
                FUNC_19(VAR_13, VAR_14, VAR_28, VAR_37, &VAR_23, &VAR_24);
            else
                FUNC_18(VAR_13, VAR_14, VAR_28, VAR_37 / (8 / VAR_16), &VAR_23, &VAR_24, &VAR_25, VAR_16);
        }
    } else {
        while (VAR_24 >= 0 && FUNC_5(&VAR_13->g) > 0) {
            FUNC_16(VAR_14->data[0] + VAR_24 * VAR_14->linesize[0], VAR_13->g.buffer, FUNC_0(VAR_9->width, FUNC_5(&VAR_13->g)));
            FUNC_12(&VAR_13->g, VAR_9->width);
            VAR_24--;
        }
    }
finish:

    *VAR_11 = 1;
    return VAR_12->size;
}
