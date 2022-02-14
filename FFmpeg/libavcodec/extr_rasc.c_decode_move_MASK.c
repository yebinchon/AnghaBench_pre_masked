
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {unsigned int width; unsigned int height; TYPE_3__* priv_data; } ;
struct TYPE_14__ {int * data; } ;
struct TYPE_13__ {int bpp; TYPE_2__* frame2; int * delta; int delta_size; TYPE_1__* frame1; int gb; } ;
struct TYPE_12__ {int* linesize; int ** data; } ;
struct TYPE_11__ {int* linesize; int ** data; } ;
typedef TYPE_3__ RASCContext ;
typedef int GetByteContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int *,int) ;
 int FUNC_2 (TYPE_5__*,char*,unsigned int) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,unsigned int) ;
 unsigned int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_5__*,TYPE_4__*,unsigned int,unsigned int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_4,
                       AVPacket *VAR_5, unsigned VAR_6)
{
    RASCContext *VAR_7 = VAR_4->priv_data;
    GetByteContext *VAR_8 = &VAR_7->gb;
    GetByteContext VAR_9;
    unsigned VAR_10, VAR_11, VAR_12;
    unsigned VAR_13;
    int VAR_14;

    VAR_10 = FUNC_8(VAR_8);
    FUNC_7(VAR_8, 8);
    VAR_12 = FUNC_5(VAR_8);
    FUNC_7(VAR_8, 8);
    VAR_11 = FUNC_5(VAR_8);

    if (VAR_12 > VAR_3 / 16 || VAR_12 > VAR_4->width * VAR_4->height)
        return VAR_0;

    VAR_13 = 16 * VAR_12;

    if (VAR_11 == 1) {
        VAR_14 = FUNC_9(VAR_4, VAR_5,
                          VAR_6 - (FUNC_8(VAR_8) - VAR_10),
                          VAR_13);
        if (VAR_14 < 0)
            return VAR_14;
        FUNC_6(&VAR_9, VAR_7->delta, VAR_13);
    } else if (VAR_11 == 0) {
        FUNC_6(&VAR_9, VAR_5->data + FUNC_8(VAR_8),
                         FUNC_3(VAR_8));
    } else if (VAR_11 == 2) {
        FUNC_2(VAR_4, "compression %d", VAR_11);
        return VAR_1;
    } else {
        return VAR_0;
    }

    if (FUNC_3(&VAR_9) < VAR_13)
        return VAR_0;

    for (int VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
        uint8_t *VAR_23, *VAR_24, *VAR_25;
        int VAR_26, VAR_27;

        VAR_16 = FUNC_4(&VAR_9);
        VAR_17 = FUNC_4(&VAR_9);
        VAR_18 = FUNC_4(&VAR_9);
        VAR_19 = FUNC_4(&VAR_9);
        VAR_20 = FUNC_4(&VAR_9);
        VAR_21 = FUNC_4(&VAR_9);
        VAR_22 = FUNC_4(&VAR_9);
        FUNC_7(&VAR_9, 2);

        if (VAR_17 >= VAR_4->width || VAR_18 >= VAR_4->height ||
            VAR_19 >= VAR_4->width || VAR_20 >= VAR_4->height ||
            VAR_21 >= VAR_4->width || VAR_22 >= VAR_4->height) {
            continue;
        }

        if (VAR_17 >= VAR_19 || VAR_18 >= VAR_20)
            continue;

        VAR_26 = VAR_19 - VAR_17;
        VAR_27 = VAR_20 - VAR_18;

        if (VAR_21 + VAR_26 > VAR_4->width || VAR_22 + VAR_27 > VAR_4->height)
            continue;

        if (!VAR_7->frame2->data[0] || !VAR_7->frame1->data[0])
            return VAR_0;

        VAR_24 = VAR_7->frame1->data[0] + VAR_7->frame1->linesize[0] * (VAR_18 + VAR_27 - 1) + VAR_17 * VAR_7->bpp;
        VAR_25 = VAR_7->frame2->data[0] + VAR_7->frame2->linesize[0] * (VAR_18 + VAR_27 - 1) + VAR_17 * VAR_7->bpp;
        VAR_23 = VAR_7->frame2->data[0] + VAR_7->frame2->linesize[0] * (VAR_22 + VAR_27 - 1) + VAR_21 * VAR_7->bpp;

        if (VAR_16 == 2) {
            for (int VAR_28 = 0; VAR_28 < VAR_27; VAR_28++) {
                FUNC_10(VAR_24, VAR_25, VAR_26 * VAR_7->bpp);
                VAR_24 -= VAR_7->frame1->linesize[0];
                VAR_25 -= VAR_7->frame2->linesize[0];
            }
        } else if (VAR_16 == 1) {
            for (int VAR_29 = 0; VAR_29 < VAR_27; VAR_29++) {
                FUNC_11(VAR_25, 0, VAR_26 * VAR_7->bpp);
                VAR_25 -= VAR_7->frame2->linesize[0];
            }
        } else if (VAR_16 == 0) {
            uint8_t *VAR_30;

            FUNC_1(&VAR_7->delta, &VAR_7->delta_size, VAR_26 * VAR_27 * VAR_7->bpp);
            VAR_30 = VAR_7->delta;
            if (!VAR_30)
                return FUNC_0(VAR_2);

            for (int VAR_31 = 0; VAR_31 < VAR_27; VAR_31++) {
                FUNC_10(VAR_30 + VAR_31 * VAR_26 * VAR_7->bpp, VAR_23, VAR_26 * VAR_7->bpp);
                VAR_23 -= VAR_7->frame2->linesize[0];
            }

            for (int VAR_32 = 0; VAR_32 < VAR_27; VAR_32++) {
                FUNC_10(VAR_25, VAR_30 + VAR_32 * VAR_26 * VAR_7->bpp, VAR_26 * VAR_7->bpp);
                VAR_25 -= VAR_7->frame2->linesize[0];
            }
        } else {
            return VAR_0;
        }
    }

    FUNC_7(VAR_8, VAR_6 - (FUNC_8(VAR_8) - VAR_10));

    return 0;
}
