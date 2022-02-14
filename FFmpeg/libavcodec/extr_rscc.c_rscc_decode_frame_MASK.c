
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uLongf ;
typedef int int64_t ;
struct TYPE_29__ {int* linesize; int ** data; } ;
struct TYPE_28__ {int width; int height; scalar_t__ pix_fmt; int discard_damaged_percentage; TYPE_1__* priv_data; } ;
struct TYPE_27__ {int key_frame; int palette_has_changed; int const** data; int pict_type; } ;
struct TYPE_26__ {int size; int * data; } ;
struct TYPE_25__ {int * buffer; } ;
struct TYPE_24__ {int x; int w; int y; int h; } ;
struct TYPE_23__ {int component_size; int inflated_size; int valid_pixels; int const* palette; TYPE_9__* reference; TYPE_22__* tiles; int * inflated_buf; TYPE_2__ gbc; int tiles_size; } ;
typedef TYPE_1__ RsccContext ;
typedef TYPE_2__ GetByteContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_22__**,int *,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int const*,int,int,int) ;
 int FUNC_5 (TYPE_5__*,int ,char*,...) ;
 int * FUNC_6 (int) ;
 int * FUNC_7 (TYPE_3__*,int ,int*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 void* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int *,int) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_5__*,char*,int,...) ;
 int FUNC_16 (TYPE_5__*,TYPE_9__*,int ) ;
 int FUNC_17 (int const*,int const*,int) ;
 int FUNC_18 (int *,int*,int *,int) ;

__attribute__((used)) static int FUNC_19(AVCodecContext *VAR_12, void *VAR_13,
                                     int *VAR_14, AVPacket *VAR_15)
{
    RsccContext *VAR_16 = VAR_12->priv_data;
    GetByteContext *VAR_17 = &VAR_16->gbc;
    GetByteContext VAR_18;
    AVFrame *VAR_19 = VAR_13;
    const uint8_t *VAR_20, *VAR_21;
    uint8_t *VAR_22 = ((void*)0);
    int VAR_23, VAR_24, VAR_25 = 0;
    int VAR_26, VAR_27 = 0;

    FUNC_13(VAR_17, VAR_15->data, VAR_15->size);


    if (FUNC_9(VAR_17) < 12) {
        FUNC_5(VAR_12, VAR_4, "Packet too small (%d)\n", VAR_15->size);
        return VAR_0;
    }


    VAR_23 = FUNC_10(VAR_17);

    if (VAR_23 == 0) {
        FUNC_5(VAR_12, VAR_3, "no tiles\n");
        return VAR_15->size;
    }

    FUNC_1(&VAR_16->tiles, &VAR_16->tiles_size,
                   VAR_23 * sizeof(*VAR_16->tiles));
    if (!VAR_16->tiles) {
        VAR_27 = FUNC_0(VAR_9);
        goto end;
    }

    FUNC_5(VAR_12, VAR_3, "Frame with %d tiles.\n", VAR_23);




    if (VAR_23 > 5) {
        uLongf VAR_28;

        if (VAR_23 < 32)
            VAR_28 = FUNC_8(VAR_17);
        else
            VAR_28 = FUNC_10(VAR_17);

        FUNC_15(VAR_12, "packed tiles of size %lu.\n", VAR_28);


        if (VAR_28 != VAR_23 * VAR_11) {
            uLongf VAR_29 = VAR_23 * VAR_11;

            if (FUNC_9(VAR_17) < VAR_28) {
                VAR_27 = VAR_0;
                goto end;
            }

            VAR_22 = FUNC_6(VAR_29);
            if (!VAR_22) {
                VAR_27 = FUNC_0(VAR_9);
                goto end;
            }

            VAR_27 = FUNC_18(VAR_22, &VAR_29,
                             VAR_17->buffer, VAR_28);
            if (VAR_27) {
                FUNC_5(VAR_12, VAR_4, "Tile deflate error %d.\n", VAR_27);
                VAR_27 = VAR_1;
                goto end;
            }



            FUNC_14(VAR_17, VAR_28);
            FUNC_13(&VAR_18, VAR_22, VAR_29);
            VAR_17 = &VAR_18;
        }
    }


    for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {
        VAR_16->tiles[VAR_26].x = FUNC_10(VAR_17);
        VAR_16->tiles[VAR_26].w = FUNC_10(VAR_17);
        VAR_16->tiles[VAR_26].y = FUNC_10(VAR_17);
        VAR_16->tiles[VAR_26].h = FUNC_10(VAR_17);

        if (VAR_25 + VAR_16->tiles[VAR_26].w * (int64_t)VAR_16->tiles[VAR_26].h * VAR_16->component_size > VAR_10) {
            FUNC_5(VAR_12, VAR_4, "Invalid tile dimensions\n");
            VAR_27 = VAR_0;
            goto end;
        }

        VAR_25 += VAR_16->tiles[VAR_26].w * VAR_16->tiles[VAR_26].h * VAR_16->component_size;

        FUNC_15(VAR_12, "tile %d orig(%d,%d) %dx%d.\n", VAR_26,
                VAR_16->tiles[VAR_26].x, VAR_16->tiles[VAR_26].y,
                VAR_16->tiles[VAR_26].w, VAR_16->tiles[VAR_26].h);

        if (VAR_16->tiles[VAR_26].w == 0 || VAR_16->tiles[VAR_26].h == 0) {
            FUNC_5(VAR_12, VAR_4,
                   "invalid tile %d at (%d.%d) with size %dx%d.\n", VAR_26,
                   VAR_16->tiles[VAR_26].x, VAR_16->tiles[VAR_26].y,
                   VAR_16->tiles[VAR_26].w, VAR_16->tiles[VAR_26].h);
            VAR_27 = VAR_0;
            goto end;
        } else if (VAR_16->tiles[VAR_26].x + VAR_16->tiles[VAR_26].w > VAR_12->width ||
                   VAR_16->tiles[VAR_26].y + VAR_16->tiles[VAR_26].h > VAR_12->height) {
            FUNC_5(VAR_12, VAR_4,
                   "out of bounds tile %d at (%d.%d) with size %dx%d.\n", VAR_26,
                   VAR_16->tiles[VAR_26].x, VAR_16->tiles[VAR_26].y,
                   VAR_16->tiles[VAR_26].w, VAR_16->tiles[VAR_26].h);
            VAR_27 = VAR_0;
            goto end;
        }
    }


    VAR_17 = &VAR_16->gbc;


    if (VAR_25 < 0x100)
        VAR_24 = FUNC_8(VAR_17);
    else if (VAR_25 < 0x10000)
        VAR_24 = FUNC_10(VAR_17);
    else if (VAR_25 < 0x1000000)
        VAR_24 = FUNC_11(VAR_17);
    else
        VAR_24 = FUNC_12(VAR_17);

    FUNC_15(VAR_12, "pixel_size %d packed_size %d.\n", VAR_25, VAR_24);

    if (VAR_24 < 0) {
        FUNC_5(VAR_12, VAR_4, "Invalid tile size %d\n", VAR_24);
        VAR_27 = VAR_0;
        goto end;
    }


    if (VAR_25 == VAR_24) {
        if (FUNC_9(VAR_17) < VAR_25) {
            FUNC_5(VAR_12, VAR_4, "Insufficient input for %d\n", VAR_25);
            VAR_27 = VAR_0;
            goto end;
        }
        VAR_20 = VAR_17->buffer;
    } else {
        uLongf VAR_30 = VAR_16->inflated_size;
        if (FUNC_9(VAR_17) < VAR_24) {
            FUNC_5(VAR_12, VAR_4, "Insufficient input for %d\n", VAR_24);
            VAR_27 = VAR_0;
            goto end;
        }
        VAR_27 = FUNC_18(VAR_16->inflated_buf, &VAR_30, VAR_17->buffer, VAR_24);
        if (VAR_27) {
            FUNC_5(VAR_12, VAR_4, "Pixel deflate error %d.\n", VAR_27);
            VAR_27 = VAR_1;
            goto end;
        }
        VAR_20 = VAR_16->inflated_buf;
    }


    VAR_27 = FUNC_16(VAR_12, VAR_16->reference, 0);
    if (VAR_27 < 0)
        goto end;


    VAR_21 = VAR_20;
    for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {
        uint8_t *VAR_31 = VAR_16->reference->data[0] + VAR_16->reference->linesize[0] *
                       (VAR_12->height - VAR_16->tiles[VAR_26].y - 1) +
                       VAR_16->tiles[VAR_26].x * VAR_16->component_size;
        FUNC_4(VAR_31, -1 * VAR_16->reference->linesize[0],
                            VAR_21, VAR_16->tiles[VAR_26].w * VAR_16->component_size,
                            VAR_16->tiles[VAR_26].w * VAR_16->component_size,
                            VAR_16->tiles[VAR_26].h);
        VAR_21 += VAR_16->tiles[VAR_26].w * VAR_16->component_size * VAR_16->tiles[VAR_26].h;
    }


    VAR_27 = FUNC_2(VAR_19, VAR_16->reference);
    if (VAR_27 < 0)
        goto end;


    if (VAR_25 == VAR_16->inflated_size) {
        VAR_19->pict_type = VAR_5;
        VAR_19->key_frame = 1;
    } else {
        VAR_19->pict_type = VAR_6;
    }


    if (VAR_12->pix_fmt == VAR_7) {
        int VAR_32;
        const uint8_t *VAR_33 = FUNC_7(VAR_15,
                                                         VAR_8,
                                                         &VAR_32);
        if (VAR_33 && VAR_32 == VAR_2) {
            VAR_19->palette_has_changed = 1;
            FUNC_17(VAR_16->palette, VAR_33, VAR_2);
        } else if (VAR_33) {
            FUNC_5(VAR_12, VAR_4, "Palette size %d is wrong\n", VAR_32);
        }
        FUNC_17 (VAR_19->data[1], VAR_16->palette, VAR_2);
    }

    if (VAR_16->valid_pixels < VAR_16->inflated_size)
        VAR_16->valid_pixels += VAR_25;
    if (VAR_16->valid_pixels >= VAR_16->inflated_size * (100 - VAR_12->discard_damaged_percentage) / 100)
        *VAR_14 = 1;

    VAR_27 = VAR_15->size;
end:
    FUNC_3(VAR_22);
    return VAR_27;
}
