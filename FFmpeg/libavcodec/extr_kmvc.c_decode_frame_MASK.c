
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_16__ {int width; int height; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int key_frame; int palette_has_changed; int const** data; int * linesize; int pict_type; } ;
struct TYPE_14__ {int size; int data; } ;
struct TYPE_13__ {int* pal; int palsize; int const* cur; int const* prev; int const* frm0; int const* frm1; int g; scalar_t__ setpal; } ;
typedef TYPE_1__ KmvcContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


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
 int FUNC_0 (TYPE_4__*,int ,char*,int) ;
 int const* FUNC_1 (TYPE_2__*,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_1__* const,int,int) ;
 int FUNC_10 (TYPE_1__* const,int,int) ;
 int FUNC_11 (int const*,int const*,int) ;
 int FUNC_12 (int const*,int ,int) ;

__attribute__((used)) static int FUNC_13(AVCodecContext * VAR_10, void *VAR_11, int *VAR_12,
                        AVPacket *VAR_13)
{
    KmvcContext *const VAR_14 = VAR_10->priv_data;
    AVFrame *VAR_15 = VAR_11;
    uint8_t *VAR_16, *VAR_17;
    int VAR_18, VAR_19;
    int VAR_20;
    int VAR_21;
    int VAR_22;
    const uint8_t *VAR_23 = FUNC_1(VAR_13, VAR_5, &VAR_22);

    FUNC_4(&VAR_14->g, VAR_13->data, VAR_13->size);

    if ((VAR_19 = FUNC_8(VAR_10, VAR_15, 0)) < 0)
        return VAR_19;

    VAR_20 = FUNC_3(&VAR_14->g);


    if (FUNC_5(&VAR_14->g) == 127) {
        FUNC_7(&VAR_14->g, 3);
        for (VAR_18 = 0; VAR_18 < 127; VAR_18++) {
            VAR_14->pal[VAR_18 + (VAR_20 & 0x81)] = 0xFFU << 24 | FUNC_2(&VAR_14->g);
            FUNC_7(&VAR_14->g, 1);
        }
        FUNC_6(&VAR_14->g, -127 * 4 - 3, VAR_9);
    }

    if (VAR_20 & VAR_6) {
        VAR_15->key_frame = 1;
        VAR_15->pict_type = VAR_3;
    } else {
        VAR_15->key_frame = 0;
        VAR_15->pict_type = VAR_4;
    }

    if (VAR_20 & VAR_8) {
        VAR_15->palette_has_changed = 1;

        for (VAR_18 = 1; VAR_18 <= VAR_14->palsize; VAR_18++) {
            VAR_14->pal[VAR_18] = 0xFFU << 24 | FUNC_2(&VAR_14->g);
        }
    }

    if (VAR_23 && VAR_22 == VAR_1) {
        VAR_15->palette_has_changed = 1;
        FUNC_11(VAR_14->pal, VAR_23, VAR_1);
    } else if (VAR_23) {
        FUNC_0(VAR_10, VAR_2, "Palette size %d is wrong\n", VAR_22);
    }

    if (VAR_14->setpal) {
        VAR_14->setpal = 0;
        VAR_15->palette_has_changed = 1;
    }


    FUNC_11(VAR_15->data[1], VAR_14->pal, 1024);

    VAR_21 = FUNC_3(&VAR_14->g);

    if (VAR_21 != 8 && VAR_21 != 127) {
        FUNC_0(VAR_10, VAR_2, "Block size = %i\n", VAR_21);
        return VAR_0;
    }
    FUNC_12(VAR_14->cur, 0, 320 * 200);
    switch (VAR_20 & VAR_7) {
    case 0:
    case 1:
        FUNC_11(VAR_14->cur, VAR_14->prev, 320 * 200);
        break;
    case 3:
        FUNC_10(VAR_14, VAR_10->width, VAR_10->height);
        break;
    case 4:
        FUNC_9(VAR_14, VAR_10->width, VAR_10->height);
        break;
    default:
        FUNC_0(VAR_10, VAR_2, "Unknown compression method %i\n", VAR_20 & VAR_7);
        return VAR_0;
    }

    VAR_16 = VAR_15->data[0];
    VAR_17 = VAR_14->cur;
    for (VAR_18 = 0; VAR_18 < VAR_10->height; VAR_18++) {
        FUNC_11(VAR_16, VAR_17, VAR_10->width);
        VAR_17 += 320;
        VAR_16 += VAR_15->linesize[0];
    }


    if (VAR_14->cur == VAR_14->frm0) {
        VAR_14->cur = VAR_14->frm1;
        VAR_14->prev = VAR_14->frm0;
    } else {
        VAR_14->cur = VAR_14->frm0;
        VAR_14->prev = VAR_14->frm1;
    }

    *VAR_12 = 1;


    return VAR_13->size;
}
